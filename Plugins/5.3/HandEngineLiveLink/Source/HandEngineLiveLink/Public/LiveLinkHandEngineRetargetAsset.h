// Copyright 2018 Movella Technologies B.V., Inc. All Rights Reserved.

#pragma once

#include <map>
#include "LiveLinkRemapAsset.h"
#include "UObject/ObjectMacros.h"
#include "HandEngineMappingEnum.h"
#include "LiveLinkHandEngineRetargetAsset.generated.h"

class UAnimSequence;
class USkeletalMesh;
class USkeleton;

USTRUCT(BlueprintType)
struct FRemapRowHandle
{
	GENERATED_USTRUCT_BODY()

public:
	FRemapRowHandle()
		: HandEngineRemapId(EHandEngineMapping::Root)
		, RemapId("None")
	{}

	FRemapRowHandle(EHandEngineMapping handEngineID, FName remapId)
		: HandEngineRemapId(handEngineID), RemapId(remapId)
	{}

	//todo: only the RemapId is used in code

	/** HandEngine Id */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RemappingRow)
	EHandEngineMapping HandEngineRemapId;

	/** Bone name in Unreal mesh */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = RemappingRow)
	FName RemapId;

	bool operator==(const FRemapRowHandle& Other) const
	{
		// We'll ignore HandEngineRemapId field in comparison, as it wasn't filled with older versions of plugin
		return /*(HandEngineRemapId == Other.HandEngineRemapId) &&*/ (RemapId == Other.RemapId);
	}
};

UCLASS(Blueprintable)
class HANDENGINELIVELINK_API ULiveLinkHandEngineRetargetAsset : public ULiveLinkRetargetAsset
{
	GENERATED_UCLASS_BODY()

public:

	//~ Begin UObject Interface
	virtual void BeginDestroy() override;

	virtual void PostLoad() override;
	//~ End UObject Interface

	// Build OutPose from AnimationData if subject was from this type
	virtual void BuildPoseFromAnimationData(float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose) override;

	// Build OutPose and OutCurve from the basic data. Called for every type of subjects
	virtual void BuildPoseAndCurveFromBaseData(float DeltaTime, const FLiveLinkBaseStaticData* InBaseStaticData, const FLiveLinkBaseFrameData* InBaseFrameData, FCompactPose& OutPose, FBlendedCurve& OutCurve) override;

	FName GetRemappedBoneName(const FName& BoneName) const;

	UFUNCTION ( BlueprintCallable, Category = "Live Link Remap" )
	FName GetRemappedBoneNameByConvention( EHandEngineMapping Bone, EHandEngineRetargetNamingConvention Convention ) const;

	/** Blueprint Implementable function for getting a custom remapped bone name from the original */
	UFUNCTION ( BlueprintNativeEvent, Category = "Live Link Remap" )
	FName GetCustomRemappedBoneName( EHandEngineMapping Bone ) const;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:

	TArray<FName> m_skeleton_bone_names;

	//Populate BoneNameMap and return the Transformed Bone names after the remapping
	TArray<FName> PopulateBoneNames(const FLiveLinkSkeletonStaticData* InSkeletonData);

	void FetchSkeletonBoneNames();

	void OnBlueprintClassCompiled(UBlueprint* TargetBlueprint);

	float calculateVectorScale(FVector handEngineVec, FVector unrealVec);

	void calculateTposeValues(FCompactPose OutPose, const FLiveLinkSkeletonStaticData& InSkeletonData, const FLiveLinkAnimationFrameData& InFrameData, FBlendedCurve& OutCurve);

	void AddBoneNamesToRemapTable();

public:

	UPROPERTY( EditAnywhere, DisplayName = "Naming Convention", BlueprintReadWrite, Category = "Bones Names" )
	EHandEngineRetargetNamingConvention m_remapping_convention = EHandEngineRetargetNamingConvention::Default;

	//todo: change row type
	/** Map that stores all the information about bone remapping. This will be populated dynamically from the skeletal mesh. */
	UPROPERTY(EditAnywhere, DisplayName = "Remapping Assets", Category = "Live Link HandEngine Remap")
	TMap<EHandEngineMapping, FRemapRowHandle> m_remapping_rows;

	UPROPERTY()
	USkeletalMesh* m_skeletal_mesh_DEPRECATED;

	// The skeleton object which we're animating
	UPROPERTY(EditAnywhere, DisplayName = "Skeleton", BlueprintReadWrite, Category = "Live Link HandEngine Remap")
	USkeleton* m_skeleton;

public:
	// Store the skeleton and initialize the bone mapping table. Called when asset is just created.
	void SetSkeleton(USkeleton* Skeleton);

private:

	static std::map<FName, EHandEngineMapping, FNameFastLess> s_remap_bones_names;

	static std::map<EHandEngineMapping, FName> s_bones_map_default;

	static std::map<EHandEngineMapping, FName> s_bones_map_maya;

	static std::map<EHandEngineMapping, FName> s_bones_map_xsens;

	static const std::map<EHandEngineMapping, FName>& GetNamingConventionBoneMap( EHandEngineRetargetNamingConvention namingConvention );

	TArray<FTransform> m_tposeWorld;

	TArray<FTransform> m_mvnToUnrealTpose;

	// Name mapping between source bone name and transformed bone name
	// (returned from GetRemappedBoneName)
	TMap<FName, FName> BoneNameMap;

	// Name mapping between source curve name and transformed curve name
	// (returned from GetRemappedCurveName)
	TMap<FName, FName> CurveNameMap;

	/** Blueprint.OnCompiled delegate handle */
	FDelegateHandle OnBlueprintCompiledDelegate;

	UPROPERTY(EditAnywhere, Category = "Reference Pose")
	UAnimSequence* TPoseAnimation;

	UPROPERTY( EditAnywhere, DisplayName = "Invert X", Category = "Reference Pose" )
	bool invertX = false;
	UPROPERTY(EditAnywhere, DisplayName = "Invert Y", Category = "Reference Pose")
	bool invertY = false;
	UPROPERTY(EditAnywhere, DisplayName = "Invert Z", Category = "Reference Pose")
	bool invertZ = false;

	UPROPERTY(EditAnywhere, DisplayName = "Is Forward Y", Category = "Reference Pose")
	bool IsForwardY = false;

	int m_retarget;

	bool m_doLog;
};
