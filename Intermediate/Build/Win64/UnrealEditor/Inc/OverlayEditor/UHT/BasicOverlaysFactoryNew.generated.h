// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BasicOverlaysFactoryNew.h"

#ifdef OVERLAYEDITOR_BasicOverlaysFactoryNew_generated_h
#error "BasicOverlaysFactoryNew.generated.h already included, missing '#pragma once' in BasicOverlaysFactoryNew.h"
#endif
#define OVERLAYEDITOR_BasicOverlaysFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBasicOverlaysFactoryNew *************************************************
struct Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics;
OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUBasicOverlaysFactoryNew(); \
	friend struct ::Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OVERLAYEDITOR_API UClass* ::Z_Construct_UClass_UBasicOverlaysFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UBasicOverlaysFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OverlayEditor"), Z_Construct_UClass_UBasicOverlaysFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UBasicOverlaysFactoryNew)


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicOverlaysFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicOverlaysFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicOverlaysFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicOverlaysFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBasicOverlaysFactoryNew(UBasicOverlaysFactoryNew&&) = delete; \
	UBasicOverlaysFactoryNew(const UBasicOverlaysFactoryNew&) = delete; \
	NO_API virtual ~UBasicOverlaysFactoryNew();


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_20_PROLOG
#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_24_INCLASS \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBasicOverlaysFactoryNew;

// ********** End Class UBasicOverlaysFactoryNew ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
