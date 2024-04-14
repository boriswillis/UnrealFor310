// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/HandEngineLiveLink/Public/LiveLinkHandEngineRetargetAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkHandEngineRetargetAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_NoRegister();
	HANDENGINELIVELINK_API UEnum* Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping();
	HANDENGINELIVELINK_API UEnum* Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention();
	HANDENGINELIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FRemapRowHandle();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	UPackage* Z_Construct_UPackage__Script_HandEngineLiveLink();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemapRowHandle;
class UScriptStruct* FRemapRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemapRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemapRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemapRowHandle, (UObject*)Z_Construct_UPackage__Script_HandEngineLiveLink(), TEXT("RemapRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_RemapRowHandle.OuterSingleton;
}
template<> HANDENGINELIVELINK_API UScriptStruct* StaticStruct<FRemapRowHandle>()
{
	return FRemapRowHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemapRowHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandEngineRemapId_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandEngineRemapId_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandEngineRemapId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemapId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RemapId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemapRowHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemapRowHandle>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_HandEngineRemapId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_HandEngineRemapId_MetaData[] = {
		{ "Category", "RemappingRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** HandEngine Id */" },
#endif
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HandEngine Id" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_HandEngineRemapId = { "HandEngineRemapId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemapRowHandle, HandEngineRemapId), Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_HandEngineRemapId_MetaData), Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_HandEngineRemapId_MetaData) }; // 2063512074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_RemapId_MetaData[] = {
		{ "Category", "RemappingRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bone name in Unreal mesh */" },
#endif
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone name in Unreal mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_RemapId = { "RemapId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemapRowHandle, RemapId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_RemapId_MetaData), Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_RemapId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemapRowHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_HandEngineRemapId_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_HandEngineRemapId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewProp_RemapId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemapRowHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
		nullptr,
		&NewStructOps,
		"RemapRowHandle",
		Z_Construct_UScriptStruct_FRemapRowHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemapRowHandle_Statics::PropPointers),
		sizeof(FRemapRowHandle),
		alignof(FRemapRowHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemapRowHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemapRowHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemapRowHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRemapRowHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_RemapRowHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemapRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FRemapRowHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemapRowHandle.InnerSingleton;
	}
	DEFINE_FUNCTION(ULiveLinkHandEngineRetargetAsset::execGetCustomRemappedBoneName)
	{
		P_GET_ENUM(EHandEngineMapping,Z_Param_Bone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCustomRemappedBoneName_Implementation(EHandEngineMapping(Z_Param_Bone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkHandEngineRetargetAsset::execGetRemappedBoneNameByConvention)
	{
		P_GET_ENUM(EHandEngineMapping,Z_Param_Bone);
		P_GET_ENUM(EHandEngineRetargetNamingConvention,Z_Param_Convention);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRemappedBoneNameByConvention(EHandEngineMapping(Z_Param_Bone),EHandEngineRetargetNamingConvention(Z_Param_Convention));
		P_NATIVE_END;
	}
	struct LiveLinkHandEngineRetargetAsset_eventGetCustomRemappedBoneName_Parms
	{
		EHandEngineMapping Bone;
		FName ReturnValue;
	};
	static FName NAME_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName = FName(TEXT("GetCustomRemappedBoneName"));
	FName ULiveLinkHandEngineRetargetAsset::GetCustomRemappedBoneName(EHandEngineMapping Bone) const
	{
		LiveLinkHandEngineRetargetAsset_eventGetCustomRemappedBoneName_Parms Parms;
		Parms.Bone=Bone;
		const_cast<ULiveLinkHandEngineRetargetAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName),&Parms);
		return Parms.ReturnValue;
	}
	void ULiveLinkHandEngineRetargetAsset::StaticRegisterNativesULiveLinkHandEngineRetargetAsset()
	{
		UClass* Class = ULiveLinkHandEngineRetargetAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomRemappedBoneName", &ULiveLinkHandEngineRetargetAsset::execGetCustomRemappedBoneName },
			{ "GetRemappedBoneNameByConvention", &ULiveLinkHandEngineRetargetAsset::execGetRemappedBoneNameByConvention },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkHandEngineRetargetAsset_eventGetCustomRemappedBoneName_Parms, Bone), Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping, METADATA_PARAMS(0, nullptr) }; // 2063512074
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkHandEngineRetargetAsset_eventGetCustomRemappedBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint Implementable function for getting a custom remapped bone name from the original */" },
#endif
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Implementable function for getting a custom remapped bone name from the original" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset, nullptr, "GetCustomRemappedBoneName", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers), sizeof(LiveLinkHandEngineRetargetAsset_eventGetCustomRemappedBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers) < 2048);
	static_assert(sizeof(LiveLinkHandEngineRetargetAsset_eventGetCustomRemappedBoneName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics
	{
		struct LiveLinkHandEngineRetargetAsset_eventGetRemappedBoneNameByConvention_Parms
		{
			EHandEngineMapping Bone;
			EHandEngineRetargetNamingConvention Convention;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Convention_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Convention;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkHandEngineRetargetAsset_eventGetRemappedBoneNameByConvention_Parms, Bone), Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping, METADATA_PARAMS(0, nullptr) }; // 2063512074
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention = { "Convention", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkHandEngineRetargetAsset_eventGetRemappedBoneNameByConvention_Parms, Convention), Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention, METADATA_PARAMS(0, nullptr) }; // 4083576701
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkHandEngineRetargetAsset_eventGetRemappedBoneNameByConvention_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset, nullptr, "GetRemappedBoneNameByConvention", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::LiveLinkHandEngineRetargetAsset_eventGetRemappedBoneNameByConvention_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::LiveLinkHandEngineRetargetAsset_eventGetRemappedBoneNameByConvention_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkHandEngineRetargetAsset);
	UClass* Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_NoRegister()
	{
		return ULiveLinkHandEngineRetargetAsset::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_remapping_convention_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_remapping_convention_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_remapping_convention;
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_remapping_rows_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_remapping_rows_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_remapping_rows_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_remapping_rows_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_m_remapping_rows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_skeletal_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_skeletal_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TPoseAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TPoseAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_invertX_MetaData[];
#endif
		static void NewProp_invertX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_invertX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_invertY_MetaData[];
#endif
		static void NewProp_invertY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_invertY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_invertZ_MetaData[];
#endif
		static void NewProp_invertZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_invertZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsForwardY_MetaData[];
#endif
		static void NewProp_IsForwardY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsForwardY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetCustomRemappedBoneName, "GetCustomRemappedBoneName" }, // 2650589152
		{ &Z_Construct_UFunction_ULiveLinkHandEngineRetargetAsset_GetRemappedBoneNameByConvention, "GetRemappedBoneNameByConvention" }, // 3008611289
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiveLinkHandEngineRetargetAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_convention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_convention_MetaData[] = {
		{ "Category", "Bones Names" },
		{ "DisplayName", "Naming Convention" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_convention = { "m_remapping_convention", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkHandEngineRetargetAsset, m_remapping_convention), Z_Construct_UEnum_HandEngineLiveLink_EHandEngineRetargetNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_convention_MetaData), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_convention_MetaData) }; // 4083576701
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows_ValueProp = { "m_remapping_rows", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRemapRowHandle, METADATA_PARAMS(0, nullptr) }; // 3280185395
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp = { "m_remapping_rows_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_HandEngineLiveLink_EHandEngineMapping, METADATA_PARAMS(0, nullptr) }; // 2063512074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows_MetaData[] = {
		{ "Category", "Live Link HandEngine Remap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map that stores all the information about bone remapping. This will be populated dynamically from the skeletal mesh. */" },
#endif
		{ "DisplayName", "Remapping Assets" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map that stores all the information about bone remapping. This will be populated dynamically from the skeletal mesh." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows = { "m_remapping_rows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkHandEngineRetargetAsset, m_remapping_rows), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows_MetaData), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows_MetaData) }; // 2063512074 3280185395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeletal_mesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeletal_mesh = { "m_skeletal_mesh", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkHandEngineRetargetAsset, m_skeletal_mesh_DEPRECATED), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeletal_mesh_MetaData), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeletal_mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeleton_MetaData[] = {
		{ "Category", "Live Link HandEngine Remap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The skeleton object which we're animating\n" },
#endif
		{ "DisplayName", "Skeleton" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The skeleton object which we're animating" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeleton = { "m_skeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkHandEngineRetargetAsset, m_skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeleton_MetaData), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_TPoseAnimation_MetaData[] = {
		{ "Category", "Reference Pose" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_TPoseAnimation = { "TPoseAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkHandEngineRetargetAsset, TPoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_TPoseAnimation_MetaData), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_TPoseAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertX_MetaData[] = {
		{ "Category", "Reference Pose" },
		{ "DisplayName", "Invert X" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertX_SetBit(void* Obj)
	{
		((ULiveLinkHandEngineRetargetAsset*)Obj)->invertX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertX = { "invertX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkHandEngineRetargetAsset), &Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertX_MetaData), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertY_MetaData[] = {
		{ "Category", "Reference Pose" },
		{ "DisplayName", "Invert Y" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertY_SetBit(void* Obj)
	{
		((ULiveLinkHandEngineRetargetAsset*)Obj)->invertY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertY = { "invertY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkHandEngineRetargetAsset), &Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertY_MetaData), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertZ_MetaData[] = {
		{ "Category", "Reference Pose" },
		{ "DisplayName", "Invert Z" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertZ_SetBit(void* Obj)
	{
		((ULiveLinkHandEngineRetargetAsset*)Obj)->invertZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertZ = { "invertZ", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkHandEngineRetargetAsset), &Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertZ_MetaData), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_IsForwardY_MetaData[] = {
		{ "Category", "Reference Pose" },
		{ "DisplayName", "Is Forward Y" },
		{ "ModuleRelativePath", "Public/LiveLinkHandEngineRetargetAsset.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_IsForwardY_SetBit(void* Obj)
	{
		((ULiveLinkHandEngineRetargetAsset*)Obj)->IsForwardY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_IsForwardY = { "IsForwardY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkHandEngineRetargetAsset), &Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_IsForwardY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_IsForwardY_MetaData), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_IsForwardY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_convention_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_convention,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_remapping_rows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeletal_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_m_skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_TPoseAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_invertZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::NewProp_IsForwardY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkHandEngineRetargetAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::ClassParams = {
		&ULiveLinkHandEngineRetargetAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkHandEngineRetargetAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkHandEngineRetargetAsset.OuterSingleton, Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkHandEngineRetargetAsset.OuterSingleton;
	}
	template<> HANDENGINELIVELINK_API UClass* StaticClass<ULiveLinkHandEngineRetargetAsset>()
	{
		return ULiveLinkHandEngineRetargetAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkHandEngineRetargetAsset);
	ULiveLinkHandEngineRetargetAsset::~ULiveLinkHandEngineRetargetAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_LiveLinkHandEngineRetargetAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_LiveLinkHandEngineRetargetAsset_h_Statics::ScriptStructInfo[] = {
		{ FRemapRowHandle::StaticStruct, Z_Construct_UScriptStruct_FRemapRowHandle_Statics::NewStructOps, TEXT("RemapRowHandle"), &Z_Registration_Info_UScriptStruct_RemapRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemapRowHandle), 3280185395U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_LiveLinkHandEngineRetargetAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkHandEngineRetargetAsset, ULiveLinkHandEngineRetargetAsset::StaticClass, TEXT("ULiveLinkHandEngineRetargetAsset"), &Z_Registration_Info_UClass_ULiveLinkHandEngineRetargetAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkHandEngineRetargetAsset), 343278976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_LiveLinkHandEngineRetargetAsset_h_953666477(TEXT("/Script/HandEngineLiveLink"),
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_LiveLinkHandEngineRetargetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_LiveLinkHandEngineRetargetAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_LiveLinkHandEngineRetargetAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_LiveLinkHandEngineRetargetAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
