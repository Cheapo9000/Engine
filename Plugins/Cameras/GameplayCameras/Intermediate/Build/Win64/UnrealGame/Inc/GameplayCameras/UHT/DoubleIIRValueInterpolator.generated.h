// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ValueInterpolators/DoubleIIRValueInterpolator.h"

#ifdef GAMEPLAYCAMERAS_DoubleIIRValueInterpolator_generated_h
#error "DoubleIIRValueInterpolator.generated.h already included, missing '#pragma once' in DoubleIIRValueInterpolator.h"
#endif
#define GAMEPLAYCAMERAS_DoubleIIRValueInterpolator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDoubleIIRValueInterpolator **********************************************
struct Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDoubleIIRValueInterpolator_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoubleIIRValueInterpolator(); \
	friend struct ::Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UDoubleIIRValueInterpolator_NoRegister(); \
public: \
	DECLARE_CLASS2(UDoubleIIRValueInterpolator, UCameraValueInterpolator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UDoubleIIRValueInterpolator_NoRegister) \
	DECLARE_SERIALIZER(UDoubleIIRValueInterpolator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoubleIIRValueInterpolator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDoubleIIRValueInterpolator(UDoubleIIRValueInterpolator&&) = delete; \
	UDoubleIIRValueInterpolator(const UDoubleIIRValueInterpolator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoubleIIRValueInterpolator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoubleIIRValueInterpolator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoubleIIRValueInterpolator) \
	NO_API virtual ~UDoubleIIRValueInterpolator();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_12_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDoubleIIRValueInterpolator;

// ********** End Class UDoubleIIRValueInterpolator ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
