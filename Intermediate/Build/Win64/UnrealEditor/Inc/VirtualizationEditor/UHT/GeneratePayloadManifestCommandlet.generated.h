// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneratePayloadManifestCommandlet.h"

#ifdef VIRTUALIZATIONEDITOR_GeneratePayloadManifestCommandlet_generated_h
#error "GeneratePayloadManifestCommandlet.generated.h already included, missing '#pragma once' in GeneratePayloadManifestCommandlet.h"
#endif
#define VIRTUALIZATIONEDITOR_GeneratePayloadManifestCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeneratePayloadManifestCommandlet ***************************************
struct Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics;
VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UGeneratePayloadManifestCommandlet_NoRegister();

#define FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGeneratePayloadManifestCommandlet(); \
	friend struct ::Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALIZATIONEDITOR_API UClass* ::Z_Construct_UClass_UGeneratePayloadManifestCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeneratePayloadManifestCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VirtualizationEditor"), Z_Construct_UClass_UGeneratePayloadManifestCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UGeneratePayloadManifestCommandlet)


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneratePayloadManifestCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratePayloadManifestCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratePayloadManifestCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratePayloadManifestCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeneratePayloadManifestCommandlet(UGeneratePayloadManifestCommandlet&&) = delete; \
	UGeneratePayloadManifestCommandlet(const UGeneratePayloadManifestCommandlet&) = delete; \
	NO_API virtual ~UGeneratePayloadManifestCommandlet();


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_20_PROLOG
#define FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_24_INCLASS \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeneratePayloadManifestCommandlet;

// ********** End Class UGeneratePayloadManifestCommandlet *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
