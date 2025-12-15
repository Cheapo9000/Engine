// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/SkeletalMeshExporterFBX.h"

#ifdef UNREALED_SkeletalMeshExporterFBX_generated_h
#error "SkeletalMeshExporterFBX.generated.h already included, missing '#pragma once' in SkeletalMeshExporterFBX.h"
#endif
#define UNREALED_SkeletalMeshExporterFBX_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletalMeshExporterFBX *************************************************
struct Z_Construct_UClass_USkeletalMeshExporterFBX_Statics;
UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshExporterFBX_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SkeletalMeshExporterFBX_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshExporterFBX(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshExporterFBX_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USkeletalMeshExporterFBX_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshExporterFBX, UExporterFBX, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USkeletalMeshExporterFBX_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshExporterFBX)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SkeletalMeshExporterFBX_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshExporterFBX(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshExporterFBX) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshExporterFBX); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshExporterFBX); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshExporterFBX(USkeletalMeshExporterFBX&&) = delete; \
	USkeletalMeshExporterFBX(const USkeletalMeshExporterFBX&) = delete; \
	NO_API virtual ~USkeletalMeshExporterFBX();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SkeletalMeshExporterFBX_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SkeletalMeshExporterFBX_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SkeletalMeshExporterFBX_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SkeletalMeshExporterFBX_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshExporterFBX;

// ********** End Class USkeletalMeshExporterFBX ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_SkeletalMeshExporterFBX_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
