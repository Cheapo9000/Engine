// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Roles/LiveLinkCameraTypes.h"

#ifdef LIVELINKINTERFACE_LiveLinkCameraTypes_generated_h
#error "LiveLinkCameraTypes.generated.h already included, missing '#pragma once' in LiveLinkCameraTypes.h"
#endif
#define LIVELINKINTERFACE_LiveLinkCameraTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkCameraStaticData *****************************************
struct Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics;
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkTransformStaticData Super;


struct FLiveLinkCameraStaticData;
// ********** End ScriptStruct FLiveLinkCameraStaticData *******************************************

// ********** Begin ScriptStruct FLiveLinkCameraFrameData ******************************************
struct Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics;
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkTransformFrameData Super;


struct FLiveLinkCameraFrameData;
// ********** End ScriptStruct FLiveLinkCameraFrameData ********************************************

// ********** Begin ScriptStruct FLiveLinkCameraBlueprintData **************************************
struct Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics;
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics; \
	LIVELINKINTERFACE_API static class UScriptStruct* StaticStruct(); \
	typedef FLiveLinkBaseBlueprintData Super;


struct FLiveLinkCameraBlueprintData;
// ********** End ScriptStruct FLiveLinkCameraBlueprintData ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h

// ********** Begin Enum ELiveLinkCameraProjectionMode *********************************************
#define FOREACH_ENUM_ELIVELINKCAMERAPROJECTIONMODE(op) \
	op(ELiveLinkCameraProjectionMode::Perspective) \
	op(ELiveLinkCameraProjectionMode::Orthographic) 

enum class ELiveLinkCameraProjectionMode : uint8;
template<> struct TIsUEnumClass<ELiveLinkCameraProjectionMode> { enum { Value = true }; };
template<> LIVELINKINTERFACE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkCameraProjectionMode>();
// ********** End Enum ELiveLinkCameraProjectionMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
