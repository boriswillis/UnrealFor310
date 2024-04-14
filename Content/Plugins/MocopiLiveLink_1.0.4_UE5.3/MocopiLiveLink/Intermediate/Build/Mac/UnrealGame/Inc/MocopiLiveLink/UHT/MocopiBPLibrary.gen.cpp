// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MocopiLiveLink/Public/MocopiBPLibrary.h"
#include "ILiveLinkSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMocopiBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
	MOCOPILIVELINK_API UClass* Z_Construct_UClass_UMocopiBPLibrary();
	MOCOPILIVELINK_API UClass* Z_Construct_UClass_UMocopiBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MocopiLiveLink();
// End Cross Module References
	DEFINE_FUNCTION(UMocopiBPLibrary::execCreateMocopiSource)
	{
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_inputPort);
		P_GET_PROPERTY(FStrProperty,Z_Param_subjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMocopiBPLibrary::CreateMocopiSource(Z_Param_Out_handle,Z_Param_inputPort,Z_Param_subjectName);
		P_NATIVE_END;
	}
	void UMocopiBPLibrary::StaticRegisterNativesUMocopiBPLibrary()
	{
		UClass* Class = UMocopiBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMocopiSource", &UMocopiBPLibrary::execCreateMocopiSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics
	{
		struct MocopiBPLibrary_eventCreateMocopiSource_Parms
		{
			FLiveLinkSourceHandle handle;
			int32 inputPort;
			FString subjectName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_inputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_subjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocopiBPLibrary_eventCreateMocopiSource_Parms, handle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(0, nullptr) }; // 438791724
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_inputPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_inputPort = { "inputPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocopiBPLibrary_eventCreateMocopiSource_Parms, inputPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_inputPort_MetaData), Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_inputPort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_subjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_subjectName = { "subjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocopiBPLibrary_eventCreateMocopiSource_Parms, subjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_subjectName_MetaData), Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_subjectName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_inputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::NewProp_subjectName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocopiLiveLink" },
		{ "CPP_Default_inputPort", "12351" },
		{ "CPP_Default_subjectName", "MocopiSkeleton" },
		{ "Keywords", "livelink" },
		{ "ModuleRelativePath", "Public/MocopiBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocopiBPLibrary, nullptr, "CreateMocopiSource", nullptr, nullptr, Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::MocopiBPLibrary_eventCreateMocopiSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::MocopiBPLibrary_eventCreateMocopiSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMocopiBPLibrary);
	UClass* Z_Construct_UClass_UMocopiBPLibrary_NoRegister()
	{
		return UMocopiBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMocopiBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMocopiBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MocopiLiveLink,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMocopiBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMocopiBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMocopiBPLibrary_CreateMocopiSource, "CreateMocopiSource" }, // 3915557275
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMocopiBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMocopiBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MocopiBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MocopiBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMocopiBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMocopiBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMocopiBPLibrary_Statics::ClassParams = {
		&UMocopiBPLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMocopiBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMocopiBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMocopiBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UMocopiBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMocopiBPLibrary.OuterSingleton, Z_Construct_UClass_UMocopiBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMocopiBPLibrary.OuterSingleton;
	}
	template<> MOCOPILIVELINK_API UClass* StaticClass<UMocopiBPLibrary>()
	{
		return UMocopiBPLibrary::StaticClass();
	}
	UMocopiBPLibrary::UMocopiBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMocopiBPLibrary);
	UMocopiBPLibrary::~UMocopiBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMocopiBPLibrary, UMocopiBPLibrary::StaticClass, TEXT("UMocopiBPLibrary"), &Z_Registration_Info_UClass_UMocopiBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMocopiBPLibrary), 1106318146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiBPLibrary_h_2885053194(TEXT("/Script/MocopiLiveLink"),
		Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
