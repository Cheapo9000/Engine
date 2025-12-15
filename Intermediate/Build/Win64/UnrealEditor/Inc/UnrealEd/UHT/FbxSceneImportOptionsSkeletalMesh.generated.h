// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxSceneImportOptionsSkeletalMesh.h"

#ifdef UNREALED_FbxSceneImportOptionsSkeletalMesh_generated_h
#error "FbxSceneImportOptionsSkeletalMesh.generated.h already included, missing '#pragma once' in FbxSceneImportOptionsSkeletalMesh.h"
#endif
#define UNREALED_FbxSceneImportOptionsSkeletalMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxSceneImportOptionsSkeletalMesh ***************************************
struct Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsSkeletalMesh_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSceneImportOptionsSkeletalMesh(); \
	friend struct ::Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxSceneImportOptionsSkeletalMesh, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_NoRegister) \
	DECLARE_SERIALIZER(UFbxSceneImportOptionsSkeletalMesh) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsSkeletalMesh_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSceneImportOptionsSkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSceneImportOptionsSkeletalMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSceneImportOptionsSkeletalMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSceneImportOptionsSkeletalMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxSceneImportOptionsSkeletalMesh(UFbxSceneImportOptionsSkeletalMesh&&) = delete; \
	UFbxSceneImportOptionsSkeletalMesh(const UFbxSceneImportOptionsSkeletalMesh&) = delete; \
	UNREALED_API virtual ~UFbxSceneImportOptionsSkeletalMesh();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsSkeletalMesh_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsSkeletalMesh_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsSkeletalMesh_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsSkeletalMesh_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxSceneImportOptionsSkeletalMesh;

// ********** End Class UFbxSceneImportOptionsSkeletalMesh *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsSkeletalMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
