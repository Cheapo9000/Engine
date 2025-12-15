// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/TextureExporterTGA.h"

#ifdef UNREALED_TextureExporterTGA_generated_h
#error "TextureExporterTGA.generated.h already included, missing '#pragma once' in TextureExporterTGA.h"
#endif
#define UNREALED_TextureExporterTGA_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureExporterTGA ******************************************************
struct Z_Construct_UClass_UTextureExporterTGA_Statics;
UNREALED_API UClass* Z_Construct_UClass_UTextureExporterTGA_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTextureExporterTGA(); \
	friend struct ::Z_Construct_UClass_UTextureExporterTGA_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UTextureExporterTGA_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureExporterTGA, UTextureExporterGeneric, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UTextureExporterTGA_NoRegister) \
	DECLARE_SERIALIZER(UTextureExporterTGA)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTextureExporterTGA(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureExporterTGA) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTextureExporterTGA); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureExporterTGA); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureExporterTGA(UTextureExporterTGA&&) = delete; \
	UTextureExporterTGA(const UTextureExporterTGA&) = delete; \
	UNREALED_API virtual ~UTextureExporterTGA();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureExporterTGA;

// ********** End Class UTextureExporterTGA ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextureExporterTGA_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
