// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HandEngineLiveLink_LLSource.h"

THIRD_PARTY_INCLUDES_START
#include "client.h"
THIRD_PARTY_INCLUDES_END

#include "ILiveLinkClient.h"
#include "LiveLinkTypes.h"
#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"

#include "Async/Async.h"
#include "Common/TcpSocketBuilder.h"
#include "HAL/RunnableThread.h"
#include "Json.h"
#include "Sockets.h"
#include "SocketSubsystem.h"

bool running = false;
handEngine::v1::HandEngineClient* client;
std::string mConnect;
int performerId = 0;
bool performerInit = false;




using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientAsyncReader;
using grpc::CompletionQueue;

#define LOCTEXT_NAMESPACE "HandEngineLiveLink_LLSource"

#define RECV_BUFFER_SIZE 1024 * 1024

FHandEngineLiveLink_LLSource::FHandEngineLiveLink_LLSource(FIPv4Endpoint InEndpoint)
	: Socket(nullptr)
	, Stopping(false)
	, Thread(nullptr)
	, WaitTime(FTimespan::FromMilliseconds(10))
{
	// defaults
	DeviceEndpoint = InEndpoint;

	FString ipAdd = (DeviceEndpoint.ToInternetAddr().Get().ToString(true));
	mConnect = std::string(TCHAR_TO_UTF8(*ipAdd));

	SourceStatus = LOCTEXT("SourceStatus_DeviceNotFound", "Device Not Found");
	SourceType = LOCTEXT("HandEngineLiveLink_LLSourceType", "HandEngine LiveLink");
	SourceMachineName = FText::FromString(ipAdd);

	

	//Start Source
		
		Start();

}

FHandEngineLiveLink_LLSource::~FHandEngineLiveLink_LLSource()
{
	Stop();
	
	if (Thread)
	{
		
	
		//Thread->WaitForCompletion();
		//delete Thread;
		//Thread = nullptr;

		
	}
	if (Socket)
	{
		Socket->Shutdown(ESocketShutdownMode::ReadWrite);
		Socket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket);
		Socket = nullptr;
	}

	
}

void FHandEngineLiveLink_LLSource::ReceiveClient(ILiveLinkClient* InClient, FGuid InSourceGuid)
{
	Client = InClient;
	SourceGuid = InSourceGuid;
}


bool FHandEngineLiveLink_LLSource::IsSourceStillValid() const
{
	// Source is valid if we have a valid thread and socket
	bool bIsSourceValid = !Stopping;
	return bIsSourceValid;
}


bool FHandEngineLiveLink_LLSource::RequestSourceShutdown()
{
	

	return true;
}
// FRunnable interface

void FHandEngineLiveLink_LLSource::Start()
{
	
	client = new handEngine::v1::HandEngineClient(mConnect);
	ThreadName = "HandEngine Receiver ";
	ThreadName.AppendInt(FAsyncThreadIndex::GetNext());

	Thread = FRunnableThread::Create(this, *ThreadName, 128 * 1024, TPri_AboveNormal, FPlatformAffinity::GetPoolThreadMask());

	
}

void FHandEngineLiveLink_LLSource::Stop()
{
	
	
	Stopping = true;

	running = false;

	//client = nullptr;
	delete client;

	

	
	

	


}

uint32 FHandEngineLiveLink_LLSource::Run()
{
	//TSharedRef<FInternetAddr> Sender = SocketSubsystem->CreateInternetAddr();



	while (!running)
	{
		
		if (!Stopping) {
			
			running = true;
		}
		else {

		}


	
		
	}




	//////////////////////////////////////////////////////////



   //animstream setup



	//Anim grpc Variables
	ClientContext context;
	CompletionQueue cq;

	//Animation Stream Parameter Variables
	handEngine::v1::StageAnimationResponse response;
	handEngine::v1::StageAnimationRequest request;
	handEngine::v1::ProfileMeta* profile;
	google::protobuf::RepeatedPtrField<handEngine::v1::ProfileMeta>* profilelist = request.mutable_profilemeta();
	handEngine::v1::StreamSettings* streamSettings = request.mutable_settings();

	//Anim Stream Settings
	streamSettings->set_coordinatesystem(handEngine::v1::CoordinateSystem::LOCAL);
	streamSettings->set_includemetacarpal(true);

	//Performer GPRC Variables
	ClientContext context2;
	CompletionQueue cq2;
	handEngine::v1::BlankRequest blankRequest;
	handEngine::v1::PerformerNameListResponse performerResponse;

	//Performer Stream Call
	std::unique_ptr<ClientAsyncReader<handEngine::v1::PerformerNameListResponse>> statereader(client->Performer->AsyncGetPerformersStream(&context2, blankRequest, &cq2, (void*)0));
	//Exit Condition Setup
	grpc::Status performerStatus;
	statereader->Read(&performerResponse, (void*)1);
	statereader->Finish(&performerStatus, (void*)2);
	void* got_tag2;
	bool ok2;
	grpc::CompletionQueue::NextStatus ret2 = CompletionQueue::NextStatus::TIMEOUT;

	//Handle Performer Stream 
	while (!performerInit) {

		ok2 = false;
		ret2 = cq2.AsyncNext(&got_tag2, &ok2, gpr_time_add(gpr_now(GPR_CLOCK_REALTIME), gpr_time_from_seconds(1, GPR_TIMESPAN)));
		if (ret2 && ok2 && got_tag2 == (void*)2) {
			if (!performerStatus.ok()) {

				//performerId = 0;
				break;
			}
		}
		else if (ret2 && ok2 && got_tag2 == (void*)1) {
			//Message is available
			statereader->Read(&performerResponse, (void*)1);
			auto performerlist = performerResponse.performers();
			performerId = performerlist[0].performerid();
			performerInit = true;

		}


	}




	//add profiles to Stream Request (performer 0 left and right for this test)
	profile = request.add_profilemeta();
	profile->set_performerid(performerId);
	profile->set_handedness(handEngine::v1::Handedness::LEFT);

	profile = request.add_profilemeta();
	profile->set_performerid(performerId);
	profile->set_handedness(handEngine::v1::Handedness::RIGHT);


	//Animation GRPC Call
	std::unique_ptr<ClientAsyncReader<handEngine::v1::StageAnimationResponse>> reader(client->Animation->AsyncGetAllHandAnimationStream(&context, request, &cq, (void*)0));

	//Define event for stream close
	grpc::Status status;
	reader->Read(&response, (void*)1);
	reader->Finish(&status, (void*)2);
	void* got_tag;
	bool ok;
	grpc::CompletionQueue::NextStatus ret = CompletionQueue::NextStatus::TIMEOUT;



	//Process Data

	while (running) {
		ok = false;
		ret = cq.AsyncNext(&got_tag, &ok, gpr_time_add(gpr_now(GPR_CLOCK_REALTIME), gpr_time_from_seconds(1, GPR_TIMESPAN)));

		grpc::StatusCode code = status.error_code();

		FString mcode = FString::SanitizeFloat(code);


		FString error = status.error_message().c_str();

		if (error.Equals("End of TCP stream") || error.Equals("Stream Removed")) {

		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Do Reconnect Logic"));
		SourceStatus = LOCTEXT("SourceStatus_Stopping", "Stopping");
		Stop();


		}

			if (ret && ok && got_tag == (void*)2) {
				if (!status.ok()) {

					
					break;
				}
			}
			else if (ret && ok && got_tag == (void*)1) {
				//Message is available

				reader->Read(&response, (void*)1);

				for (int j = 0; j < response.handanimations_size(); j++) {

					auto dataframe = response.handanimations()[j];

					FString SubjectName;
					SubjectName = dataframe.performername().c_str();
					if (dataframe.profilemeta().handedness() == handEngine::v1::Handedness::LEFT)
					{
						SubjectName = SubjectName + "_Left";
					}
					else {
						SubjectName = SubjectName + "_Right";
					}

					bool bCreateSubject;

					if (EncounteredSubjects.IsEmpty()) {

						bCreateSubject = true;
						//performerId++;


					}
					else
					{
						bCreateSubject = !EncounteredSubjects.Contains(FName(*SubjectName));
					}


					if (bCreateSubject)
					{
						FLiveLinkStaticDataStruct StaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkSkeletonStaticData::StaticStruct());
						FLiveLinkSkeletonStaticData& StaticData = *StaticDataStruct.Cast<FLiveLinkSkeletonStaticData>();

						int arraysize = dataframe.bones_size();
						arraysize--;

						StaticData.BoneNames.SetNumUninitialized(arraysize);
						StaticData.BoneParents.SetNumUninitialized(arraysize);



						for (int BoneIdx = 0; BoneIdx < (arraysize); BoneIdx++)
						{
							auto Bone = dataframe.bones()[BoneIdx + 1];
							//const TSharedPtr<FJsonObject> BoneObject = BoneArray[BoneIdx]->AsObject();

							FString BoneName;
							if (!Bone.name().empty())
							{
								StaticData.BoneNames[BoneIdx] = FName(Bone.name().c_str());
							}
							else
							{
								// Invalid Json Format
								//return;
							}



							//Decrement parent index by one (wrist has been removed)
							StaticData.BoneParents[BoneIdx] = (Bone.parent());



						}

						Client->PushSubjectStaticData_AnyThread({ SourceGuid, FName(*SubjectName) }, ULiveLinkAnimationRole::StaticClass(), MoveTemp(StaticDataStruct));
						EncounteredSubjects.Add(FName(*SubjectName));
						SourceStatus = LOCTEXT("SourceStatus_Receiving", "Receiving");
						
						
					}



					FLiveLinkFrameDataStruct FrameDataStruct = FLiveLinkFrameDataStruct(FLiveLinkAnimationFrameData::StaticStruct());
					FLiveLinkAnimationFrameData& FrameData = *FrameDataStruct.Cast<FLiveLinkAnimationFrameData>();
					FLiveLinkMetaData MetaData = FLiveLinkMetaData();


					MetaData.StringMetaData.FindOrAdd("index Bend1") = FString::SanitizeFloat(dataframe.sliders().index_bend_1());
					MetaData.StringMetaData.FindOrAdd("index Bend2") = FString::SanitizeFloat(dataframe.sliders().index_bend_2());

					MetaData.StringMetaData.FindOrAdd("middle Bend1") = FString::SanitizeFloat(dataframe.sliders().middle_bend_1());
					MetaData.StringMetaData.FindOrAdd("middle Bend2") = FString::SanitizeFloat(dataframe.sliders().middle_bend_2());

					MetaData.StringMetaData.FindOrAdd("ring Bend1") = FString::SanitizeFloat(dataframe.sliders().ring_bend_1());
					MetaData.StringMetaData.FindOrAdd("ring Bend2") = FString::SanitizeFloat(dataframe.sliders().ring_bend_2());

					MetaData.StringMetaData.FindOrAdd("pinky Bend1") = FString::SanitizeFloat(dataframe.sliders().pinky_bend_1());
					MetaData.StringMetaData.FindOrAdd("pinky Bend2") = FString::SanitizeFloat(dataframe.sliders().pinky_bend_2());

					MetaData.StringMetaData.FindOrAdd("thumb Bend1") = FString::SanitizeFloat(dataframe.sliders().thumb_bend_1());
					MetaData.StringMetaData.FindOrAdd("thumb Bend2") = FString::SanitizeFloat(dataframe.sliders().thumb_bend_2());

					MetaData.StringMetaData.FindOrAdd("thumb splay") = FString::SanitizeFloat(dataframe.sliders().thumb_splay());
					MetaData.StringMetaData.FindOrAdd("global splay") = FString::SanitizeFloat(dataframe.sliders().global_splay());


					FrameData.MetaData = MetaData;



					int arraysize = dataframe.bones_size();
					arraysize--;
					FrameData.Transforms.SetNumUninitialized(arraysize);
					for (int BoneIdx = 0; BoneIdx < (arraysize); BoneIdx++)
					{
						auto Bone = dataframe.bones()[BoneIdx + 1];


						//const TArray<TSharedPtr<FJsonValue>>* LocationArray;
						FVector BoneLocation;
						if (!Bone.translation().empty())
						{
							double X = Bone.translation()[0];
							double Y = -Bone.translation()[1];
							double Z = Bone.translation()[2];

							BoneLocation = FVector(X, Y, Z);
							//BoneLocation = FVector(0, 0, 0);
						}
						else
						{
							// Invalid Json Format
							//return;
						}

						//const TArray<TSharedPtr<FJsonValue>>* RotationArray;
						FQuat BoneQuat;
						if (!Bone.rotation().empty())
						{
							double X = Bone.rotation()[0];
							double Y = Bone.rotation()[1];
							double Z = Bone.rotation()[2];
							double W = Bone.rotation()[3];
							BoneQuat = FQuat(X, Y, Z, W);
						}
						else
						{
							// Invalid Json Format
							//return;
						}

						//const TArray<TSharedPtr<FJsonValue>>* PreRotationArray;
						FQuat PreBoneQuat;
						if (!Bone.prerotation().empty())

						{
							double X = Bone.prerotation()[0];
							double Y = Bone.prerotation()[1];
							double Z = Bone.prerotation()[2];
							double W = Bone.prerotation()[3];
							PreBoneQuat = FQuat(X, Y, Z, W);
						}
						else
						{
							// Invalid Json Format
							//return;
						}


						//const TArray<TSharedPtr<FJsonValue>>* PostRotationArray;
						FQuat PostBoneQuat;
						if (!Bone.postrotation().empty())

						{
							double X = Bone.postrotation()[0];
							double Y = Bone.postrotation()[1];
							double Z = Bone.postrotation()[2];
							double W = Bone.postrotation()[3];
							PostBoneQuat = FQuat(X, Y, Z, W);
						}
						else
						{
							// Invalid Json Format
						//	return;
						}


						//Combine Rotations
						BoneQuat = PreBoneQuat * BoneQuat * PostBoneQuat;
						BoneQuat.X = -BoneQuat.X;
						BoneQuat.Z = -BoneQuat.Z;





						FVector BoneScale;
						if (!Bone.scale().empty())

						{
							double X = Bone.scale()[0];
							double Y = Bone.scale()[1];
							double Z = Bone.scale()[2];
							BoneScale = FVector(X, Y, Z);
						}
						else
						{
							// Invalid Json Format
							//return;
						}

						FrameData.Transforms[BoneIdx] = FTransform(BoneQuat, BoneLocation, BoneScale);

					}

					Client->PushSubjectFrameData_AnyThread({ SourceGuid, FName(*SubjectName) }, MoveTemp(FrameDataStruct));
				}


				if (Stopping)
				{
					context.TryCancel();
				};


			}


		}

	
	return 0;
	
}

void FHandEngineLiveLink_LLSource::Reset()
{

	Stop();
	for (int name = 0; name < EncounteredSubjects.Num(); name++) {
		Client->ClearSubject(EncounteredSubjects.Array()[name]);
	}
	Stopping = false;
	Start();


}



#undef LOCTEXT_NAMESPACE
