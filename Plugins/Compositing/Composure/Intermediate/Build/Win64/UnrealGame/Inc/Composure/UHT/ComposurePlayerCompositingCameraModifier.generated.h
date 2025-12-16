// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposurePlayerCompositingCameraModifier.h"

#ifdef COMPOSURE_ComposurePlayerCompositingCameraModifier_generated_h
#error "ComposurePlayerCompositingCameraModifier.generated.h already included, missing '#pragma once' in ComposurePlayerCompositingCameraModifier.h"
#endif
#define COMPOSURE_ComposurePlayerCompositingCameraModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComposurePlayerCompositingCameraModifier ********************************
struct Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUComposurePlayerCompositingCameraModifier(); \
	friend struct ::Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposurePlayerCompositingCameraModifier, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_NoRegister) \
	DECLARE_SERIALIZER(UComposurePlayerCompositingCameraModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UComposurePlayerCompositingCameraModifier*>(this); }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePlayerCompositingCameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePlayerCompositingCameraModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePlayerCompositingCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePlayerCompositingCameraModifier); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposurePlayerCompositingCameraModifier(UComposurePlayerCompositingCameraModifier&&) = delete; \
	UComposurePlayerCompositingCameraModifier(const UComposurePlayerCompositingCameraModifier&) = delete; \
	NO_API virtual ~UComposurePlayerCompositingCameraModifier();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_16_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposurePlayerCompositingCameraModifier;

// ********** End Class UComposurePlayerCompositingCameraModifier **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
