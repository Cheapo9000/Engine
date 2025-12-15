// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/StaticMeshExporterOBJ.h"

#ifdef UNREALED_StaticMeshExporterOBJ_generated_h
#error "StaticMeshExporterOBJ.generated.h already included, missing '#pragma once' in StaticMeshExporterOBJ.h"
#endif
#define UNREALED_StaticMeshExporterOBJ_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStaticMeshExporterOBJ ***************************************************
struct Z_Construct_UClass_UStaticMeshExporterOBJ_Statics;
UNREALED_API UClass* Z_Construct_UClass_UStaticMeshExporterOBJ_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterOBJ_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshExporterOBJ(); \
	friend struct ::Z_Construct_UClass_UStaticMeshExporterOBJ_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UStaticMeshExporterOBJ_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshExporterOBJ, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UStaticMeshExporterOBJ_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshExporterOBJ)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterOBJ_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshExporterOBJ(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshExporterOBJ) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshExporterOBJ); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshExporterOBJ); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshExporterOBJ(UStaticMeshExporterOBJ&&) = delete; \
	UStaticMeshExporterOBJ(const UStaticMeshExporterOBJ&) = delete; \
	NO_API virtual ~UStaticMeshExporterOBJ();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterOBJ_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterOBJ_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterOBJ_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterOBJ_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshExporterOBJ;

// ********** End Class UStaticMeshExporterOBJ *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterOBJ_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
