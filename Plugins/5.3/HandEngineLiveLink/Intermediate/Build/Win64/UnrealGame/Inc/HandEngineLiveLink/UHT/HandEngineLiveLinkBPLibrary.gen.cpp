// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandEngineLiveLink/Public/HandEngineLiveLinkBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandEngineLiveLinkBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UHandEngineLiveLinkBPLibrary();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HandEngineLiveLink();
// End Cross Module References
	DEFINE_FUNCTION(UHandEngineLiveLinkBPLibrary::execAnimTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UHandEngineLiveLinkBPLibrary::AnimTest();
		P_NATIVE_END;
	}
	void UHandEngineLiveLinkBPLibrary::StaticRegisterNativesUHandEngineLiveLinkBPLibrary()
	{
		UClass* Class = UHandEngineLiveLinkBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimTest", &UHandEngineLiveLinkBPLibrary::execAnimTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_AnimTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_AnimTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "HeSDK" },
		{ "ModuleRelativePath", "Public/HandEngineLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_AnimTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandEngineLiveLinkBPLibrary, nullptr, "AnimTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_AnimTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_AnimTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_AnimTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_AnimTest_Statics::FuncParams);
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandEngineLiveLinkBPLibrary_AnimTest, "AnimTest" }, // 2568878277
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHandEngineLiveLinkBPLibrary_Statics::Class_MetaDataParams))
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandEngineLiveLinkBPLibrary);
	UHandEngineLiveLinkBPLibrary::~UHandEngineLiveLinkBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHandEngineLiveLinkBPLibrary, UHandEngineLiveLinkBPLibrary::StaticClass, TEXT("UHandEngineLiveLinkBPLibrary"), &Z_Registration_Info_UClass_UHandEngineLiveLinkBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandEngineLiveLinkBPLibrary), 3665613069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_2683204084(TEXT("/Script/HandEngineLiveLink"),
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineLiveLinkBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
