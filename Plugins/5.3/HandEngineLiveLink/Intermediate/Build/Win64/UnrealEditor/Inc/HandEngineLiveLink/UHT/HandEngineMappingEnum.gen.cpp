// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/HandEngineLiveLink/Public/HandEngineMappingEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandEngineMappingEnum() {}
// Cross Module References
	HANDENGINELIVELINK_API UEnum* Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping();
	HANDENGINELIVELINK_API UEnum* Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention();
	UPackage* Z_Construct_UPackage__Script_HandEngineLiveLink();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandEngineMapping;
	static UEnum* EHandEngineMapping_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandEngineMapping.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandEngineMapping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping, (UObject*)Z_Construct_UPackage__Script_HandEngineLiveLink(), TEXT("EHandEngineMapping"));
		}
		return Z_Registration_Info_UEnum_EHandEngineMapping.OuterSingleton;
	}
	template<> HANDENGINELIVELINK_API UEnum* StaticEnum<EHandEngineMapping>()
	{
		return EHandEngineMapping_StaticEnum();
	}
	struct Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping_Statics::Enumerators[] = {
		{ "EHandEngineMapping::Root", (int64)EHandEngineMapping::Root },
		{ "EHandEngineMapping::Pelvis", (int64)EHandEngineMapping::Pelvis },
		{ "EHandEngineMapping::Spine_01", (int64)EHandEngineMapping::Spine_01 },
		{ "EHandEngineMapping::Spine_02", (int64)EHandEngineMapping::Spine_02 },
		{ "EHandEngineMapping::Spine_03", (int64)EHandEngineMapping::Spine_03 },
		{ "EHandEngineMapping::Spine_04", (int64)EHandEngineMapping::Spine_04 },
		{ "EHandEngineMapping::Neck_01", (int64)EHandEngineMapping::Neck_01 },
		{ "EHandEngineMapping::Head", (int64)EHandEngineMapping::Head },
		{ "EHandEngineMapping::Clavicle_r", (int64)EHandEngineMapping::Clavicle_r },
		{ "EHandEngineMapping::Upperarm_r", (int64)EHandEngineMapping::Upperarm_r },
		{ "EHandEngineMapping::Lowerarm_r", (int64)EHandEngineMapping::Lowerarm_r },
		{ "EHandEngineMapping::Hand_r", (int64)EHandEngineMapping::Hand_r },
		{ "EHandEngineMapping::Clavicle_l", (int64)EHandEngineMapping::Clavicle_l },
		{ "EHandEngineMapping::Upperarm_l", (int64)EHandEngineMapping::Upperarm_l },
		{ "EHandEngineMapping::Lowerarm_l", (int64)EHandEngineMapping::Lowerarm_l },
		{ "EHandEngineMapping::Hand_l", (int64)EHandEngineMapping::Hand_l },
		{ "EHandEngineMapping::Thigh_r", (int64)EHandEngineMapping::Thigh_r },
		{ "EHandEngineMapping::Calf_r", (int64)EHandEngineMapping::Calf_r },
		{ "EHandEngineMapping::Foot_r", (int64)EHandEngineMapping::Foot_r },
		{ "EHandEngineMapping::Ball_r", (int64)EHandEngineMapping::Ball_r },
		{ "EHandEngineMapping::Thigh_l", (int64)EHandEngineMapping::Thigh_l },
		{ "EHandEngineMapping::Calf_l", (int64)EHandEngineMapping::Calf_l },
		{ "EHandEngineMapping::Foot_l", (int64)EHandEngineMapping::Foot_l },
		{ "EHandEngineMapping::Ball_l", (int64)EHandEngineMapping::Ball_l },
		{ "EHandEngineMapping::Prop1", (int64)EHandEngineMapping::Prop1 },
		{ "EHandEngineMapping::Prop2", (int64)EHandEngineMapping::Prop2 },
		{ "EHandEngineMapping::Prop3", (int64)EHandEngineMapping::Prop3 },
		{ "EHandEngineMapping::Prop4", (int64)EHandEngineMapping::Prop4 },
		{ "EHandEngineMapping::LeftWrist", (int64)EHandEngineMapping::LeftWrist },
		{ "EHandEngineMapping::Thumb_01_l", (int64)EHandEngineMapping::Thumb_01_l },
		{ "EHandEngineMapping::Thumb_02_l", (int64)EHandEngineMapping::Thumb_02_l },
		{ "EHandEngineMapping::Thumb_03_l", (int64)EHandEngineMapping::Thumb_03_l },
		{ "EHandEngineMapping::Index_00_l", (int64)EHandEngineMapping::Index_00_l },
		{ "EHandEngineMapping::Index_01_l", (int64)EHandEngineMapping::Index_01_l },
		{ "EHandEngineMapping::Index_02_l", (int64)EHandEngineMapping::Index_02_l },
		{ "EHandEngineMapping::Index_03_l", (int64)EHandEngineMapping::Index_03_l },
		{ "EHandEngineMapping::Middle_00_l", (int64)EHandEngineMapping::Middle_00_l },
		{ "EHandEngineMapping::Middle_01_l", (int64)EHandEngineMapping::Middle_01_l },
		{ "EHandEngineMapping::Middle_02_l", (int64)EHandEngineMapping::Middle_02_l },
		{ "EHandEngineMapping::Middle_03_l", (int64)EHandEngineMapping::Middle_03_l },
		{ "EHandEngineMapping::Ring_00_l", (int64)EHandEngineMapping::Ring_00_l },
		{ "EHandEngineMapping::Ring_01_l", (int64)EHandEngineMapping::Ring_01_l },
		{ "EHandEngineMapping::Ring_02_l", (int64)EHandEngineMapping::Ring_02_l },
		{ "EHandEngineMapping::Ring_03_l", (int64)EHandEngineMapping::Ring_03_l },
		{ "EHandEngineMapping::Pinky_00_l", (int64)EHandEngineMapping::Pinky_00_l },
		{ "EHandEngineMapping::Pinky_01_l", (int64)EHandEngineMapping::Pinky_01_l },
		{ "EHandEngineMapping::Pinky_02_l", (int64)EHandEngineMapping::Pinky_02_l },
		{ "EHandEngineMapping::Pinky_03_l", (int64)EHandEngineMapping::Pinky_03_l },
		{ "EHandEngineMapping::RightWrist", (int64)EHandEngineMapping::RightWrist },
		{ "EHandEngineMapping::Thumb_01_r", (int64)EHandEngineMapping::Thumb_01_r },
		{ "EHandEngineMapping::Thumb_02_r", (int64)EHandEngineMapping::Thumb_02_r },
		{ "EHandEngineMapping::Thumb_03_r", (int64)EHandEngineMapping::Thumb_03_r },
		{ "EHandEngineMapping::Index_00_r", (int64)EHandEngineMapping::Index_00_r },
		{ "EHandEngineMapping::Index_01_r", (int64)EHandEngineMapping::Index_01_r },
		{ "EHandEngineMapping::Index_02_r", (int64)EHandEngineMapping::Index_02_r },
		{ "EHandEngineMapping::Index_03_r", (int64)EHandEngineMapping::Index_03_r },
		{ "EHandEngineMapping::Middle_00_r", (int64)EHandEngineMapping::Middle_00_r },
		{ "EHandEngineMapping::Middle_01_r", (int64)EHandEngineMapping::Middle_01_r },
		{ "EHandEngineMapping::Middle_02_r", (int64)EHandEngineMapping::Middle_02_r },
		{ "EHandEngineMapping::Middle_03_r", (int64)EHandEngineMapping::Middle_03_r },
		{ "EHandEngineMapping::Ring_00_r", (int64)EHandEngineMapping::Ring_00_r },
		{ "EHandEngineMapping::Ring_01_r", (int64)EHandEngineMapping::Ring_01_r },
		{ "EHandEngineMapping::Ring_02_r", (int64)EHandEngineMapping::Ring_02_r },
		{ "EHandEngineMapping::Ring_03_r", (int64)EHandEngineMapping::Ring_03_r },
		{ "EHandEngineMapping::Pinky_00_r", (int64)EHandEngineMapping::Pinky_00_r },
		{ "EHandEngineMapping::Pinky_01_r", (int64)EHandEngineMapping::Pinky_01_r },
		{ "EHandEngineMapping::Pinky_02_r", (int64)EHandEngineMapping::Pinky_02_r },
		{ "EHandEngineMapping::Pinky_03_r", (int64)EHandEngineMapping::Pinky_03_r },
		{ "EHandEngineMapping::Count", (int64)EHandEngineMapping::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping_Statics::Enum_MetaDataParams[] = {
		{ "Ball_l.DisplayName", "ball_l" },
		{ "Ball_l.Name", "EHandEngineMapping::Ball_l" },
		{ "Ball_r.DisplayName", "ball_r" },
		{ "Ball_r.Name", "EHandEngineMapping::Ball_r" },
		{ "BlueprintType", "true" },
		{ "Calf_l.DisplayName", "calf_l" },
		{ "Calf_l.Name", "EHandEngineMapping::Calf_l" },
		{ "Calf_r.DisplayName", "calf_r" },
		{ "Calf_r.Name", "EHandEngineMapping::Calf_r" },
		{ "Clavicle_l.DisplayName", "clavicle_l" },
		{ "Clavicle_l.Name", "EHandEngineMapping::Clavicle_l" },
		{ "Clavicle_r.DisplayName", "clavicle_r" },
		{ "Clavicle_r.Name", "EHandEngineMapping::Clavicle_r" },
		{ "Count.Name", "EHandEngineMapping::Count" },
		{ "Foot_l.DisplayName", "foot_l" },
		{ "Foot_l.Name", "EHandEngineMapping::Foot_l" },
		{ "Foot_r.DisplayName", "foot_r" },
		{ "Foot_r.Name", "EHandEngineMapping::Foot_r" },
		{ "Hand_l.DisplayName", "hand_l" },
		{ "Hand_l.Name", "EHandEngineMapping::Hand_l" },
		{ "Hand_r.DisplayName", "hand_r" },
		{ "Hand_r.Name", "EHandEngineMapping::Hand_r" },
		{ "Head.DisplayName", "head" },
		{ "Head.Name", "EHandEngineMapping::Head" },
		{ "Index_00_l.DisplayName", "index_00_l" },
		{ "Index_00_l.Name", "EHandEngineMapping::Index_00_l" },
		{ "Index_00_r.DisplayName", "index_00_r" },
		{ "Index_00_r.Name", "EHandEngineMapping::Index_00_r" },
		{ "Index_01_l.DisplayName", "index_01_l" },
		{ "Index_01_l.Name", "EHandEngineMapping::Index_01_l" },
		{ "Index_01_r.DisplayName", "index_01_r" },
		{ "Index_01_r.Name", "EHandEngineMapping::Index_01_r" },
		{ "Index_02_l.DisplayName", "index_02_l" },
		{ "Index_02_l.Name", "EHandEngineMapping::Index_02_l" },
		{ "Index_02_r.DisplayName", "index_02_r" },
		{ "Index_02_r.Name", "EHandEngineMapping::Index_02_r" },
		{ "Index_03_l.DisplayName", "index_03_l" },
		{ "Index_03_l.Name", "EHandEngineMapping::Index_03_l" },
		{ "Index_03_r.DisplayName", "index_03_r" },
		{ "Index_03_r.Name", "EHandEngineMapping::Index_03_r" },
		{ "LeftWrist.DisplayName", "LeftWrist" },
		{ "LeftWrist.Name", "EHandEngineMapping::LeftWrist" },
		{ "Lowerarm_l.DisplayName", "lowerarm_l" },
		{ "Lowerarm_l.Name", "EHandEngineMapping::Lowerarm_l" },
		{ "Lowerarm_r.DisplayName", "lowerarm_r" },
		{ "Lowerarm_r.Name", "EHandEngineMapping::Lowerarm_r" },
		{ "Middle_00_l.DisplayName", "middle_00_l" },
		{ "Middle_00_l.Name", "EHandEngineMapping::Middle_00_l" },
		{ "Middle_00_r.DisplayName", "middle_00_r" },
		{ "Middle_00_r.Name", "EHandEngineMapping::Middle_00_r" },
		{ "Middle_01_l.DisplayName", "middle_01_l" },
		{ "Middle_01_l.Name", "EHandEngineMapping::Middle_01_l" },
		{ "Middle_01_r.DisplayName", "middle_01_r" },
		{ "Middle_01_r.Name", "EHandEngineMapping::Middle_01_r" },
		{ "Middle_02_l.DisplayName", "middle_02_l" },
		{ "Middle_02_l.Name", "EHandEngineMapping::Middle_02_l" },
		{ "Middle_02_r.DisplayName", "middle_02_r" },
		{ "Middle_02_r.Name", "EHandEngineMapping::Middle_02_r" },
		{ "Middle_03_l.DisplayName", "middle_03_l" },
		{ "Middle_03_l.Name", "EHandEngineMapping::Middle_03_l" },
		{ "Middle_03_r.DisplayName", "middle_03_r" },
		{ "Middle_03_r.Name", "EHandEngineMapping::Middle_03_r" },
		{ "ModuleRelativePath", "Public/HandEngineMappingEnum.h" },
		{ "Neck_01.DisplayName", "neck_01" },
		{ "Neck_01.Name", "EHandEngineMapping::Neck_01" },
		{ "Pelvis.DisplayName", "pelvis" },
		{ "Pelvis.Name", "EHandEngineMapping::Pelvis" },
		{ "Pinky_00_l.DisplayName", "pinky_00_l" },
		{ "Pinky_00_l.Name", "EHandEngineMapping::Pinky_00_l" },
		{ "Pinky_00_r.DisplayName", "pinky_00_r" },
		{ "Pinky_00_r.Name", "EHandEngineMapping::Pinky_00_r" },
		{ "Pinky_01_l.DisplayName", "pinky_01_l" },
		{ "Pinky_01_l.Name", "EHandEngineMapping::Pinky_01_l" },
		{ "Pinky_01_r.DisplayName", "pinky_01_r" },
		{ "Pinky_01_r.Name", "EHandEngineMapping::Pinky_01_r" },
		{ "Pinky_02_l.DisplayName", "pinky_02_l" },
		{ "Pinky_02_l.Name", "EHandEngineMapping::Pinky_02_l" },
		{ "Pinky_02_r.DisplayName", "pinky_02_r" },
		{ "Pinky_02_r.Name", "EHandEngineMapping::Pinky_02_r" },
		{ "Pinky_03_l.DisplayName", "pinky_03_l" },
		{ "Pinky_03_l.Name", "EHandEngineMapping::Pinky_03_l" },
		{ "Pinky_03_r.DisplayName", "pinky_03_r" },
		{ "Pinky_03_r.Name", "EHandEngineMapping::Pinky_03_r" },
		{ "Prop1.DisplayName", "Prop1" },
		{ "Prop1.Name", "EHandEngineMapping::Prop1" },
		{ "Prop2.DisplayName", "Prop2" },
		{ "Prop2.Name", "EHandEngineMapping::Prop2" },
		{ "Prop3.DisplayName", "Prop3" },
		{ "Prop3.Name", "EHandEngineMapping::Prop3" },
		{ "Prop4.DisplayName", "Prop4" },
		{ "Prop4.Name", "EHandEngineMapping::Prop4" },
		{ "RightWrist.DisplayName", "RightWrist" },
		{ "RightWrist.Name", "EHandEngineMapping::RightWrist" },
		{ "Ring_00_l.DisplayName", "ring_00_l" },
		{ "Ring_00_l.Name", "EHandEngineMapping::Ring_00_l" },
		{ "Ring_00_r.DisplayName", "ring_00_r" },
		{ "Ring_00_r.Name", "EHandEngineMapping::Ring_00_r" },
		{ "Ring_01_l.DisplayName", "ring_01_l" },
		{ "Ring_01_l.Name", "EHandEngineMapping::Ring_01_l" },
		{ "Ring_01_r.DisplayName", "ring_01_r" },
		{ "Ring_01_r.Name", "EHandEngineMapping::Ring_01_r" },
		{ "Ring_02_l.DisplayName", "ring_02_l" },
		{ "Ring_02_l.Name", "EHandEngineMapping::Ring_02_l" },
		{ "Ring_02_r.DisplayName", "ring_02_r" },
		{ "Ring_02_r.Name", "EHandEngineMapping::Ring_02_r" },
		{ "Ring_03_l.DisplayName", "ring_03_l" },
		{ "Ring_03_l.Name", "EHandEngineMapping::Ring_03_l" },
		{ "Ring_03_r.DisplayName", "ring_03_r" },
		{ "Ring_03_r.Name", "EHandEngineMapping::Ring_03_r" },
		{ "Root.DisplayName", "root" },
		{ "Root.Name", "EHandEngineMapping::Root" },
		{ "Spine_01.DisplayName", "spine_01" },
		{ "Spine_01.Name", "EHandEngineMapping::Spine_01" },
		{ "Spine_02.DisplayName", "spine_02" },
		{ "Spine_02.Name", "EHandEngineMapping::Spine_02" },
		{ "Spine_03.DisplayName", "spine_03" },
		{ "Spine_03.Name", "EHandEngineMapping::Spine_03" },
		{ "Spine_04.DisplayName", "spine_04" },
		{ "Spine_04.Name", "EHandEngineMapping::Spine_04" },
		{ "Thigh_l.DisplayName", "thigh_l" },
		{ "Thigh_l.Name", "EHandEngineMapping::Thigh_l" },
		{ "Thigh_r.DisplayName", "thigh_r" },
		{ "Thigh_r.Name", "EHandEngineMapping::Thigh_r" },
		{ "Thumb_01_l.DisplayName", "thumb_01_l" },
		{ "Thumb_01_l.Name", "EHandEngineMapping::Thumb_01_l" },
		{ "Thumb_01_r.DisplayName", "thumb_01_r" },
		{ "Thumb_01_r.Name", "EHandEngineMapping::Thumb_01_r" },
		{ "Thumb_02_l.DisplayName", "thumb_02_l" },
		{ "Thumb_02_l.Name", "EHandEngineMapping::Thumb_02_l" },
		{ "Thumb_02_r.DisplayName", "thumb_02_r" },
		{ "Thumb_02_r.Name", "EHandEngineMapping::Thumb_02_r" },
		{ "Thumb_03_l.DisplayName", "thumb_03_l" },
		{ "Thumb_03_l.Name", "EHandEngineMapping::Thumb_03_l" },
		{ "Thumb_03_r.DisplayName", "thumb_03_r" },
		{ "Thumb_03_r.Name", "EHandEngineMapping::Thumb_03_r" },
		{ "Upperarm_l.DisplayName", "upperarm_l" },
		{ "Upperarm_l.Name", "EHandEngineMapping::Upperarm_l" },
		{ "Upperarm_r.DisplayName", "upperarm_r" },
		{ "Upperarm_r.Name", "EHandEngineMapping::Upperarm_r" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
		nullptr,
		"EHandEngineMapping",
		"EHandEngineMapping",
		Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping()
	{
		if (!Z_Registration_Info_UEnum_EHandEngineMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandEngineMapping.InnerSingleton, Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandEngineMapping.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandEngineRetargetNamingConvention;
	static UEnum* EHandEngineRetargetNamingConvention_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandEngineRetargetNamingConvention.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandEngineRetargetNamingConvention.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention, (UObject*)Z_Construct_UPackage__Script_HandEngineLiveLink(), TEXT("EHandEngineRetargetNamingConvention"));
		}
		return Z_Registration_Info_UEnum_EHandEngineRetargetNamingConvention.OuterSingleton;
	}
	template<> HANDENGINELIVELINK_API UEnum* StaticEnum<EHandEngineRetargetNamingConvention>()
	{
		return EHandEngineRetargetNamingConvention_StaticEnum();
	}
	struct Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention_Statics::Enumerators[] = {
		{ "EHandEngineRetargetNamingConvention::Default", (int64)EHandEngineRetargetNamingConvention::Default },
		{ "EHandEngineRetargetNamingConvention::Custom", (int64)EHandEngineRetargetNamingConvention::Custom },
		{ "EHandEngineRetargetNamingConvention::Maya", (int64)EHandEngineRetargetNamingConvention::Maya },
		{ "EHandEngineRetargetNamingConvention::XSens", (int64)EHandEngineRetargetNamingConvention::XSens },
		{ "EHandEngineRetargetNamingConvention::Manual", (int64)EHandEngineRetargetNamingConvention::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention_Statics::Enum_MetaDataParams[] = {
		{ "Custom.Comment", "// Use custom Blueprint callback to compute bone names\n" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EHandEngineRetargetNamingConvention::Custom" },
		{ "Custom.ToolTip", "Use custom Blueprint callback to compute bone names" },
		{ "Default.Comment", "// Default bone map used in Unreal engine and Metahuman\n" },
		{ "Default.DisplayName", "Unreal/Metahuman" },
		{ "Default.Name", "EHandEngineRetargetNamingConvention::Default" },
		{ "Default.ToolTip", "Default bone map used in Unreal engine and Metahuman" },
		{ "Manual.Comment", "// Manually set bone naming map in \"Remapping Assets: table\n" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "EHandEngineRetargetNamingConvention::Manual" },
		{ "Manual.ToolTip", "Manually set bone naming map in \"Remapping Assets: table" },
		{ "Maya.Comment", "// Use Maya bone name convention\n" },
		{ "Maya.DisplayName", "Maya" },
		{ "Maya.Name", "EHandEngineRetargetNamingConvention::Maya" },
		{ "Maya.ToolTip", "Use Maya bone name convention" },
		{ "ModuleRelativePath", "Public/HandEngineMappingEnum.h" },
		{ "XSens.Comment", "// Use HandEngine bone name convention\n" },
		{ "XSens.DisplayName", "Xsens" },
		{ "XSens.Name", "EHandEngineRetargetNamingConvention::XSens" },
		{ "XSens.ToolTip", "Use HandEngine bone name convention" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
		nullptr,
		"EHandEngineRetargetNamingConvention",
		"EHandEngineRetargetNamingConvention",
		Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention()
	{
		if (!Z_Registration_Info_UEnum_EHandEngineRetargetNamingConvention.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandEngineRetargetNamingConvention.InnerSingleton, Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandEngineRetargetNamingConvention.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineMappingEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineMappingEnum_h_Statics::EnumInfo[] = {
		{ EHandEngineMapping_StaticEnum, TEXT("EHandEngineMapping"), &Z_Registration_Info_UEnum_EHandEngineMapping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2063512074U) },
		{ EHandEngineRetargetNamingConvention_StaticEnum, TEXT("EHandEngineRetargetNamingConvention"), &Z_Registration_Info_UEnum_EHandEngineRetargetNamingConvention, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4083576701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineMappingEnum_h_3885682349(TEXT("/Script/HandEngineLiveLink"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineMappingEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineMappingEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
