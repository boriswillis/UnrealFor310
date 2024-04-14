// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/HandEngineLiveLink/Private/HandEngineLiveLink_LLSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandEngineLiveLink_LLSourceFactory() {}
// Cross Module References
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_HandEngineLiveLink();
// End Cross Module References
	void UHandEngineLiveLink_LLSourceFactory::StaticRegisterNativesUHandEngineLiveLink_LLSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandEngineLiveLink_LLSourceFactory);
	UClass* Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_NoRegister()
	{
		return UHandEngineLiveLink_LLSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HandEngineLiveLink_LLSourceFactory.h" },
		{ "ModuleRelativePath", "Private/HandEngineLiveLink_LLSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandEngineLiveLink_LLSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_Statics::ClassParams = {
		&UHandEngineLiveLink_LLSourceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UHandEngineLiveLink_LLSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandEngineLiveLink_LLSourceFactory.OuterSingleton, Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHandEngineLiveLink_LLSourceFactory.OuterSingleton;
	}
	template<> HANDENGINELIVELINK_API UClass* StaticClass<UHandEngineLiveLink_LLSourceFactory>()
	{
		return UHandEngineLiveLink_LLSourceFactory::StaticClass();
	}
	UHandEngineLiveLink_LLSourceFactory::UHandEngineLiveLink_LLSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHandEngineLiveLink_LLSourceFactory);
	UHandEngineLiveLink_LLSourceFactory::~UHandEngineLiveLink_LLSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Private_HandEngineLiveLink_LLSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Private_HandEngineLiveLink_LLSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHandEngineLiveLink_LLSourceFactory, UHandEngineLiveLink_LLSourceFactory::StaticClass, TEXT("UHandEngineLiveLink_LLSourceFactory"), &Z_Registration_Info_UClass_UHandEngineLiveLink_LLSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandEngineLiveLink_LLSourceFactory), 2080280376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Private_HandEngineLiveLink_LLSourceFactory_h_148100021(TEXT("/Script/HandEngineLiveLink"),
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Private_HandEngineLiveLink_LLSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_Unreal_Projects_PluginUpgrade5_3_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Private_HandEngineLiveLink_LLSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
