// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxSkeletalMeshImportData.h"

#ifdef UNREALED_FbxSkeletalMeshImportData_generated_h
#error "FbxSkeletalMeshImportData.generated.h already included, missing '#pragma once' in FbxSkeletalMeshImportData.h"
#endif
#define UNREALED_FbxSkeletalMeshImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxSkeletalMeshImportData ***********************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxSkeletalMeshImportData, UNREALED_API)


struct Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSkeletalMeshImportData(); \
	friend struct ::Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxSkeletalMeshImportData, UFbxMeshImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister) \
	DECLARE_SERIALIZER(UFbxSkeletalMeshImportData) \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSkeletalMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSkeletalMeshImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSkeletalMeshImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSkeletalMeshImportData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxSkeletalMeshImportData(UFbxSkeletalMeshImportData&&) = delete; \
	UFbxSkeletalMeshImportData(const UFbxSkeletalMeshImportData&) = delete; \
	UNREALED_API virtual ~UFbxSkeletalMeshImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_44_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxSkeletalMeshImportData;

// ********** End Class UFbxSkeletalMeshImportData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h

// ********** Begin Enum EFBXImportContentType *****************************************************
#define FOREACH_ENUM_EFBXIMPORTCONTENTTYPE(op) \
	op(FBXICT_All) \
	op(FBXICT_Geometry) \
	op(FBXICT_SkinningWeights) 

enum EFBXImportContentType : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXImportContentType>();
// ********** End Enum EFBXImportContentType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
