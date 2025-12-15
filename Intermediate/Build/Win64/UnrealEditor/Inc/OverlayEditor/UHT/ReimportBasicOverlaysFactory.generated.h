// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportBasicOverlaysFactory.h"

#ifdef OVERLAYEDITOR_ReimportBasicOverlaysFactory_generated_h
#error "ReimportBasicOverlaysFactory.generated.h already included, missing '#pragma once' in ReimportBasicOverlaysFactory.h"
#endif
#define OVERLAYEDITOR_ReimportBasicOverlaysFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportBasicOverlaysFactory ********************************************
struct Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics;
OVERLAYEDITOR_API UClass* Z_Construct_UClass_UReimportBasicOverlaysFactory_NoRegister();

#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUReimportBasicOverlaysFactory(); \
	friend struct ::Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OVERLAYEDITOR_API UClass* ::Z_Construct_UClass_UReimportBasicOverlaysFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportBasicOverlaysFactory, UBasicOverlaysFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OverlayEditor"), Z_Construct_UClass_UReimportBasicOverlaysFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportBasicOverlaysFactory)


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportBasicOverlaysFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportBasicOverlaysFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportBasicOverlaysFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportBasicOverlaysFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportBasicOverlaysFactory(UReimportBasicOverlaysFactory&&) = delete; \
	UReimportBasicOverlaysFactory(const UReimportBasicOverlaysFactory&) = delete; \
	NO_API virtual ~UReimportBasicOverlaysFactory();


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_19_PROLOG
#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_22_INCLASS \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportBasicOverlaysFactory;

// ********** End Class UReimportBasicOverlaysFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
