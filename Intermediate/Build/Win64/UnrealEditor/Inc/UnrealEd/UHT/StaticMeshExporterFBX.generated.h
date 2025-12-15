// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/StaticMeshExporterFBX.h"

#ifdef UNREALED_StaticMeshExporterFBX_generated_h
#error "StaticMeshExporterFBX.generated.h already included, missing '#pragma once' in StaticMeshExporterFBX.h"
#endif
#define UNREALED_StaticMeshExporterFBX_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStaticMeshExporterFBX ***************************************************
struct Z_Construct_UClass_UStaticMeshExporterFBX_Statics;
UNREALED_API UClass* Z_Construct_UClass_UStaticMeshExporterFBX_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterFBX_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshExporterFBX(); \
	friend struct ::Z_Construct_UClass_UStaticMeshExporterFBX_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UStaticMeshExporterFBX_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshExporterFBX, UExporterFBX, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UStaticMeshExporterFBX_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshExporterFBX)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterFBX_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshExporterFBX(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshExporterFBX) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshExporterFBX); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshExporterFBX); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshExporterFBX(UStaticMeshExporterFBX&&) = delete; \
	UStaticMeshExporterFBX(const UStaticMeshExporterFBX&) = delete; \
	NO_API virtual ~UStaticMeshExporterFBX();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterFBX_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterFBX_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterFBX_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterFBX_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshExporterFBX;

// ********** End Class UStaticMeshExporterFBX *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_StaticMeshExporterFBX_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
