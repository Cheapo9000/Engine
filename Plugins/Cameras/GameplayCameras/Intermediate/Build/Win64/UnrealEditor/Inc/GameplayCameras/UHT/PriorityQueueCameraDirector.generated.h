// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Directors/PriorityQueueCameraDirector.h"

#ifdef GAMEPLAYCAMERAS_PriorityQueueCameraDirector_generated_h
#error "PriorityQueueCameraDirector.generated.h already included, missing '#pragma once' in PriorityQueueCameraDirector.h"
#endif
#define GAMEPLAYCAMERAS_PriorityQueueCameraDirector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPriorityQueueCameraDirector *********************************************
struct Z_Construct_UClass_UPriorityQueueCameraDirector_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPriorityQueueCameraDirector_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPriorityQueueCameraDirector(); \
	friend struct ::Z_Construct_UClass_UPriorityQueueCameraDirector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UPriorityQueueCameraDirector_NoRegister(); \
public: \
	DECLARE_CLASS2(UPriorityQueueCameraDirector, UCameraDirector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UPriorityQueueCameraDirector_NoRegister) \
	DECLARE_SERIALIZER(UPriorityQueueCameraDirector)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPriorityQueueCameraDirector(UPriorityQueueCameraDirector&&) = delete; \
	UPriorityQueueCameraDirector(const UPriorityQueueCameraDirector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UPriorityQueueCameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPriorityQueueCameraDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPriorityQueueCameraDirector) \
	GAMEPLAYCAMERAS_API virtual ~UPriorityQueueCameraDirector();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPriorityQueueCameraDirector;

// ********** End Class UPriorityQueueCameraDirector ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
