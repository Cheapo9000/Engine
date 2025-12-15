// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/TextureExporterGeneric.h"

#ifdef UNREALED_TextureExporterGeneric_generated_h
#error "TextureExporterGeneric.generated.h already included, missing '#pragma once' in TextureExporterGeneric.h"
#endif
#define UNREALED_TextureExporterGeneric_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureExporterGeneric **************************************************
struct Z_Construct_UClass_UTextureExporterGeneric_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTextureExporterGeneric_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTextureExporterGeneric(); \
	friend struct ::Z_Construct_UClass_UTextureExporterGeneric_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTextureExporterGeneric_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureExporterGeneric, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTextureExporterGeneric_NoRegister) \
	DECLARE_SERIALIZER(UTextureExporterGeneric)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureExporterGeneric(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureExporterGeneric) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureExporterGeneric); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureExporterGeneric); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureExporterGeneric(UTextureExporterGeneric&&) = delete; \
	UTextureExporterGeneric(const UTextureExporterGeneric&) = delete; \
	NO_API virtual ~UTextureExporterGeneric();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureExporterGeneric;

// ********** End Class UTextureExporterGeneric ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterGeneric_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
