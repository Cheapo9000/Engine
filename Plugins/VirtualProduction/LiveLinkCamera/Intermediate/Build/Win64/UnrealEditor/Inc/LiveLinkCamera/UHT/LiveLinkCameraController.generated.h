// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkCameraController.h"

#ifdef LIVELINKCAMERA_LiveLinkCameraController_generated_h
#error "LiveLinkCameraController.generated.h already included, missing '#pragma once' in LiveLinkCameraController.h"
#endif
#define LIVELINKCAMERA_LiveLinkCameraController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkCameraControllerUpdateFlags ******************************
struct Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics;
#define FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics; \
	LIVELINKCAMERA_API static class UScriptStruct* StaticStruct();


struct FLiveLinkCameraControllerUpdateFlags;
// ********** End ScriptStruct FLiveLinkCameraControllerUpdateFlags ********************************

// ********** Begin Class ULiveLinkCameraController ************************************************
struct Z_Construct_UClass_ULiveLinkCameraController_Statics;
LIVELINKCAMERA_API UClass* Z_Construct_UClass_ULiveLinkCameraController_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkCameraController(); \
	friend struct ::Z_Construct_UClass_ULiveLinkCameraController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKCAMERA_API UClass* ::Z_Construct_UClass_ULiveLinkCameraController_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkCameraController, ULiveLinkControllerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkCamera"), Z_Construct_UClass_ULiveLinkCameraController_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkCameraController)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkCameraController(ULiveLinkCameraController&&) = delete; \
	ULiveLinkCameraController(const ULiveLinkCameraController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkCameraController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkCameraController) \
	NO_API virtual ~ULiveLinkCameraController();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_56_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkCameraController;

// ********** End Class ULiveLinkCameraController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
