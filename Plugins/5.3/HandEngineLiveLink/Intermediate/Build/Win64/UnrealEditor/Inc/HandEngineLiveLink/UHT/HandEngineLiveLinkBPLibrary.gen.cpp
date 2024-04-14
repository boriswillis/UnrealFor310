// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/HandEngineLiveLink/Public/HandEngineLiveLinkBPLibrary.h"
#include "ILiveLinkSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandEngineLiveLinkBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UHandEngineLiveLinkBPLibrary();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
	UPackage* Z_Construct_UPackage__Script_HandEngineLiveLink();
// End Cross Module References
	DEFINE_FUNCTION(UHandEngineLiveLinkBPLibrary::execCreateHandEngineLiveLinkSource)
	{
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHandEngineLiveLinkBPLibrary::CreateHandEngineLiveLinkSource(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	void UHandEngineLiveLinkBPLibrary::StaticRegisterNativesUHandEngineLiveLinkBPLibrary()
	{
		UClass* Class = UHandEngineLiveLinkBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateHandEngineLiveLinkSource", &UHandEngineLiveLinkBPLibrary::execCreateHandEngineLiveLinkSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics
	{
		struct HandEngineLiveLinkBPLibrary_eventCreateHandEngineLiveLinkSource_Parms
		{
			FLiveLinkSourceHandle handle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandEngineLiveLinkBPLibrary_eventCreateHandEngineLiveLinkSource_Parms, handle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(0, nullptr) }; // 438791724
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandEngine LiveLink" },
		{ "ModuleRelativePath", "Public/HandEngineLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandEngineLiveLinkBPLibrary, nullptr, "CreateHandEngineLiveLinkSource", nullptr, nullptr, Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::HandEngineLiveLinkBPLibrary_eventCreateHandEngineLiveLinkSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::HandEngineLiveLinkBPLibrary_eventCreateHandEngineLiveLinkSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandEngineLiveLinkBPLibrary);
	UClass* Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_NoRegister()
	{
		return UHandEngineLiveLinkBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_CreateHandEngineLiveLinkSource, "CreateHandEngineLiveLinkSource" }, // 3192305810
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HandEngineLiveLinkBPLibrary.h" },
		{ "ModuleRelativePath", "Public/HandEngineLiveLinkBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandEngineLiveLinkBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::ClassParams = {
		&UHandEngineLiveLinkBPLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHandEngineLiveLinkBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UHandEngineLiveLinkBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandEngineLiveLinkBPLibrary.OuterSingleton, Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHandEngineLiveLinkBPLibrary.OuterSingleton;
	}
	template<> HANDENGINELIVELINK_API UClass* StaticClass<UHandEngineLiveLinkBPLibrary>()
	{
		return UHandEngineLiveLinkBPLibrary::StaticClass();
	}
	UHandEngineLiveLinkBPLibrary::UHandEngineLiveLinkBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandEngineLiveLinkBPLibrary);
	UHandEngineLiveLinkBPLibrary::~UHandEngineLiveLinkBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHandEngineLiveLinkBPLibrary, UHandEngineLiveLinkBPLibrary::StaticClass, TEXT("UHandEngineLiveLinkBPLibrary"), &Z_Registration_Info_UClass_UHandEngineLiveLinkBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandEngineLiveLinkBPLibrary), 335958605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_3061652570(TEXT("/Script/HandEngineLiveLink"),
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
