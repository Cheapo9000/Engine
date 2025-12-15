// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/SoundExporterWAV.h"

#ifdef UNREALED_SoundExporterWAV_generated_h
#error "SoundExporterWAV.generated.h already included, missing '#pragma once' in SoundExporterWAV.h"
#endif
#define UNREALED_SoundExporterWAV_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundExporterWAV ********************************************************
struct Z_Construct_UClass_USoundExporterWAV_Statics;
UNREALED_API UClass* Z_Construct_UClass_USoundExporterWAV_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundExporterWAV(); \
	friend struct ::Z_Construct_UClass_USoundExporterWAV_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USoundExporterWAV_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundExporterWAV, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USoundExporterWAV_NoRegister) \
	DECLARE_SERIALIZER(USoundExporterWAV)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundExporterWAV(USoundExporterWAV&&) = delete; \
	USoundExporterWAV(const USoundExporterWAV&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundExporterWAV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundExporterWAV); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundExporterWAV) \
	NO_API virtual ~USoundExporterWAV();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundExporterWAV;

// ********** End Class USoundExporterWAV **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SoundExporterWAV_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
