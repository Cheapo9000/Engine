// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposurePlayerCompositingCameraModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPOSURE_ComposurePlayerCompositingCameraModifier_generated_h
#error "ComposurePlayerCompositingCameraModifier.generated.h already included, missing '#pragma once' in ComposurePlayerCompositingCameraModifier.h"
#endif
#define COMPOSURE_ComposurePlayerCompositingCameraModifier_generated_h

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUComposurePlayerCompositingCameraModifier(); \
	friend struct Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics; \
public: \
	DECLARE_CLASS(UComposurePlayerCompositingCameraModifier, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposurePlayerCompositingCameraModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UComposurePlayerCompositingCameraModifier*>(this); }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePlayerCompositingCameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePlayerCompositingCameraModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePlayerCompositingCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePlayerCompositingCameraModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UComposurePlayerCompositingCameraModifier(UComposurePlayerCompositingCameraModifier&&); \
	UComposurePlayerCompositingCameraModifier(const UComposurePlayerCompositingCameraModifier&); \
public: \
	NO_API virtual ~UComposurePlayerCompositingCameraModifier();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_16_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposurePlayerCompositingCameraModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
