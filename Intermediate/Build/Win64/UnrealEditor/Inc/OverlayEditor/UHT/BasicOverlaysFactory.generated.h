// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BasicOverlaysFactory.h"

#ifdef OVERLAYEDITOR_BasicOverlaysFactory_generated_h
#error "BasicOverlaysFactory.generated.h already included, missing '#pragma once' in BasicOverlaysFactory.h"
#endif
#define OVERLAYEDITOR_BasicOverlaysFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBasicOverlaysFactory ****************************************************
struct Z_Construct_UClass_UBasicOverlaysFactory_Statics;
OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactory_NoRegister();

#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBasicOverlaysFactory(); \
	friend struct ::Z_Construct_UClass_UBasicOverlaysFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OVERLAYEDITOR_API UClass* ::Z_Construct_UClass_UBasicOverlaysFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UBasicOverlaysFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OverlayEditor"), Z_Construct_UClass_UBasicOverlaysFactory_NoRegister) \
	DECLARE_SERIALIZER(UBasicOverlaysFactory)


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicOverlaysFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicOverlaysFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicOverlaysFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicOverlaysFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBasicOverlaysFactory(UBasicOverlaysFactory&&) = delete; \
	UBasicOverlaysFactory(const UBasicOverlaysFactory&) = delete; \
	NO_API virtual ~UBasicOverlaysFactory();


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_21_PROLOG
#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_INCLASS \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBasicOverlaysFactory;

// ********** End Class UBasicOverlaysFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
