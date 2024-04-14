// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandEngineLiveLink/Public/getSliders.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkAnimationBlueprintStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegetSliders() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UgetSliders();
	HANDENGINELIVELINK_API UClass* Z_Construct_UClass_UgetSliders_NoRegister();
	HANDENGINELIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_Fsliders();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
	UPackage* Z_Construct_UPackage__Script_HandEngineLiveLink();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_sliders;
class UScriptStruct* Fsliders::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_sliders.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_sliders.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_Fsliders, Z_Construct_UPackage__Script_HandEngineLiveLink(), TEXT("sliders"));
	}
	return Z_Registration_Info_UScriptStruct_sliders.OuterSingleton;
}
template<> HANDENGINELIVELINK_API UScriptStruct* StaticStruct<Fsliders>()
{
	return Fsliders::StaticStruct();
}
	struct Z_Construct_UScriptStruct_Fsliders_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbBend1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbBend1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbBend2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbBend2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbSplay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbSplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexBend1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndexBend1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexBend2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndexBend2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleBend1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MiddleBend1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleBend2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MiddleBend2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RingBend1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RingBend1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RingBend2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RingBend2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinkyBend1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PinkyBend1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinkyBend2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PinkyBend2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSplay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalSplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_Fsliders_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<Fsliders>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend1_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend1 = { "ThumbBend1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, ThumbBend1), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend2_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend2 = { "ThumbBend2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, ThumbBend2), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbSplay_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbSplay = { "ThumbSplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, ThumbSplay), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbSplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbSplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend1_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend1 = { "IndexBend1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, IndexBend1), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend2_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend2 = { "IndexBend2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, IndexBend2), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend1_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend1 = { "MiddleBend1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, MiddleBend1), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend2_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend2 = { "MiddleBend2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, MiddleBend2), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend1_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend1 = { "RingBend1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, RingBend1), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend2_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend2 = { "RingBend2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, RingBend2), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend1_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend1 = { "PinkyBend1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, PinkyBend1), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend2_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend2 = { "PinkyBend2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, PinkyBend2), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_GlobalSplay_MetaData[] = {
		{ "Category", "Hand Sliders" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_GlobalSplay = { "GlobalSplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Fsliders, GlobalSplay), METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_GlobalSplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_GlobalSplay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_Fsliders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbBend2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_ThumbSplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_IndexBend2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_MiddleBend2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_RingBend2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_PinkyBend2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fsliders_Statics::NewProp_GlobalSplay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_Fsliders_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
		nullptr,
		&NewStructOps,
		"sliders",
		sizeof(Fsliders),
		alignof(Fsliders),
		Z_Construct_UScriptStruct_Fsliders_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_Fsliders_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fsliders_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_Fsliders()
	{
		if (!Z_Registration_Info_UScriptStruct_sliders.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_sliders.InnerSingleton, Z_Construct_UScriptStruct_Fsliders_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_sliders.InnerSingleton;
	}
	DEFINE_FUNCTION(UgetSliders::execgetSliders)
	{
		P_GET_STRUCT(FSubjectFrameHandle,Z_Param_DataResult);
		P_GET_STRUCT_REF(Fsliders,Z_Param_Out_sliders);
		P_FINISH;
		P_NATIVE_BEGIN;
		UgetSliders::getSliders(Z_Param_DataResult,Z_Param_Out_sliders);
		P_NATIVE_END;
	}
	void UgetSliders::StaticRegisterNativesUgetSliders()
	{
		UClass* Class = UgetSliders::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getSliders", &UgetSliders::execgetSliders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UgetSliders_getSliders_Statics
	{
		struct getSliders_eventgetSliders_Parms
		{
			FSubjectFrameHandle DataResult;
			Fsliders sliders;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_sliders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UgetSliders_getSliders_Statics::NewProp_DataResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UgetSliders_getSliders_Statics::NewProp_DataResult = { "DataResult", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(getSliders_eventgetSliders_Parms, DataResult), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(Z_Construct_UFunction_UgetSliders_getSliders_Statics::NewProp_DataResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UgetSliders_getSliders_Statics::NewProp_DataResult_MetaData)) }; // 872459058
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UgetSliders_getSliders_Statics::NewProp_sliders = { "sliders", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(getSliders_eventgetSliders_Parms, sliders), Z_Construct_UScriptStruct_Fsliders, METADATA_PARAMS(nullptr, 0) }; // 2117626545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UgetSliders_getSliders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetSliders_getSliders_Statics::NewProp_DataResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UgetSliders_getSliders_Statics::NewProp_sliders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UgetSliders_getSliders_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandEngine" },
		{ "DisplayName", "getSliders" },
		{ "Keywords", "getSliders get Sliders HandEngine Hand Engine" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UgetSliders_getSliders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UgetSliders, nullptr, "getSliders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UgetSliders_getSliders_Statics::getSliders_eventgetSliders_Parms), Z_Construct_UFunction_UgetSliders_getSliders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UgetSliders_getSliders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UgetSliders_getSliders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UgetSliders_getSliders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UgetSliders_getSliders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UgetSliders_getSliders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UgetSliders);
	UClass* Z_Construct_UClass_UgetSliders_NoRegister()
	{
		return UgetSliders::StaticClass();
	}
	struct Z_Construct_UClass_UgetSliders_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UgetSliders_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HandEngineLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UgetSliders_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UgetSliders_getSliders, "getSliders" }, // 4055428093
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UgetSliders_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "getSliders.h" },
		{ "ModuleRelativePath", "Public/getSliders.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UgetSliders_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UgetSliders>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UgetSliders_Statics::ClassParams = {
		&UgetSliders::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UgetSliders_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UgetSliders_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UgetSliders()
	{
		if (!Z_Registration_Info_UClass_UgetSliders.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UgetSliders.OuterSingleton, Z_Construct_UClass_UgetSliders_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UgetSliders.OuterSingleton;
	}
	template<> HANDENGINELIVELINK_API UClass* StaticClass<UgetSliders>()
	{
		return UgetSliders::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UgetSliders);
	UgetSliders::~UgetSliders() {}
	struct Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getSliders_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getSliders_h_Statics::ScriptStructInfo[] = {
		{ Fsliders::StaticStruct, Z_Construct_UScriptStruct_Fsliders_Statics::NewStructOps, TEXT("sliders"), &Z_Registration_Info_UScriptStruct_sliders, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(Fsliders), 2117626545U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getSliders_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UgetSliders, UgetSliders::StaticClass, TEXT("UgetSliders"), &Z_Registration_Info_UClass_UgetSliders, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UgetSliders), 3429994432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getSliders_h_2967567354(TEXT("/Script/HandEngineLiveLink"),
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getSliders_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getSliders_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getSliders_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_getSliders_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
