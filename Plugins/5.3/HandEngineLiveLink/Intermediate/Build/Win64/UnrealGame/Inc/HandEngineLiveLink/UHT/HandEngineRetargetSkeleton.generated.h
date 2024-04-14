// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandEngineRetargetSkeleton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HANDENGINELIVELINK_HandEngineRetargetSkeleton_generated_h
#error "HandEngineRetargetSkeleton.generated.h already included, missing '#pragma once' in HandEngineRetargetSkeleton.h"
#endif
#define HANDENGINELIVELINK_HandEngineRetargetSkeleton_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_JorenThiessen_Documents_GitHub_stretchsense_studio_plugin_unreal_Plugins_HandEngineLiveLink_Source_HandEngineLiveLink_Public_HandEngineRetargetSkeleton_h


#define FOREACH_ENUM_HANDENGINEBONEID(op) \
	op(HandEngineBoneID::Root) \
	op(HandEngineBoneID::Hips) \
	op(HandEngineBoneID::Spine) \
	op(HandEngineBoneID::Spine1) \
	op(HandEngineBoneID::Neck) \
	op(HandEngineBoneID::Head) \
	op(HandEngineBoneID::LeftShoulder) \
	op(HandEngineBoneID::LeftArm) \
	op(HandEngineBoneID::LeftForeArm) \
	op(HandEngineBoneID::LeftHand) \
	op(HandEngineBoneID::RightShoulder) \
	op(HandEngineBoneID::RightArm) \
	op(HandEngineBoneID::RightForeArm) \
	op(HandEngineBoneID::RightHand) \
	op(HandEngineBoneID::LeftUpLeg) \
	op(HandEngineBoneID::LeftLeg) \
	op(HandEngineBoneID::LeftFoot) \
	op(HandEngineBoneID::LeftToeBase) \
	op(HandEngineBoneID::RightUpLeg) \
	op(HandEngineBoneID::RightLeg) \
	op(HandEngineBoneID::RightFoot) \
	op(HandEngineBoneID::RightToeBase) \
	op(HandEngineBoneID::LeftHandThumb1) \
	op(HandEngineBoneID::LeftHandThumb2) \
	op(HandEngineBoneID::LeftHandThumb3) \
	op(HandEngineBoneID::LeftHandIndex1) \
	op(HandEngineBoneID::LeftHandIndex2) \
	op(HandEngineBoneID::LeftHandIndex3) \
	op(HandEngineBoneID::LeftHandMiddle1) \
	op(HandEngineBoneID::LeftHandMiddle2) \
	op(HandEngineBoneID::LeftHandMiddle3) \
	op(HandEngineBoneID::LeftHandRing1) \
	op(HandEngineBoneID::LeftHandRing2) \
	op(HandEngineBoneID::LeftHandRing3) \
	op(HandEngineBoneID::LeftHandPinky1) \
	op(HandEngineBoneID::LeftHandPinky2) \
	op(HandEngineBoneID::LeftHandPinky3) \
	op(HandEngineBoneID::RightHandThumb1) \
	op(HandEngineBoneID::RightHandThumb2) \
	op(HandEngineBoneID::RightHandThumb3) \
	op(HandEngineBoneID::RightHandIndex1) \
	op(HandEngineBoneID::RightHandIndex2) \
	op(HandEngineBoneID::RightHandIndex3) \
	op(HandEngineBoneID::RightHandMiddle1) \
	op(HandEngineBoneID::RightHandMiddle2) \
	op(HandEngineBoneID::RightHandMiddle3) \
	op(HandEngineBoneID::RightHandRing1) \
	op(HandEngineBoneID::RightHandRing2) \
	op(HandEngineBoneID::RightHandRing3) \
	op(HandEngineBoneID::RightHandPinky1) \
	op(HandEngineBoneID::RightHandPinky2) \
	op(HandEngineBoneID::RightHandPinky3) \
	op(HandEngineBoneID::NumBones) \
	op(HandEngineBoneID::UndefinedBone) 

enum class HandEngineBoneID : uint8;
template<> struct TIsUEnumClass<HandEngineBoneID> { enum { Value = true }; };
template<> HANDENGINELIVELINK_API UEnum* StaticEnum<HandEngineBoneID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
