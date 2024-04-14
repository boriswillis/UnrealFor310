// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandEngineLiveLink/Public/HandEngineRetargetSkeleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandEngineRetargetSkeleton() {}
// Cross Module References
	HANDENGINELIVELINK_API UEnum* Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID();
	UPackage* Z_Construct_UPackage__Script_HandEngineLiveLink();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_HandEngineBoneID;
	static UEnum* HandEngineBoneID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_HandEngineBoneID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_HandEngineBoneID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID, Z_Construct_UPackage__Script_HandEngineLiveLink(), TEXT("HandEngineBoneID"));
		}
		return Z_Registration_Info_UEnum_HandEngineBoneID.OuterSingleton;
	}
	template<> HANDENGINELIVELINK_API UEnum* StaticEnum<HandEngineBoneID>()
	{
		return HandEngineBoneID_StaticEnum();
	}
	struct Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID_Statics::Enumerators[] = {
		{ "HandEngineBoneID::Root", (int64)HandEngineBoneID::Root },
		{ "HandEngineBoneID::Hips", (int64)HandEngineBoneID::Hips },
		{ "HandEngineBoneID::Spine", (int64)HandEngineBoneID::Spine },
		{ "HandEngineBoneID::Spine1", (int64)HandEngineBoneID::Spine1 },
		{ "HandEngineBoneID::Neck", (int64)HandEngineBoneID::Neck },
		{ "HandEngineBoneID::Head", (int64)HandEngineBoneID::Head },
		{ "HandEngineBoneID::LeftShoulder", (int64)HandEngineBoneID::LeftShoulder },
		{ "HandEngineBoneID::LeftArm", (int64)HandEngineBoneID::LeftArm },
		{ "HandEngineBoneID::LeftForeArm", (int64)HandEngineBoneID::LeftForeArm },
		{ "HandEngineBoneID::LeftHand", (int64)HandEngineBoneID::LeftHand },
		{ "HandEngineBoneID::RightShoulder", (int64)HandEngineBoneID::RightShoulder },
		{ "HandEngineBoneID::RightArm", (int64)HandEngineBoneID::RightArm },
		{ "HandEngineBoneID::RightForeArm", (int64)HandEngineBoneID::RightForeArm },
		{ "HandEngineBoneID::RightHand", (int64)HandEngineBoneID::RightHand },
		{ "HandEngineBoneID::LeftUpLeg", (int64)HandEngineBoneID::LeftUpLeg },
		{ "HandEngineBoneID::LeftLeg", (int64)HandEngineBoneID::LeftLeg },
		{ "HandEngineBoneID::LeftFoot", (int64)HandEngineBoneID::LeftFoot },
		{ "HandEngineBoneID::LeftToeBase", (int64)HandEngineBoneID::LeftToeBase },
		{ "HandEngineBoneID::RightUpLeg", (int64)HandEngineBoneID::RightUpLeg },
		{ "HandEngineBoneID::RightLeg", (int64)HandEngineBoneID::RightLeg },
		{ "HandEngineBoneID::RightFoot", (int64)HandEngineBoneID::RightFoot },
		{ "HandEngineBoneID::RightToeBase", (int64)HandEngineBoneID::RightToeBase },
		{ "HandEngineBoneID::LeftHandThumb1", (int64)HandEngineBoneID::LeftHandThumb1 },
		{ "HandEngineBoneID::LeftHandThumb2", (int64)HandEngineBoneID::LeftHandThumb2 },
		{ "HandEngineBoneID::LeftHandThumb3", (int64)HandEngineBoneID::LeftHandThumb3 },
		{ "HandEngineBoneID::LeftHandIndex1", (int64)HandEngineBoneID::LeftHandIndex1 },
		{ "HandEngineBoneID::LeftHandIndex2", (int64)HandEngineBoneID::LeftHandIndex2 },
		{ "HandEngineBoneID::LeftHandIndex3", (int64)HandEngineBoneID::LeftHandIndex3 },
		{ "HandEngineBoneID::LeftHandMiddle1", (int64)HandEngineBoneID::LeftHandMiddle1 },
		{ "HandEngineBoneID::LeftHandMiddle2", (int64)HandEngineBoneID::LeftHandMiddle2 },
		{ "HandEngineBoneID::LeftHandMiddle3", (int64)HandEngineBoneID::LeftHandMiddle3 },
		{ "HandEngineBoneID::LeftHandRing1", (int64)HandEngineBoneID::LeftHandRing1 },
		{ "HandEngineBoneID::LeftHandRing2", (int64)HandEngineBoneID::LeftHandRing2 },
		{ "HandEngineBoneID::LeftHandRing3", (int64)HandEngineBoneID::LeftHandRing3 },
		{ "HandEngineBoneID::LeftHandPinky1", (int64)HandEngineBoneID::LeftHandPinky1 },
		{ "HandEngineBoneID::LeftHandPinky2", (int64)HandEngineBoneID::LeftHandPinky2 },
		{ "HandEngineBoneID::LeftHandPinky3", (int64)HandEngineBoneID::LeftHandPinky3 },
		{ "HandEngineBoneID::RightHandThumb1", (int64)HandEngineBoneID::RightHandThumb1 },
		{ "HandEngineBoneID::RightHandThumb2", (int64)HandEngineBoneID::RightHandThumb2 },
		{ "HandEngineBoneID::RightHandThumb3", (int64)HandEngineBoneID::RightHandThumb3 },
		{ "HandEngineBoneID::RightHandIndex1", (int64)HandEngineBoneID::RightHandIndex1 },
		{ "HandEngineBoneID::RightHandIndex2", (int64)HandEngineBoneID::RightHandIndex2 },
		{ "HandEngineBoneID::RightHandIndex3", (int64)HandEngineBoneID::RightHandIndex3 },
		{ "HandEngineBoneID::RightHandMiddle1", (int64)HandEngineBoneID::RightHandMiddle1 },
		{ "HandEngineBoneID::RightHandMiddle2", (int64)HandEngineBoneID::RightHandMiddle2 },
		{ "HandEngineBoneID::RightHandMiddle3", (int64)HandEngineBoneID::RightHandMiddle3 },
		{ "HandEngineBoneID::RightHandRing1", (int64)HandEngineBoneID::RightHandRing1 },
		{ "HandEngineBoneID::RightHandRing2", (int64)HandEngineBoneID::RightHandRing2 },
		{ "HandEngineBoneID::RightHandRing3", (int64)HandEngineBoneID::RightHandRing3 },
		{ "HandEngineBoneID::RightHandPinky1", (int64)HandEngineBoneID::RightHandPinky1 },
		{ "HandEngineBoneID::RightHandPinky2", (int64)HandEngineBoneID::RightHandPinky2 },
		{ "HandEngineBoneID::RightHandPinky3", (int64)HandEngineBoneID::RightHandPinky3 },
		{ "HandEngineBoneID::NumBones", (int64)HandEngineBoneID::NumBones },
		{ "HandEngineBoneID::UndefinedBone", (int64)HandEngineBoneID::UndefinedBone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID_Statics::Enum_MetaDataParams[] = {
		{ "Head.Name", "HandEngineBoneID::Head" },
		{ "Hips.Name", "HandEngineBoneID::Hips" },
		{ "LeftArm.Name", "HandEngineBoneID::LeftArm" },
		{ "LeftFoot.Name", "HandEngineBoneID::LeftFoot" },
		{ "LeftForeArm.Name", "HandEngineBoneID::LeftForeArm" },
		{ "LeftHand.Name", "HandEngineBoneID::LeftHand" },
		{ "LeftHandIndex1.Name", "HandEngineBoneID::LeftHandIndex1" },
		{ "LeftHandIndex2.Name", "HandEngineBoneID::LeftHandIndex2" },
		{ "LeftHandIndex3.Name", "HandEngineBoneID::LeftHandIndex3" },
		{ "LeftHandMiddle1.Name", "HandEngineBoneID::LeftHandMiddle1" },
		{ "LeftHandMiddle2.Name", "HandEngineBoneID::LeftHandMiddle2" },
		{ "LeftHandMiddle3.Name", "HandEngineBoneID::LeftHandMiddle3" },
		{ "LeftHandPinky1.Name", "HandEngineBoneID::LeftHandPinky1" },
		{ "LeftHandPinky2.Name", "HandEngineBoneID::LeftHandPinky2" },
		{ "LeftHandPinky3.Name", "HandEngineBoneID::LeftHandPinky3" },
		{ "LeftHandRing1.Name", "HandEngineBoneID::LeftHandRing1" },
		{ "LeftHandRing2.Name", "HandEngineBoneID::LeftHandRing2" },
		{ "LeftHandRing3.Name", "HandEngineBoneID::LeftHandRing3" },
		{ "LeftHandThumb1.Name", "HandEngineBoneID::LeftHandThumb1" },
		{ "LeftHandThumb2.Name", "HandEngineBoneID::LeftHandThumb2" },
		{ "LeftHandThumb3.Name", "HandEngineBoneID::LeftHandThumb3" },
		{ "LeftLeg.Name", "HandEngineBoneID::LeftLeg" },
		{ "LeftShoulder.Name", "HandEngineBoneID::LeftShoulder" },
		{ "LeftToeBase.Name", "HandEngineBoneID::LeftToeBase" },
		{ "LeftUpLeg.Name", "HandEngineBoneID::LeftUpLeg" },
		{ "ModuleRelativePath", "Public/HandEngineRetargetSkeleton.h" },
		{ "Neck.Name", "HandEngineBoneID::Neck" },
		{ "NumBones.Name", "HandEngineBoneID::NumBones" },
		{ "RightArm.Name", "HandEngineBoneID::RightArm" },
		{ "RightFoot.Name", "HandEngineBoneID::RightFoot" },
		{ "RightForeArm.Name", "HandEngineBoneID::RightForeArm" },
		{ "RightHand.Name", "HandEngineBoneID::RightHand" },
		{ "RightHandIndex1.Name", "HandEngineBoneID::RightHandIndex1" },
		{ "RightHandIndex2.Name", "HandEngineBoneID::RightHandIndex2" },
		{ "RightHandIndex3.Name", "HandEngineBoneID::RightHandIndex3" },
		{ "RightHandMiddle1.Name", "HandEngineBoneID::RightHandMiddle1" },
		{ "RightHandMiddle2.Name", "HandEngineBoneID::RightHandMiddle2" },
		{ "RightHandMiddle3.Name", "HandEngineBoneID::RightHandMiddle3" },
		{ "RightHandPinky1.Name", "HandEngineBoneID::RightHandPinky1" },
		{ "RightHandPinky2.Name", "HandEngineBoneID::RightHandPinky2" },
		{ "RightHandPinky3.Name", "HandEngineBoneID::RightHandPinky3" },
		{ "RightHandRing1.Name", "HandEngineBoneID::RightHandRing1" },
		{ "RightHandRing2.Name", "HandEngineBoneID::RightHandRing2" },
		{ "RightHandRing3.Name", "HandEngineBoneID::RightHandRing3" },
		{ "RightHandThumb1.Name", "HandEngineBoneID::RightHandThumb1" },
		{ "RightHandThumb2.Name", "HandEngineBoneID::RightHandThumb2" },
		{ "RightHandThumb3.Name", "HandEngineBoneID::RightHandThumb3" },
		{ "RightLeg.Name", "HandEngineBoneID::RightLeg" },
		{ "RightShoulder.Name", "HandEngineBoneID::RightShoulder" },
		{ "RightToeBase.Name", "HandEngineBoneID::RightToeBase" },
		{ "RightUpLeg.Name", "HandEngineBoneID::RightUpLeg" },
		{ "Root.Name", "HandEngineBoneID::Root" },
		{ "Spine.Name", "HandEngineBoneID::Spine" },
		{ "Spine1.Name", "HandEngineBoneID::Spine1" },
		{ "UndefinedBone.Name", "HandEngineBoneID::UndefinedBone" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
		nullptr,
		"HandEngineBoneID",
		"HandEngineBoneID",
		Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID()
	{
		if (!Z_Registration_Info_UEnum_HandEngineBoneID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_HandEngineBoneID.InnerSingleton, Z_Construct_UEnum_HandEngineLiveLink_HandEngineBoneID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_HandEngineBoneID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineRetargetSkeleton_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineRetargetSkeleton_h_Statics::EnumInfo[] = {
		{ HandEngineBoneID_StaticEnum, TEXT("HandEngineBoneID"), &Z_Registration_Info_UEnum_HandEngineBoneID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2453682217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineRetargetSkeleton_h_2412235888(TEXT("/Script/HandEngineLiveLink"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineRetargetSkeleton_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineRetargetSkeleton_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
