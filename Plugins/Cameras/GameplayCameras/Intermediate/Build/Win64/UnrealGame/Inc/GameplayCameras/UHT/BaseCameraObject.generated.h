// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/BaseCameraObject.h"

#ifdef GAMEPLAYCAMERAS_BaseCameraObject_generated_h
#error "BaseCameraObject.generated.h already included, missing '#pragma once' in BaseCameraObject.h"
#endif
#define GAMEPLAYCAMERAS_BaseCameraObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCameraObjectAllocationInfo ***************************************
struct Z_Construct_UScriptStruct_FCameraObjectAllocationInfo_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraObjectAllocationInfo_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraObjectAllocationInfo;
// ********** End ScriptStruct FCameraObjectAllocationInfo *****************************************

// ********** Begin Class UBaseCameraObject ********************************************************
struct Z_Construct_UClass_UBaseCameraObject_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBaseCameraObject_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCameraObject(); \
	friend struct ::Z_Construct_UClass_UBaseCameraObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBaseCameraObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseCameraObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBaseCameraObject_NoRegister) \
	DECLARE_SERIALIZER(UBaseCameraObject)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBaseCameraObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseCameraObject(UBaseCameraObject&&) = delete; \
	UBaseCameraObject(const UBaseCameraObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBaseCameraObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCameraObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseCameraObject) \
	GAMEPLAYCAMERAS_API virtual ~UBaseCameraObject();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h_75_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseCameraObject;

// ********** End Class UBaseCameraObject **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
