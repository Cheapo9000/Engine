// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxMeshImportData.h"

#ifdef UNREALED_FbxMeshImportData_generated_h
#error "FbxMeshImportData.generated.h already included, missing '#pragma once' in FbxMeshImportData.h"
#endif
#define UNREALED_FbxMeshImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FImportMeshLodSectionsData ****************************************
struct Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FImportMeshLodSectionsData;
// ********** End ScriptStruct FImportMeshLodSectionsData ******************************************

// ********** Begin Class UFbxMeshImportData *******************************************************
struct Z_Construct_UClass_UFbxMeshImportData_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxMeshImportData_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUFbxMeshImportData(); \
	friend struct ::Z_Construct_UClass_UFbxMeshImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxMeshImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxMeshImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxMeshImportData_NoRegister) \
	DECLARE_SERIALIZER(UFbxMeshImportData)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFbxMeshImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxMeshImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFbxMeshImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxMeshImportData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxMeshImportData(UFbxMeshImportData&&) = delete; \
	UFbxMeshImportData(const UFbxMeshImportData&) = delete; \
	NO_API virtual ~UFbxMeshImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_60_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxMeshImportData;

// ********** End Class UFbxMeshImportData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h

// ********** Begin Enum EFBXNormalImportMethod ****************************************************
#define FOREACH_ENUM_EFBXNORMALIMPORTMETHOD(op) \
	op(FBXNIM_ComputeNormals) \
	op(FBXNIM_ImportNormals) \
	op(FBXNIM_ImportNormalsAndTangents) 

enum EFBXNormalImportMethod : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXNormalImportMethod>();
// ********** End Enum EFBXNormalImportMethod ******************************************************

// ********** Begin Enum EFBXNormalGenerationMethod ************************************************
#define FOREACH_ENUM_EFBXNORMALGENERATIONMETHOD(op) \
	op(EFBXNormalGenerationMethod::BuiltIn) \
	op(EFBXNormalGenerationMethod::MikkTSpace) 

namespace EFBXNormalGenerationMethod { enum Type : int; }
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXNormalGenerationMethod::Type>();
// ********** End Enum EFBXNormalGenerationMethod **************************************************

// ********** Begin Enum EVertexColorImportOption **************************************************
#define FOREACH_ENUM_EVERTEXCOLORIMPORTOPTION(op) \
	op(EVertexColorImportOption::Replace) \
	op(EVertexColorImportOption::Ignore) \
	op(EVertexColorImportOption::Override) 

namespace EVertexColorImportOption { enum Type : int; }
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EVertexColorImportOption::Type>();
// ********** End Enum EVertexColorImportOption ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
