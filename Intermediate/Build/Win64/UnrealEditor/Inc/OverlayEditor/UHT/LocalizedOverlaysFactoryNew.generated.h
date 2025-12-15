// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/LocalizedOverlaysFactoryNew.h"

#ifdef OVERLAYEDITOR_LocalizedOverlaysFactoryNew_generated_h
#error "LocalizedOverlaysFactoryNew.generated.h already included, missing '#pragma once' in LocalizedOverlaysFactoryNew.h"
#endif
#define OVERLAYEDITOR_LocalizedOverlaysFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULocalizedOverlaysFactoryNew *********************************************
struct Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics;
OVERLAYEDITOR_API UClass* Z_Construct_UClass_ULocalizedOverlaysFactoryNew_NoRegister();

#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULocalizedOverlaysFactoryNew(); \
	friend struct ::Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OVERLAYEDITOR_API UClass* ::Z_Construct_UClass_ULocalizedOverlaysFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocalizedOverlaysFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OverlayEditor"), Z_Construct_UClass_ULocalizedOverlaysFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(ULocalizedOverlaysFactoryNew)


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalizedOverlaysFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizedOverlaysFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizedOverlaysFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizedOverlaysFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalizedOverlaysFactoryNew(ULocalizedOverlaysFactoryNew&&) = delete; \
	ULocalizedOverlaysFactoryNew(const ULocalizedOverlaysFactoryNew&) = delete; \
	NO_API virtual ~ULocalizedOverlaysFactoryNew();


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_19_PROLOG
#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_23_INCLASS \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalizedOverlaysFactoryNew;

// ********** End Class ULocalizedOverlaysFactoryNew ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
