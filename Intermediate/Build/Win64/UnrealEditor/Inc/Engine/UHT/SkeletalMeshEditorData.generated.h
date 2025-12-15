// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkeletalMeshEditorData.h"

#ifdef ENGINE_SkeletalMeshEditorData_generated_h
#error "SkeletalMeshEditorData.generated.h already included, missing '#pragma once' in SkeletalMeshEditorData.h"
#endif
#define ENGINE_SkeletalMeshEditorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletalMeshEditorData **************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshEditorData, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_USkeletalMeshEditorData_Statics;
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditorData(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshEditorData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USkeletalMeshEditorData_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshEditorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USkeletalMeshEditorData_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshEditorData) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshEditorData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditorData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshEditorData(USkeletalMeshEditorData&&) = delete; \
	USkeletalMeshEditorData(const USkeletalMeshEditorData&) = delete; \
	ENGINE_API virtual ~USkeletalMeshEditorData();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshEditorData;

// ********** End Class USkeletalMeshEditorData ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
