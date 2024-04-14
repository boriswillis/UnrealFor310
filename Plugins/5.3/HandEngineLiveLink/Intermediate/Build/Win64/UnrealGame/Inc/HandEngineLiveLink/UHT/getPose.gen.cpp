// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandEngineLiveLink/Public/getPose.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkAnimationBlueprintStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegetPose() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UgetPose();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UgetPose_NoRegister();
	HANDENGINELIVELINK_API UEnum* Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
	UPackage* Z_Construct_UPackage__Script_HandEngineLiveLink();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ExecOutputs;
	static UEnum* ExecOutputs_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ExecOutputs.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ExecOutputs.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs, Z_Construct_UPackage__Script_HandEngineLiveLink(), TEXT("ExecOutputs"));
		}
		return Z_Registration_Info_UEnum_ExecOutputs.OuterSingleton;
	}
	template<> HANDENGINELIVELINK_API UEnum* StaticEnum<ExecOutputs>()
	{
		return ExecOutputs_StaticEnum();
	}
	struct Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs_Statics::Enumerators[] = {
		{ "ExecOutputs::PoseActive", (int64)ExecOutputs::PoseActive },
		{ "ExecOutputs::PoseInactive", (int64)ExecOutputs::PoseInactive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/getPose.h" },
		{ "PoseActive.Comment", "/**\n * \n */" },
		{ "PoseActive.Name", "ExecOutputs::PoseActive" },
		{ "PoseInactive.Comment", "/**\n * \n */" },
		{ "PoseInactive.Name", "ExecOutputs::PoseInactive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
		nullptr,
		"ExecOutputs",
		"ExecOutputs",
		Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs()
	{
		if (!Z_Registration_Info_UEnum_ExecOutputs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ExecOutputs.InnerSingleton, Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ExecOutputs.InnerSingleton;
	}
	DEFINE_FUNCTION(UgetPose::execgetPose)
	{
		P_GET_STRUCT(FSubjectFrameHandle,Z_Param_DataResult);
		P_GET_PROPERTY(FStrProperty,Z_Param_PoseName);
		P_GET_ENUM_REF(ExecOutputs,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UgetPose::getPose(Z_Param_DataResult,Z_Param_PoseName,(ExecOutputs&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	void UgetPose::StaticRegisterNativesUgetPose()
	{
		UClass* Class = UgetPose::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getPose", &UgetPose::execgetPose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UgetPose_getPose_Statics
	{
		struct getPose_eventgetPose_Parms
		{
			FSubjectFrameHandle DataResult;
			FString PoseName;
			ExecOutputs Branches;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PoseName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_DataResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_DataResult = { "DataResult", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(getPose_eventgetPose_Parms, DataResult), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_DataResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_DataResult_MetaData)) }; // 872459058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_PoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(getPose_eventgetPose_Parms, PoseName), METADATA_PARAMS(Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_PoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_PoseName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(getPose_eventgetPose_Parms, Branches), Z_Construct_UEnum_HandEngineLiveLink_ExecOutputs, METADATA_PARAMS(nullptr, 0) }; // 1595079124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UgetPose_getPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_DataResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_PoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_Branches_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetPose_getPose_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UgetPose_getPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandEngine" },
		{ "DisplayName", "getPose" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "getPose get Pose HandEngine Hand Engine" },
		{ "ModuleRelativePath", "Public/getPose.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UgetPose_getPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UgetPose, nullptr, "getPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UgetPose_getPose_Statics::getPose_eventgetPose_Parms), Z_Construct_UFunction_UgetPose_getPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UgetPose_getPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UgetPose_getPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UgetPose_getPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UgetPose_getPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UgetPose_getPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UgetPose);
	UClass* Z_Construct_UClass_UgetPose_NoRegister()
	{
		return UgetPose::StaticClass();
	}
	struct Z_Construct_UClass_UgetPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UgetPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UgetPose_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UgetPose_getPose, "getPose" }, // 689859717
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UgetPose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "getPose.h" },
		{ "ModuleRelativePath", "Public/getPose.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UgetPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UgetPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UgetPose_Statics::ClassParams = {
		&UgetPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UgetPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UgetPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UgetPose()
	{
		if (!Z_Registration_Info_UClass_UgetPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UgetPose.OuterSingleton, Z_Construct_UClass_UgetPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UgetPose.OuterSingleton;
	}
	template<> HANDENGINELIVELINK_API UClass* StaticClass<UgetPose>()
	{
		return UgetPose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UgetPose);
	UgetPose::~UgetPose() {}
	struct Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getPose_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getPose_h_Statics::EnumInfo[] = {
		{ ExecOutputs_StaticEnum, TEXT("ExecOutputs"), &Z_Registration_Info_UEnum_ExecOutputs, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1595079124U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UgetPose, UgetPose::StaticClass, TEXT("UgetPose"), &Z_Registration_Info_UClass_UgetPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UgetPose), 3992887295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getPose_h_1656406599(TEXT("/Script/HandEngineLiveLink"),
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getPose_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getPose_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getPose_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
