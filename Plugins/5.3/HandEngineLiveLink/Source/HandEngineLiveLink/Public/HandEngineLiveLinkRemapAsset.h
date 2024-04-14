// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <LiveLinkRetargetAsset.h>
#include "LiveLinkRemapAsset.h"
#include "BoneIndices.h"
#include "HandEngineLiveLinkRemapAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class HANDENGINELIVELINK_API UHandEngineLiveLinkRemapAsset : public ULiveLinkRemapAsset
{
public:

	GENERATED_BODY()
	
	UHandEngineLiveLinkRemapAsset(const class FObjectInitializer& ObjectInitializer);

	void BeginDestroy();

	virtual void BuildPoseFromAnimationData(float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose);
	
	FName RemapBoneName(FName BoneName);



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Hand Bone Name")
	FName LHandBoneName;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Hand Bone Name")
	FName RHandBoneName;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Thumb1 Bone Name")
	FName LThumb1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Thumb2 Bone Name")
	FName LThumb2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Thumb3 Bone Name")
	FName LThumb3BoneName;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Index0 Bone Name")
	FName LIndex0BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Index1 Bone Name")
	FName LIndex1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Index2 Bone Name")
	FName LIndex2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Index3 Bone Name")
	FName LIndex3BoneName;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Middle0 Bone Name")
	FName LMiddle0BoneName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Middle1 Bone Name")
	FName LMiddle1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Middle2 Bone Name")
	FName LMiddle2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Middle3 Bone Name")
	FName LMiddle3BoneName;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Ring0 Bone Name")
	FName LRing0BoneName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Ring1 Bone Name")
	FName LRing1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Ring2 Bone Name")
	FName LRing2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Ring3 Bone Name")
	FName LRing3BoneName;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Pinky0 Bone Name")
	FName LPinky0BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Pinky1 Bone Name")
	FName LPinky1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Pinky2 Bone Name")
	FName LPinky2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Left Pinky3 Bone Name")
	FName LPinky3BoneName;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Thumb1 Bone Name")
	FName RThumb1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Thumb2 Bone Name")
	FName RThumb2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Thumb3 Bone Name")
	FName RThumb3BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Index0 Bone Name")
	FName RIndex0BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Index1 Bone Name")
	FName RIndex1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Index2 Bone Name")
	FName RIndex2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Index3 Bone Name")
	FName RIndex3BoneName;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Middle0 Bone Name")
	FName RMiddle0BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Middle1 Bone Name")
	FName RMiddle1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Middle2 Bone Name")
	FName RMiddle2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Middle3 Bone Name")
	FName RMiddle3BoneName;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Ring0 Bone Name")
	FName RRing0BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Ring1 Bone Name")
	FName RRing1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Ring2 Bone Name")
	FName RRing2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Ring3 Bone Name")
	FName RRing3BoneName;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Pinky0 Bone Name")
	FName RPinky0BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Pinky1 Bone Name")
	FName RPinky1BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Pinky2 Bone Name")
	FName RPinky2BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Retargeting", DisplayName = "Right Pinky3 Bone Name")
	FName RPinky3BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", DisplayName = "Scale Bones")
	bool mScaleBones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", DisplayName = "Left Thumb1 Rotation Offset")
	FRotator mLThumb1Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", DisplayName = "Left Thumb2 Rotation Offset")
	FRotator mLThumb2Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", DisplayName = "Left Thumb3 Rotation Offset")
	FRotator mLThumb3Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", DisplayName = "Right Thumb1 Rotation Offset")
	FRotator mRThumb1Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", DisplayName = "Right Thumb2 Rotation Offset")
	FRotator mRThumb2Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", DisplayName = "Right Thumb3 Rotation Offset")
	FRotator mRThumb3Rotation;

private:

	void OnBlueprintClassCompiled(UBlueprint* TargetBlueprint);

	// Name mapping between source bone name and transformed bone name
	// (returned from GetRemappedBoneName)
	TMap<FName, FName> boneNameMap;

	// Name mapping between source curve name and transformed curve name
	// (returned from GetRemappedCurveName)
	TMap<FName, FName> CurveNameMap;

#if WITH_EDITOR
	/** Blueprint.OnCompiled delegate handle */
	FDelegateHandle OnBlueprintCompiledDelegate;
#endif
};
