// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ValueInterpolators/IIRValueInterpolator.h"

#ifdef GAMEPLAYCAMERAS_IIRValueInterpolator_generated_h
#error "IIRValueInterpolator.generated.h already included, missing '#pragma once' in IIRValueInterpolator.h"
#endif
#define GAMEPLAYCAMERAS_IIRValueInterpolator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIIRValueInterpolator ****************************************************
struct Z_Construct_UClass_UIIRValueInterpolator_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UIIRValueInterpolator_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIIRValueInterpolator(); \
	friend struct ::Z_Construct_UClass_UIIRValueInterpolator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UIIRValueInterpolator_NoRegister(); \
public: \
	DECLARE_CLASS2(UIIRValueInterpolator, UCameraValueInterpolator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UIIRValueInterpolator_NoRegister) \
	DECLARE_SERIALIZER(UIIRValueInterpolator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIIRValueInterpolator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIIRValueInterpolator(UIIRValueInterpolator&&) = delete; \
	UIIRValueInterpolator(const UIIRValueInterpolator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIIRValueInterpolator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIIRValueInterpolator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIIRValueInterpolator) \
	NO_API virtual ~UIIRValueInterpolator();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIIRValueInterpolator;

// ********** End Class UIIRValueInterpolator ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
