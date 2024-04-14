// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MocopiLiveLink/Public/MocopiRemapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMocopiRemapAsset() {}
// Cross Module References
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
	MOCOPILIVELINK_API UClass* Z_Construct_UClass_UMocopiRemapAsset();
	MOCOPILIVELINK_API UClass* Z_Construct_UClass_UMocopiRemapAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MocopiLiveLink();
// End Cross Module References
	void UMocopiRemapAsset::StaticRegisterNativesUMocopiRemapAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMocopiRemapAsset);
	UClass* Z_Construct_UClass_UMocopiRemapAsset_NoRegister()
	{
		return UMocopiRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMocopiRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletonHipBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetSkeletonHipBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMocopiRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MocopiLiveLink,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMocopiRemapAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMocopiRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Retarget class for Mocopi Skeleton.\n */" },
		{ "IncludePath", "MocopiRemapAsset.h" },
		{ "ModuleRelativePath", "Public/MocopiRemapAsset.h" },
		{ "ToolTip", "Retarget class for Mocopi Skeleton." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMocopiRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/MocopiRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMocopiRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName = { "TargetSkeletonHipBoneName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMocopiRemapAsset, TargetSkeletonHipBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMocopiRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName_MetaData), Z_Construct_UClass_UMocopiRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMocopiRemapAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMocopiRemapAsset_Statics::NewProp_TargetSkeletonHipBoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMocopiRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMocopiRemapAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMocopiRemapAsset_Statics::ClassParams = {
		&UMocopiRemapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMocopiRemapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMocopiRemapAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMocopiRemapAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMocopiRemapAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMocopiRemapAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMocopiRemapAsset()
	{
		if (!Z_Registration_Info_UClass_UMocopiRemapAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMocopiRemapAsset.OuterSingleton, Z_Construct_UClass_UMocopiRemapAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMocopiRemapAsset.OuterSingleton;
	}
	template<> MOCOPILIVELINK_API UClass* StaticClass<UMocopiRemapAsset>()
	{
		return UMocopiRemapAsset::StaticClass();
	}
	UMocopiRemapAsset::UMocopiRemapAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMocopiRemapAsset);
	UMocopiRemapAsset::~UMocopiRemapAsset() {}
	struct Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiRemapAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiRemapAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMocopiRemapAsset, UMocopiRemapAsset::StaticClass, TEXT("UMocopiRemapAsset"), &Z_Registration_Info_UClass_UMocopiRemapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMocopiRemapAsset), 909099133U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiRemapAsset_h_2305291436(TEXT("/Script/MocopiLiveLink"),
		Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_oscaralvaradoinojosa_Documents_Development_MocopiLiveLink_Packaging_104_MocopiLiveLink_1_0_4_UE5_3_MocopiLiveLink_HostProject_Plugins_MocopiLiveLink_Source_MocopiLiveLink_Public_MocopiRemapAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
