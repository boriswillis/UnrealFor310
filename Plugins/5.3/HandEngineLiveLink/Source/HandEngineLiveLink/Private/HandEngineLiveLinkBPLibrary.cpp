// Copyright Epic Games, Inc. All Rights Reserved.

#include "HandEngineLiveLinkBPLibrary.h"
#include "HandEngineLiveLink.h"
#include "HandEngineLiveLink_LLSource.h"
#include "ILiveLinkClient.h"
#include "LiveLinkClientReference.h"
#include <thread>




void UHandEngineLiveLinkBPLibrary::CreateHandEngineLiveLinkSource(FLiveLinkSourceHandle& handle)
{
	FIPv4Endpoint InEndpoint;
	InEndpoint.Address = FIPv4Address(127, 0, 0, 1);
	InEndpoint.Port = 60062;
	TSharedPtr<ILiveLinkSource> HandEngineSource = MakeShared<FHandEngineLiveLink_LLSource>(InEndpoint);

	FLiveLinkClientReference client;
	client.GetClient()->AddSource(HandEngineSource);

	handle.SetSourcePointer(HandEngineSource);
		
}

