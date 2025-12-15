// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkeletalMeshSourceModel.h"

#ifdef ENGINE_SkeletalMeshSourceModel_generated_h
#error "SkeletalMeshSourceModel.generated.h already included, missing '#pragma once' in SkeletalMeshSourceModel.h"
#endif
#define ENGINE_SkeletalMeshSourceModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletalMeshDescriptionBulkData *****************************************
struct Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics;
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshDescriptionBulkData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshDescriptionBulkData(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USkeletalMeshDescriptionBulkData_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshDescriptionBulkData, UMeshDescriptionBaseBulkData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USkeletalMeshDescriptionBulkData_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshDescriptionBulkData)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshDescriptionBulkData(USkeletalMeshDescriptionBulkData&&) = delete; \
	USkeletalMeshDescriptionBulkData(const USkeletalMeshDescriptionBulkData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshDescriptionBulkData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshDescriptionBulkData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkeletalMeshDescriptionBulkData) \
	ENGINE_API virtual ~USkeletalMeshDescriptionBulkData();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshDescriptionBulkData;

// ********** End Class USkeletalMeshDescriptionBulkData *******************************************

// ********** Begin ScriptStruct FSkeletalMeshSourceModel ******************************************
struct Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSkeletalMeshLODInfo Super;


struct FSkeletalMeshSourceModel;
// ********** End ScriptStruct FSkeletalMeshSourceModel ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
