// Copyright 2018 Movella Technologies B.V., Inc. All Rights Reserved.

#include "LiveLinkHandEngineRetargetAsset.h"

#include "Roles/LiveLinkAnimationTypes.h"
#include "LiveLinkTypes.h"
#include "BonePose.h"
#include "Engine/Blueprint.h"

#include "Animation/AnimSequence.h"
#include "Animation/Skeleton.h"
#include "Engine/SkeletalMesh.h"

#include "SegmentInformation.h"
#include "Misc/PackageName.h"
#include "Misc/Paths.h"

#if ENGINE_MAJOR_VERSION >= 5
#include "Animation/AttributesRuntime.h"
#else
#include "Animation/CustomAttributesRuntime.h"
#endif
#include "Animation/AnimationPoseData.h"

#include <map>

// todo: this could be built from EHandEngineMapping reflection information
std::map<FName, EHandEngineMapping, FNameFastLess> ULiveLinkHandEngineRetargetAsset::s_remap_bones_names{ {"Root", EHandEngineMapping::Root}, {"Pelvis", EHandEngineMapping::Pelvis}, {"Spine_01", EHandEngineMapping::Spine_01}, {"Spine_02", EHandEngineMapping::Spine_02}, {"Spine_03", EHandEngineMapping::Spine_03}, {"Spine_04", EHandEngineMapping::Spine_04}, {"Neck_01", EHandEngineMapping::Neck_01}, {"Head", EHandEngineMapping::Head},
					{"Clavicle_r", EHandEngineMapping::Clavicle_r}, {"Upperarm_r", EHandEngineMapping::Upperarm_r},{"Lowerarm_r", EHandEngineMapping::Lowerarm_r},{"Hand_r", EHandEngineMapping::Hand_r},
					{"Clavicle_l", EHandEngineMapping::Clavicle_l}, {"Upperarm_l", EHandEngineMapping::Upperarm_l},{"Lowerarm_l", EHandEngineMapping::Lowerarm_l},{"Hand_l", EHandEngineMapping::Hand_l},
					{"Thigh_r", EHandEngineMapping::Thigh_r},{"Calf_r", EHandEngineMapping::Calf_r},{"RightFoot", EHandEngineMapping::Foot_r},{"Ball_r", EHandEngineMapping::Ball_r},
					{"Thigh_l", EHandEngineMapping::Thigh_l},{"Calf_l", EHandEngineMapping::Calf_l},{"LeftFoot", EHandEngineMapping::Foot_l},{"Ball_l", EHandEngineMapping::Ball_l},
					{"Prop1", EHandEngineMapping::Prop1},{"Prop2", EHandEngineMapping::Prop2},{"Prop3", EHandEngineMapping::Prop3},{"Prop4", EHandEngineMapping::Prop4},
					{"LeftWrist", EHandEngineMapping::LeftWrist},{"Thumb_01_l", EHandEngineMapping::Thumb_01_l},{"Thumb_02_l", EHandEngineMapping::Thumb_02_l},{"Thumb_03_l", EHandEngineMapping::Thumb_03_l},
					{"Index_00_l", EHandEngineMapping::Index_00_l},{"Index_01_l", EHandEngineMapping::Index_01_l},{"Index_02_l", EHandEngineMapping::Index_02_l,},{"Index_03_l", EHandEngineMapping::Index_03_l},
					{"Middle_00_l", EHandEngineMapping::Middle_00_l},{"Middle_01_l", EHandEngineMapping::Middle_01_l},{"Middle_02_l", EHandEngineMapping::Middle_02_l},{"Middle_03_l", EHandEngineMapping::Middle_03_l},
					{"Ring_00_l", EHandEngineMapping::Ring_00_l},{"Ring_01_l", EHandEngineMapping::Ring_01_l},{"Ring_02_l", EHandEngineMapping::Ring_02_l},{"Ring_03_l", EHandEngineMapping::Ring_03_l},
					{"Pinky_00_l", EHandEngineMapping::Pinky_00_l},{"Pinky_01_l", EHandEngineMapping::Pinky_01_l},{"Pinky_02_l", EHandEngineMapping::Pinky_02_l},{"Pinky_03_l", EHandEngineMapping::Pinky_03_l},
					{"RightWrist", EHandEngineMapping::RightWrist},{"Thumb_01_r", EHandEngineMapping::Thumb_01_r},{"Thumb_02_r", EHandEngineMapping::Thumb_02_r},{"Thumb_03_r", EHandEngineMapping::Thumb_03_r},
					{"Index_00_r", EHandEngineMapping::Index_00_r},{"Index_01_r", EHandEngineMapping::Index_01_r},{"Index_02_r", EHandEngineMapping::Index_02_r},{"Index_03_r", EHandEngineMapping::Index_03_r},
					{"Middle_00_r", EHandEngineMapping::Middle_00_r},{"Middle_01_r", EHandEngineMapping::Middle_01_r},{"Middle_02_r", EHandEngineMapping::Middle_02_r},{"Middle_03_r", EHandEngineMapping::Middle_03_r},
					{"Ring_00_r", EHandEngineMapping::Ring_00_r},{"Ring_01_r", EHandEngineMapping::Ring_01_r},{"Ring_02_r", EHandEngineMapping::Ring_02_r},{"Ring_03_r", EHandEngineMapping::Ring_03_r},
					{"Pinky_00_r", EHandEngineMapping::Pinky_00_r},{"Pinky_01_r", EHandEngineMapping::Pinky_01_r},{"Pinky_02_r", EHandEngineMapping::Pinky_02_r},{"Pinky_03_r", EHandEngineMapping::Pinky_03_r}, };


std::map<EHandEngineMapping, FName> ULiveLinkHandEngineRetargetAsset::s_bones_map_default{ {EHandEngineMapping::Root, "root"},
								{EHandEngineMapping::Pelvis, "pelvis" },
								{EHandEngineMapping::Spine_01, "spine_01" }, {EHandEngineMapping::Spine_02, "spine_02", }, {EHandEngineMapping::Spine_03, "none" }, { EHandEngineMapping::Spine_04, "spine_03"},
								{EHandEngineMapping::Neck_01, "neck_01" }, {EHandEngineMapping::Head, "head" },
								{EHandEngineMapping::Clavicle_r, "clavicle_r" }, {EHandEngineMapping::Upperarm_r, "upperarm_r" }, {EHandEngineMapping::Lowerarm_r, "lowerarm_r" }, {EHandEngineMapping::Hand_r, "hand_r" },
								{EHandEngineMapping::Clavicle_l, "clavicle_l" }, {EHandEngineMapping::Upperarm_l, "upperarm_l" }, {EHandEngineMapping::Lowerarm_l, "lowerarm_l" }, {EHandEngineMapping::Hand_l, "hand_l" },
								{EHandEngineMapping::Thigh_r, "thigh_r" }, {EHandEngineMapping::Calf_r, "calf_r" }, {EHandEngineMapping::Foot_r, "foot_r" }, {EHandEngineMapping::Ball_r, "ball_r" },
								{EHandEngineMapping::Thigh_l, "thigh_l" }, {EHandEngineMapping::Calf_l, "calf_l" }, {EHandEngineMapping::Foot_l, "foot_l" }, {EHandEngineMapping::Ball_l, "ball_l" },
								{EHandEngineMapping::LeftWrist, "hand_l"}, 
								{EHandEngineMapping::Thumb_01_l, "thumb_01_l"}, {EHandEngineMapping::Thumb_02_l, "thumb_02_l"},{EHandEngineMapping::Thumb_03_l, "thumb_03_l"},
								{EHandEngineMapping::Index_01_l, "index_01_l"}, {EHandEngineMapping::Index_02_l, "index_02_l"},{EHandEngineMapping::Index_03_l, "index_03_l"},
								{EHandEngineMapping::Middle_01_l, "middle_01_l"}, {EHandEngineMapping::Middle_02_l, "middle_02_l"},{EHandEngineMapping::Middle_03_l, "middle_03_l"},
								{EHandEngineMapping::Ring_01_l, "ring_01_l"}, {EHandEngineMapping::Ring_02_l, "ring_02_l"},{EHandEngineMapping::Ring_03_l, "ring_03_l"},
								{EHandEngineMapping::Pinky_01_l, "pinky_01_l"}, {EHandEngineMapping::Pinky_02_l, "pinky_02_l"},{EHandEngineMapping::Pinky_03_l, "pinky_03_l"},

								{EHandEngineMapping::RightWrist, "hand_r"},
								{EHandEngineMapping::Thumb_01_r, "thumb_01_r"}, {EHandEngineMapping::Thumb_02_r, "thumb_02_r"},{EHandEngineMapping::Thumb_03_r, "thumb_03_r"},
								{EHandEngineMapping::Index_01_r, "index_01_r"}, {EHandEngineMapping::Index_02_r, "index_02_r"},{EHandEngineMapping::Index_03_r, "index_03_r"},
								{EHandEngineMapping::Middle_01_r, "middle_01_r"}, {EHandEngineMapping::Middle_02_r, "middle_02_r"},{EHandEngineMapping::Middle_03_r, "middle_03_r"},
								{EHandEngineMapping::Ring_01_r, "ring_01_r"}, {EHandEngineMapping::Ring_02_r, "ring_02_r"},{EHandEngineMapping::Ring_03_r, "ring_03_r"},
								{EHandEngineMapping::Pinky_01_r, "pinky_01_r"}, {EHandEngineMapping::Pinky_02_r, "pinky_02_r"},{EHandEngineMapping::Pinky_03_r, "pinky_03_r"},

								};

std::map<EHandEngineMapping, FName> ULiveLinkHandEngineRetargetAsset::s_bones_map_maya{ {EHandEngineMapping::Root, "Reference"},
								{EHandEngineMapping::Pelvis, "Hips" },
								{EHandEngineMapping::Spine_01, "spine" }, {EHandEngineMapping::Spine_02, "spine1", }, {EHandEngineMapping::Spine_03, "spine2" }, { EHandEngineMapping::Spine_04, "spine3"},
								{EHandEngineMapping::Neck_01, "neck" }, {EHandEngineMapping::Head, "head" },
								{EHandEngineMapping::Clavicle_r, "RightShoulder" }, {EHandEngineMapping::Upperarm_r, "RightArm" }, {EHandEngineMapping::Lowerarm_r, "RightForeArm" }, {EHandEngineMapping::Hand_r, "RightHand" },
								{EHandEngineMapping::Clavicle_l, "LeftShoulder" }, {EHandEngineMapping::Upperarm_l, "LeftArm" }, {EHandEngineMapping::Lowerarm_l, "LeftForeArm" }, {EHandEngineMapping::Hand_l, "LeftHand" },
								{EHandEngineMapping::Thigh_r, "RightUpLeg" }, {EHandEngineMapping::Calf_r, "RightLeg" }, {EHandEngineMapping::Foot_r, "RightFoot" }, {EHandEngineMapping::Ball_r, "RightToeBase" },
								{EHandEngineMapping::Thigh_l, "LeftUpLeg" }, {EHandEngineMapping::Calf_l, "LeftLeg" }, {EHandEngineMapping::Foot_l, "LeftFoot" }, {EHandEngineMapping::Ball_l, "LeftToeBase" },
								
								{EHandEngineMapping::LeftWrist, "LeftHand"},
								{EHandEngineMapping::Thumb_01_l, "LeftHandThumb1"}, {EHandEngineMapping::Thumb_02_l, "LeftHandThumb2"},{EHandEngineMapping::Thumb_03_l, "LeftHandThumb3"},
								{EHandEngineMapping::Index_01_l, "LeftHandIndex1"}, {EHandEngineMapping::Index_02_l, "LeftHandIndex2"},{EHandEngineMapping::Index_03_l, "LeftHandIndex3"},
								{EHandEngineMapping::Middle_01_l, "LeftHandMiddle1"}, {EHandEngineMapping::Middle_02_l, "LeftHandMiddle2"},{EHandEngineMapping::Middle_03_l, "LeftHandMiddle3"},
								{EHandEngineMapping::Ring_01_l, "LeftHandRing1"}, {EHandEngineMapping::Ring_02_l, "LeftHandRing2"},{EHandEngineMapping::Ring_03_l, "LeftHandRing3"},
								{EHandEngineMapping::Pinky_01_l, "LeftHandPinky1"}, {EHandEngineMapping::Pinky_02_l, "LeftHandPinky2"},{EHandEngineMapping::Pinky_03_l, "LeftHandPinky3"},

								{EHandEngineMapping::RightWrist, "RightHand"},
								{EHandEngineMapping::Thumb_01_r, "RightHandThumb1"}, {EHandEngineMapping::Thumb_02_r, "RightHandThumb2"},{EHandEngineMapping::Thumb_03_r, "RightHandThumb3"},
								{EHandEngineMapping::Index_01_r, "RightHandIndex1"}, {EHandEngineMapping::Index_02_r, "RightHandIndex2"},{EHandEngineMapping::Index_03_r, "RightHandIndex3"},
								{EHandEngineMapping::Middle_01_r, "RightHandMiddle1"}, {EHandEngineMapping::Middle_02_r, "RightHandMiddle2"},{EHandEngineMapping::Middle_03_r, "RightHandMiddle3"},
								{EHandEngineMapping::Ring_01_r, "RightHandRing1"}, {EHandEngineMapping::Ring_02_r, "RightHandRing2"},{EHandEngineMapping::Ring_03_r, "RightHandRing3"},
								{EHandEngineMapping::Pinky_01_r, "RightHandPinky1"}, {EHandEngineMapping::Pinky_02_r, "RightHandPinky2"},{EHandEngineMapping::Pinky_03_r, "RightHandPinky3"},

								};

// todo: this is a reverse of s_remap_bones_names, with exception Root = Reference
std::map<EHandEngineMapping, FName> ULiveLinkHandEngineRetargetAsset::s_bones_map_xsens{ {EHandEngineMapping::Root, "Reference"},
								{EHandEngineMapping::Pelvis, "Pelvis" },
								{EHandEngineMapping::Spine_01, "L5" }, {EHandEngineMapping::Spine_02, "L3", }, {EHandEngineMapping::Spine_03, "T12" }, { EHandEngineMapping::Spine_04, "T8"},
								{EHandEngineMapping::Neck_01, "Neck" }, {EHandEngineMapping::Head, "Head" },
								{EHandEngineMapping::Clavicle_r, "RightShoulder" }, {EHandEngineMapping::Upperarm_r, "RightUpperArm" }, {EHandEngineMapping::Lowerarm_r, "RightForeArm" }, {EHandEngineMapping::Hand_r, "RightCarpus" },
								{EHandEngineMapping::Clavicle_l, "LeftShoulder" }, {EHandEngineMapping::Upperarm_l, "LeftUpperArm" }, {EHandEngineMapping::Lowerarm_l, "LeftForeArm" }, {EHandEngineMapping::Hand_l, "LeftCarpus" },
								{EHandEngineMapping::Thigh_r, "RightUpperLeg" }, {EHandEngineMapping::Calf_r, "RightLowerLeg" }, {EHandEngineMapping::Foot_r, "RightFoot" }, {EHandEngineMapping::Ball_r, "RightToe" },
								{EHandEngineMapping::Thigh_l, "LeftUpperLeg" }, {EHandEngineMapping::Calf_l, "LeftLowerLeg" }, {EHandEngineMapping::Foot_l, "LeftFoot" }, {EHandEngineMapping::Ball_l, "LeftToe" },

								{EHandEngineMapping::LeftWrist, "LeftCarpus"},
								{EHandEngineMapping::Thumb_01_l, "LeftFirstMC"}, {EHandEngineMapping::Thumb_02_l, "LeftFirstPP"},{EHandEngineMapping::Thumb_03_l, "LeftFirstDP"},
								{EHandEngineMapping::Index_01_l, "LeftSecondPP"}, {EHandEngineMapping::Index_02_l, "LeftSecondMP"},{EHandEngineMapping::Index_03_l, "LeftSecondDP"},
								{EHandEngineMapping::Middle_01_l, "LeftThirdPP"}, {EHandEngineMapping::Middle_02_l, "LeftThirdMP"},{EHandEngineMapping::Middle_03_l, "LeftThirdDP"},
								{EHandEngineMapping::Ring_01_l, "LeftFourthPP"}, {EHandEngineMapping::Ring_02_l, "LeftFourthMP"},{EHandEngineMapping::Ring_03_l, "LeftFourthDP"},
								{EHandEngineMapping::Pinky_01_l, "LeftFifthPP"}, {EHandEngineMapping::Pinky_02_l, "LeftFifthMP"},{EHandEngineMapping::Pinky_03_l, "LeftFifthDP"},

								{EHandEngineMapping::RightWrist, "RightCarpus"},
								{EHandEngineMapping::Thumb_01_r, "RightFirstMC"}, {EHandEngineMapping::Thumb_02_r, "RightFirstPP"},{EHandEngineMapping::Thumb_03_r, "RightFirstDP"},
								{EHandEngineMapping::Index_01_r, "RightSecondPP"}, {EHandEngineMapping::Index_02_r, "RightSecondMP"},{EHandEngineMapping::Index_03_r, "RightSecondDP"},
								{EHandEngineMapping::Middle_01_r, "RightThirdPP"}, {EHandEngineMapping::Middle_02_r, "RightThirdMP"},{EHandEngineMapping::Middle_03_r, "RightThirdDP"},
								{EHandEngineMapping::Ring_01_r, "RightFourthPP"}, {EHandEngineMapping::Ring_02_r, "RightFourthMP"},{EHandEngineMapping::Ring_03_r, "RightFourthDP"},
								{EHandEngineMapping::Pinky_01_r, "RightFifthPP"}, {EHandEngineMapping::Pinky_02_r, "RightFifthMP"},{EHandEngineMapping::Pinky_03_r, "RightFifthDP"},

};


ULiveLinkHandEngineRetargetAsset::ULiveLinkHandEngineRetargetAsset(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer),
	m_retarget(100),
	m_doLog(false)
{

#if WITH_EDITOR
	UBlueprint* Blueprint = Cast<UBlueprint> ( GetClass ()->ClassGeneratedBy );
	if ( Blueprint )
	{
		OnBlueprintCompiledDelegate = Blueprint->OnCompiled ().AddUObject( this, &ULiveLinkHandEngineRetargetAsset::OnBlueprintClassCompiled );
	}
#endif
}

void ULiveLinkHandEngineRetargetAsset::PostLoad()
{
	Super::PostLoad();

	// Upgrade the asset
	if (m_skeletal_mesh_DEPRECATED != nullptr)
	{
		m_skeleton = m_skeletal_mesh_DEPRECATED->GetSkeleton();
		m_skeletal_mesh_DEPRECATED = nullptr;

		if (m_remapping_convention != EHandEngineRetargetNamingConvention::Custom && m_remapping_convention != EHandEngineRetargetNamingConvention::Manual)
		{
			// Verify the correctness of remapping convention - if it doesn't match, set it to Manual
			TMap<EHandEngineMapping, FRemapRowHandle> SavedRemappingRows = m_remapping_rows;
			AddBoneNamesToRemapTable();
			if (m_remapping_rows.OrderIndependentCompareEqual(SavedRemappingRows) == false)
			{
				// If regeneration of bone list will produce a different result, revert results and force remapping convention to Manual
				m_remapping_rows = SavedRemappingRows;
				m_remapping_convention = EHandEngineRetargetNamingConvention::Manual;
			}
		}
	}

	FetchSkeletonBoneNames();
}

void ULiveLinkHandEngineRetargetAsset::BeginDestroy()
{
#if WITH_EDITOR
	if ( OnBlueprintCompiledDelegate.IsValid() )
	{
		if ( UBlueprint* Blueprint = Cast<UBlueprint>( GetClass ()->ClassGeneratedBy ) )
		{
			Blueprint->OnCompiled().Remove( OnBlueprintCompiledDelegate );
		}
		OnBlueprintCompiledDelegate.Reset();
	}
#endif

	Super::BeginDestroy();
}

// Converts HandEngine bone name to remapped one
FName ULiveLinkHandEngineRetargetAsset::GetRemappedBoneName(const FName& BoneName) const
{
	const std::map<FName, EHandEngineMapping, FNameFastLess>& bonesMap = s_remap_bones_names;
	auto it = bonesMap.find(BoneName);

	if(it != bonesMap.end())
	{
		auto it_row = m_remapping_rows.Find(it->second);
		if(it_row)
			return it_row->RemapId;
	}

	return BoneName;
}

#if WITH_EDITOR

void ULiveLinkHandEngineRetargetAsset::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property != nullptr)
	{
		FName PropertyName = PropertyChangedEvent.GetPropertyName();
		FName MemberPropertyName = (PropertyChangedEvent.MemberProperty != nullptr) ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None;

		if (PropertyName == GET_MEMBER_NAME_CHECKED(ULiveLinkHandEngineRetargetAsset, m_skeleton))
		{
			AddBoneNamesToRemapTable();
		}
		else if (PropertyName == GET_MEMBER_NAME_CHECKED(ULiveLinkHandEngineRetargetAsset, m_remapping_convention))
		{
			AddBoneNamesToRemapTable();
		}
		else if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(ULiveLinkHandEngineRetargetAsset, m_remapping_rows))
		{
			// When user changes any row mapping, switch to Manual mapping type, so these changes won't be lost
			m_remapping_convention = EHandEngineRetargetNamingConvention::Manual;
		}
	}
}

void ULiveLinkHandEngineRetargetAsset::OnBlueprintClassCompiled( UBlueprint* TargetBlueprint )
{
	AddBoneNamesToRemapTable();
}

#endif // WITH_EDITOR

TArray<FName> ULiveLinkHandEngineRetargetAsset::PopulateBoneNames(const FLiveLinkSkeletonStaticData* InSkeletonData)
{
	const auto& source_bone_names = InSkeletonData->GetBoneNames();

	TArray<FName> transformed_bone_names;
	transformed_bone_names.Reserve(source_bone_names.Num() + 4);

	//todo: BoneNameMap is never emptied
	for(const auto& bone_name : source_bone_names)
	{
		FName* TargetBoneName = BoneNameMap.Find(bone_name);
		if(TargetBoneName == nullptr)
		{
			FName new_name = GetRemappedBoneName(bone_name);
			transformed_bone_names.Add(new_name);
			BoneNameMap.Add(bone_name, new_name);
		}
		else
			transformed_bone_names.Add(*TargetBoneName);
	}

	return transformed_bone_names;
}

float ULiveLinkHandEngineRetargetAsset::calculateVectorScale(FVector handEngineVec, FVector unrealVec)
{
	float handEngineLength = handEngineVec.Size();
	float unrealLength = unrealVec.Size();

	return (unrealLength / handEngineLength);
}

inline FQuat isRotationFromVecToVec(FVector a, FVector b)
{
	a.Normalize();
	b.Normalize();

	return FQuat::FindBetweenNormals(a, b);
}

#define MYLOG(a, ...) if (m_doLog) UE_LOG(LogTemp, Warning, TEXT(a), __VA_ARGS__)

void ULiveLinkHandEngineRetargetAsset::calculateTposeValues(FCompactPose OutPose, const FLiveLinkSkeletonStaticData& InSkeletonData, const FLiveLinkAnimationFrameData& InFrameData, FBlendedCurve& OutCurve)
{
	bool logValid = false;
	std::map<int, int> parentOverride;

	auto TransformedBoneNames = PopulateBoneNames(&InSkeletonData);

	//get reference pose values
	TArray<FTransform> TPose = OutPose.GetBoneContainer().GetReferenceSkeleton().GetRefBonePose();
	if(TPoseAnimation)
	{
		MYLOG("TPoseAnimation %p", TPoseAnimation);
		//when upgrading from UE4.23 to 4.26 api changed for GetAnimationPose
		//TPoseAnimation->GetAnimationPose(OutPose, OutCurve, FAnimExtractContext(0, true));
#if ENGINE_MAJOR_VERSION >= 5
		UE::Anim::FStackAttributeContainer attributes;
#else
        FStackCustomAttributes attributes;
#endif
        FAnimationPoseData outAnimationPoseData(OutPose, OutCurve, attributes);
        TPoseAnimation->GetAnimationPose(outAnimationPoseData, FAnimExtractContext( 0.0, true ));
		TPose = OutPose.GetBones();
	}
	FVector uniformScale = OutPose.GetBoneContainer().GetReferenceSkeleton().GetRefBonePose()[0].GetScale3D();
	//calculate the character tpose rotation and position in world space
	if(m_tposeWorld.Num() != 0 && m_tposeWorld.Num() != TPose.Num())
		return;
	m_tposeWorld = TPose;
	for (int32 i = 0; i < TPose.Num(); ++i)
	{
		if (m_tposeWorld.IsValidIndex(i))
		{
			int parentBoneIndex = OutPose.GetBoneContainer().GetReferenceSkeleton().GetParentIndex(i);
			if (m_tposeWorld.IsValidIndex(parentBoneIndex))
			{
				m_tposeWorld[i].SetRotation(m_tposeWorld[parentBoneIndex].GetRotation() * TPose[i].GetRotation());
				m_tposeWorld[i].SetTranslation(m_tposeWorld[parentBoneIndex].GetRotation().RotateVector(TPose[i].GetTranslation() * uniformScale) + m_tposeWorld[parentBoneIndex].GetTranslation());
			}
		}
	}

	m_mvnToUnrealTpose.SetNum(InFrameData.Transforms.Num());
	for(int32 i = 0; i < InFrameData.Transforms.Num(); ++i)
	{
		FName BoneName = TransformedBoneNames[i];
		auto boneIndex = OutPose.GetBoneContainer().GetReferenceSkeleton().FindBoneIndex(BoneName);
		if(m_tposeWorld.IsValidIndex(boneIndex))
		{
			auto parentBoneIndex = OutPose.GetBoneContainer().GetReferenceSkeleton().GetParentIndex(boneIndex);
			m_mvnToUnrealTpose[i].SetRotation(m_tposeWorld[boneIndex].GetRotation());

			FVector handEngineVec;
			FVector tposeVec;

			if(i > 0 && m_tposeWorld.IsValidIndex(parentBoneIndex))
			{
				m_mvnToUnrealTpose[i].SetTranslation(TPose[boneIndex].GetTranslation());
			}
			else
			{
				tposeVec = m_tposeWorld[boneIndex].GetTranslation();
				m_mvnToUnrealTpose[i].SetTranslation(tposeVec);
			}
			MYLOG("m_mvnToUnrealTpose (%f,%f,%f)", m_mvnToUnrealTpose[i].GetTranslation()[0], m_mvnToUnrealTpose[i].GetTranslation()[1], m_mvnToUnrealTpose[i].GetTranslation()[2]);
		}
	}
}

void ULiveLinkHandEngineRetargetAsset::AddBoneNamesToRemapTable()
{
	if (m_remapping_convention == EHandEngineRetargetNamingConvention::Manual)
	{
		// Don't change user edited values
		return;
	}

	if (m_skeleton != nullptr)
	{
		FetchSkeletonBoneNames();

		// Attempt to fill according to naming convention
		for (int32 i = 0; i < static_cast<int>(EHandEngineMapping::Count); i++)
		{
			EHandEngineMapping CurrBone = EHandEngineMapping(i);
			// GetRemappedBoneNameByConvention will return 'None' if bone doesn't exist in a mesh
			FName LookupName = GetRemappedBoneNameByConvention( CurrBone, m_remapping_convention );
			m_remapping_rows.Add(CurrBone, FRemapRowHandle(CurrBone, LookupName));
		}
	}
}

void ULiveLinkHandEngineRetargetAsset::SetSkeleton(USkeleton* Skeleton)
{
	m_skeleton = Skeleton;
	AddBoneNamesToRemapTable();
}

//todo: unused
void MakeCurveMapFromFrame(const FCompactPose& InPose, const FLiveLinkSkeletonStaticData& InSkeletonData, const FLiveLinkAnimationFrameData& InFrameData, const TArray<FName, TMemStackAllocator<>>& TransformedCurveNames, TMap<FName, float>& OutCurveMap)
{
	OutCurveMap.Reset();
	OutCurveMap.Reserve(InSkeletonData.PropertyNames.Num());

	const USkeleton* Skeleton = InPose.GetBoneContainer().GetSkeletonAsset();

	if(InSkeletonData.PropertyNames.Num() == InFrameData.PropertyValues.Num())
	{
		for(int32 CurveIdx = 0; CurveIdx < InSkeletonData.PropertyNames.Num(); ++CurveIdx)
		{
			float PropertyValue = InFrameData.PropertyValues[CurveIdx];
			OutCurveMap.Add(TransformedCurveNames[CurveIdx]) = PropertyValue;
		}
	}
}

void ULiveLinkHandEngineRetargetAsset::BuildPoseFromAnimationData(float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose)
{
	//MYLOG("*********************************************");
	MYLOG("Building for %p", this);

	bool logValid = false;
	std::map<int, int> parentOverride;

	auto TransformedBoneNames = PopulateBoneNames(InSkeletonData);

	

	
	for(int32 i = 0; i < InFrameData->Transforms.Num(); ++i)
	{
		FName BoneName = TransformedBoneNames[i];

		FTransform BoneTransform = InFrameData->Transforms[i];


		int32 MeshIndex = OutPose.GetBoneContainer().GetPoseBoneIndexForBoneName(BoneName);

		if(MeshIndex != INDEX_NONE)
		{
			FCompactPoseBoneIndex CPIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(MeshIndex));
			if(CPIndex != INDEX_NONE)
			{
		
				FTransform ProcessedTransform = BoneTransform;
							

				ProcessedTransform.SetLocation(OutPose[CPIndex].GetLocation());
				FQuat reorderAxis = ProcessedTransform.GetRotation();
				int yInv = invertY ? -1 : 1;
				int xInv = invertX ? -1 : 1;
				int zInv = invertZ ? -1 : 1;
				 


				reorderAxis = FQuat(reorderAxis.Z * xInv, reorderAxis.X * yInv, reorderAxis.Y * zInv, reorderAxis.W);

				if (m_remapping_convention == EHandEngineRetargetNamingConvention::Maya) {
					ProcessedTransform.SetRotation(reorderAxis);
					
				}

				
				
				OutPose[CPIndex] = ProcessedTransform;
			}
		}
	}

	

}

void ULiveLinkHandEngineRetargetAsset::BuildPoseAndCurveFromBaseData(float DeltaTime, const FLiveLinkBaseStaticData* InBaseStaticData, const FLiveLinkBaseFrameData* InBaseFrameData, FCompactPose& OutPose, FBlendedCurve& OutCurve)
{
	TMap<FName, float> BPCurveValues;
	BuildCurveData(BPCurveValues, OutPose, OutCurve);
}

void ULiveLinkHandEngineRetargetAsset::FetchSkeletonBoneNames()
{
	if (m_skeleton != nullptr)
	{
		const FReferenceSkeleton& RefSkeleton = m_skeleton->GetReferenceSkeleton();

		m_skeleton_bone_names.Empty(RefSkeleton.GetNum());
		for(int32 BoneIndex = 0; BoneIndex < RefSkeleton.GetNum(); BoneIndex++)
		{
			m_skeleton_bone_names.Add(RefSkeleton.GetBoneName(BoneIndex));
		}
	}
	else
	{
		m_skeleton_bone_names.Empty();
	}
}

const std::map<EHandEngineMapping, FName>& ULiveLinkHandEngineRetargetAsset::GetNamingConventionBoneMap( EHandEngineRetargetNamingConvention namingConvention )
{
	if ( namingConvention == EHandEngineRetargetNamingConvention::Maya )
	{
		return s_bones_map_maya;
	}
	if ( namingConvention == EHandEngineRetargetNamingConvention::XSens )
	{
		return s_bones_map_xsens;
	}
	return s_bones_map_default;
}

FName ULiveLinkHandEngineRetargetAsset::GetRemappedBoneNameByConvention( EHandEngineMapping Bone, EHandEngineRetargetNamingConvention Convention ) const
{
	FName lookupName = NAME_None;

	if ( Convention == EHandEngineRetargetNamingConvention::Custom )
	{
		// Execute overridable Blueprint function
		lookupName = GetCustomRemappedBoneName(Bone);
	}
	else
	{ 
		auto& namedBonesMap = GetNamingConventionBoneMap(Convention);
		// if naming convention contains a matching name
		auto found =namedBonesMap.find(Bone);
		if (found != namedBonesMap.end())
		{
			lookupName = found->second;
		}
	}

	// Check if bone with this name exists in skeleton
	if (lookupName != NAME_None && m_skeleton_bone_names.Contains(lookupName))
	{
		return lookupName;
	}
	return NAME_None;
}

// Default implementation, overridable in Blueprint
FName ULiveLinkHandEngineRetargetAsset::GetCustomRemappedBoneName_Implementation( EHandEngineMapping Bone ) const
{
	if ( s_bones_map_default.find ( Bone ) != s_bones_map_default.end () )
	{
		return s_bones_map_default[Bone];
	}
	return NAME_None;
}
