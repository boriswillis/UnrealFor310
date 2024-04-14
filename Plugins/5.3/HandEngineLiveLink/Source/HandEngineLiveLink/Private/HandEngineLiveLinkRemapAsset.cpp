// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "HandEngineLiveLinkRemapAsset.h"

#include <BoneIndices.h>
#include <BonePose.h>
#include <Roles/LiveLinkAnimationTypes.h>
#include "DrawDebugHelpers.h"

UHandEngineLiveLinkRemapAsset::UHandEngineLiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
	LHandBoneName = "hand_l";

	RHandBoneName = "hand_r";

	LThumb1BoneName = "thumb_01_l";
	LThumb2BoneName = "thumb_02_l";
	LThumb3BoneName = "thumb_03_l";

	LIndex0BoneName = "index_metacarpal_l";
	LIndex1BoneName = "index_01_l";
	LIndex2BoneName = "index_02_l";
	LIndex3BoneName = "index_03_l";

	LMiddle0BoneName = "middle_metacarpal_l";
	LMiddle1BoneName = "middle_01_l";
	LMiddle2BoneName = "middle_02_l";
	LMiddle3BoneName = "middle_03_l";

	LRing0BoneName = "ring_metacarpal_l";
	LRing1BoneName = "ring_01_l";
	LRing2BoneName = "ring_02_l";
	LRing3BoneName = "ring_03_l";

	LPinky0BoneName = "pinky_metacarpal_l";
	LPinky1BoneName = "pinky_01_l";
	LPinky2BoneName = "pinky_02_l";
	LPinky3BoneName = "pinky_03_l";

	RThumb1BoneName = "thumb_01_r";
	RThumb2BoneName = "thumb_02_r";
	RThumb3BoneName = "thumb_03_r";

	RIndex0BoneName = "index_metacarpal_r";
	RIndex1BoneName = "index_01_r";
	RIndex2BoneName = "index_02_r";
	RIndex3BoneName = "index_03_r";

	RMiddle0BoneName = "middle_metacarpal_r";
	RMiddle1BoneName = "middle_01_r";
	RMiddle2BoneName = "middle_02_r";
	RMiddle3BoneName = "middle_03_r";

	RRing0BoneName = "ring_metacarpal_r";
	RRing1BoneName = "ring_01_r";
	RRing2BoneName = "ring_02_r";
	RRing3BoneName = "ring_03_r";

	RPinky0BoneName = "pinky_metacarpal_r";
	RPinky1BoneName = "pinky_01_r";
	RPinky2BoneName = "pinky_02_r";
	RPinky3BoneName = "pinky_03_r";

	mScaleBones = false;

	mLThumb1Rotation = FRotator::MakeFromEuler(FVector(-45, 0, -30));
	mLThumb2Rotation = FRotator::MakeFromEuler(FVector(20, 0, 30));
	mLThumb3Rotation = FRotator::ZeroRotator;
	mRThumb1Rotation = FRotator::MakeFromEuler(FVector(-45, 0, -30));
	mRThumb2Rotation = FRotator::MakeFromEuler(FVector(20, 0, 30));
	mRThumb3Rotation = FRotator::ZeroRotator;

	RemapBoneName("0");
	

	// FBX Bone naming convention
	


#if WITH_EDITOR
	UBlueprint* Blueprint = Cast<UBlueprint>(GetClass()->ClassGeneratedBy);
	if (Blueprint)
	{
		OnBlueprintCompiledDelegate = Blueprint->OnCompiled().AddUObject(this, &UHandEngineLiveLinkRemapAsset::OnBlueprintClassCompiled);
	}
#endif



}

void UHandEngineLiveLinkRemapAsset::BeginDestroy()
{
#if WITH_EDITOR
	if (OnBlueprintCompiledDelegate.IsValid())
	{
		if (UBlueprint* Blueprint = Cast<UBlueprint>(GetClass()->ClassGeneratedBy))
		{
			Blueprint->OnCompiled().Remove(OnBlueprintCompiledDelegate);
		}
		OnBlueprintCompiledDelegate.Reset();
	}
#endif

	Super::BeginDestroy();
}


void UHandEngineLiveLinkRemapAsset::BuildPoseFromAnimationData(float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose)
{

	const TArray<FName>& SourceBoneNames = InSkeletonData->BoneNames;

	TArray<FName, TMemStackAllocator<>> TransformedBoneNames;
	TransformedBoneNames.Reserve(SourceBoneNames.Num());

	for (const FName& SrcBoneName : SourceBoneNames)
	{
		FName* TargetBoneName = boneNameMap.Find(SrcBoneName);
		if (TargetBoneName == nullptr)
		{
			FName NewName = RemapBoneName(SrcBoneName);
			TransformedBoneNames.Add(NewName);
			boneNameMap.Add(SrcBoneName, NewName);
		}
		else
		{
			TransformedBoneNames.Add(*TargetBoneName);
		}
	}

	for (int32 i = 0; i < TransformedBoneNames.Num(); ++i)
	{
		FName BoneName = TransformedBoneNames[i];

		FTransform BoneTransform = InFrameData->Transforms[i];

		int32 MeshIndex = OutPose.GetBoneContainer().GetPoseBoneIndexForBoneName(BoneName);
		if (MeshIndex != INDEX_NONE)
		{
			FCompactPoseBoneIndex CPIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(MeshIndex));
			if (CPIndex != INDEX_NONE)
			{
				FTransform ProcessedTransform = BoneTransform;
				ProcessedTransform.SetLocation(OutPose[CPIndex].GetLocation());
				
				OutPose[CPIndex] = ProcessedTransform;
				
			}
		}
	}


}

void UHandEngineLiveLinkRemapAsset::OnBlueprintClassCompiled(UBlueprint* TargetBlueprint)
{
	RemapBoneName("0");
}

FName UHandEngineLiveLinkRemapAsset::RemapBoneName(FName BoneName)
{
	
	
	{
	
		boneNameMap.FindOrAdd("hand_l") = this->LHandBoneName;

		boneNameMap.FindOrAdd("thumb_01_l") = this->LThumb1BoneName;
		boneNameMap.FindOrAdd("thumb_02_l") = this->LThumb2BoneName;
		boneNameMap.FindOrAdd("thumb_03_l") = this->LThumb3BoneName;

		boneNameMap.FindOrAdd("index_00_l") = this->LIndex0BoneName;
		boneNameMap.FindOrAdd("index_01_l") = this->LIndex1BoneName;
		boneNameMap.FindOrAdd("index_02_l") = this->LIndex2BoneName;
		boneNameMap.FindOrAdd("index_03_l") = this->LIndex3BoneName;

		boneNameMap.FindOrAdd("middle_00_l") = this->LMiddle0BoneName;
		boneNameMap.FindOrAdd("middle_01_l") = this->LMiddle1BoneName;
		boneNameMap.FindOrAdd("middle_02_l") = this->LMiddle2BoneName;
		boneNameMap.FindOrAdd("middle_03_l") = this->LMiddle3BoneName;

		boneNameMap.FindOrAdd("ring_00_l") = this->LRing0BoneName;
		boneNameMap.FindOrAdd("ring_01_l") = this->LRing1BoneName;
		boneNameMap.FindOrAdd("ring_02_l") = this->LRing2BoneName;
		boneNameMap.FindOrAdd("ring_03_l") = this->LRing3BoneName;

		boneNameMap.FindOrAdd("pinky_00_l") = this->LPinky0BoneName;
		boneNameMap.FindOrAdd("pinky_01_l") = this->LPinky1BoneName;
		boneNameMap.FindOrAdd("pinky_02_l") = this->LPinky2BoneName;
		boneNameMap.FindOrAdd("pinky_03_l") = this->LPinky3BoneName;


		boneNameMap.FindOrAdd("hand_r") = RHandBoneName;

		boneNameMap.FindOrAdd("thumb_01_r") = RThumb1BoneName;
		boneNameMap.FindOrAdd("thumb_02_r") = RThumb2BoneName;
		boneNameMap.FindOrAdd("thumb_03_r") = RThumb3BoneName;

		boneNameMap.FindOrAdd("index_00_r") = RIndex0BoneName;
		boneNameMap.FindOrAdd("index_01_r") = RIndex1BoneName;
		boneNameMap.FindOrAdd("index_02_r") = RIndex2BoneName;
		boneNameMap.FindOrAdd("index_03_r") = RIndex3BoneName;

		boneNameMap.FindOrAdd("middle_00_r") = RMiddle0BoneName;
		boneNameMap.FindOrAdd("middle_01_r") = RMiddle1BoneName;
		boneNameMap.FindOrAdd("middle_02_r") = RMiddle2BoneName;
		boneNameMap.FindOrAdd("middle_03_r") = RMiddle3BoneName;

		boneNameMap.FindOrAdd("ring_00_r") = RRing0BoneName;
		boneNameMap.FindOrAdd("ring_01_r") = RRing1BoneName;
		boneNameMap.FindOrAdd("ring_02_r") = RRing2BoneName;
		boneNameMap.FindOrAdd("ring_03_r") = RRing3BoneName;

		boneNameMap.FindOrAdd("pinky_00_r") = RPinky0BoneName;
		boneNameMap.FindOrAdd("pinky_01_r") = RPinky1BoneName;
		boneNameMap.FindOrAdd("pinky_02_r") = RPinky2BoneName;
		boneNameMap.FindOrAdd("pinky_03_r") = RPinky3BoneName;
	}
	
	return BoneName;
	
}



