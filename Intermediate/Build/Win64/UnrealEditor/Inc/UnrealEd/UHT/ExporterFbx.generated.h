// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/ExporterFbx.h"

#ifdef UNREALED_ExporterFbx_generated_h
#error "ExporterFbx.generated.h already included, missing '#pragma once' in ExporterFbx.h"
#endif
#define UNREALED_ExporterFbx_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExporterFBX *************************************************************
struct Z_Construct_UClass_UExporterFBX_Statics;
UNREALED_API UClass* Z_Construct_UClass_UExporterFBX_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExporterFbx_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExporterFBX(); \
	friend struct ::Z_Construct_UClass_UExporterFBX_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UExporterFBX_NoRegister(); \
public: \
	DECLARE_CLASS2(UExporterFBX, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UExporterFBX_NoRegister) \
	DECLARE_SERIALIZER(UExporterFBX)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExporterFbx_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExporterFBX(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExporterFBX(UExporterFBX&&) = delete; \
	UExporterFBX(const UExporterFBX&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExporterFBX); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExporterFBX); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExporterFBX) \
	NO_API virtual ~UExporterFBX();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExporterFbx_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExporterFbx_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExporterFbx_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExporterFbx_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExporterFBX;

// ********** End Class UExporterFBX ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExporterFbx_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
