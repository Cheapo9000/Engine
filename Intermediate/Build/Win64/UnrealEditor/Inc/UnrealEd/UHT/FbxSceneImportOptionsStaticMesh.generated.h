// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxSceneImportOptionsStaticMesh.h"

#ifdef UNREALED_FbxSceneImportOptionsStaticMesh_generated_h
#error "FbxSceneImportOptionsStaticMesh.generated.h already included, missing '#pragma once' in FbxSceneImportOptionsStaticMesh.h"
#endif
#define UNREALED_FbxSceneImportOptionsStaticMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxSceneImportOptionsStaticMesh *****************************************
struct Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSceneImportOptionsStaticMesh(); \
	friend struct ::Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxSceneImportOptionsStaticMesh, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister) \
	DECLARE_SERIALIZER(UFbxSceneImportOptionsStaticMesh) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSceneImportOptionsStaticMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSceneImportOptionsStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSceneImportOptionsStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSceneImportOptionsStaticMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxSceneImportOptionsStaticMesh(UFbxSceneImportOptionsStaticMesh&&) = delete; \
	UFbxSceneImportOptionsStaticMesh(const UFbxSceneImportOptionsStaticMesh&) = delete; \
	UNREALED_API virtual ~UFbxSceneImportOptionsStaticMesh();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_44_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_47_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxSceneImportOptionsStaticMesh;

// ********** End Class UFbxSceneImportOptionsStaticMesh *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h

// ********** Begin Enum EFbxSceneVertexColorImportOption ******************************************
#define FOREACH_ENUM_EFBXSCENEVERTEXCOLORIMPORTOPTION(op) \
	op(EFbxSceneVertexColorImportOption::Replace) \
	op(EFbxSceneVertexColorImportOption::Ignore) \
	op(EFbxSceneVertexColorImportOption::Override) 

enum class EFbxSceneVertexColorImportOption : uint8;
template<> struct TIsUEnumClass<EFbxSceneVertexColorImportOption> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFbxSceneVertexColorImportOption>();
// ********** End Enum EFbxSceneVertexColorImportOption ********************************************

// ********** Begin Enum EFBXSceneNormalImportMethod ***********************************************
#define FOREACH_ENUM_EFBXSCENENORMALIMPORTMETHOD(op) \
	op(EFBXSceneNormalImportMethod::FBXSceneNIM_ComputeNormals) \
	op(EFBXSceneNormalImportMethod::FBXSceneNIM_ImportNormals) \
	op(EFBXSceneNormalImportMethod::FBXSceneNIM_ImportNormalsAndTangents) 

enum class EFBXSceneNormalImportMethod : uint8;
template<> struct TIsUEnumClass<EFBXSceneNormalImportMethod> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXSceneNormalImportMethod>();
// ********** End Enum EFBXSceneNormalImportMethod *************************************************

// ********** Begin Enum EFBXSceneNormalGenerationMethod *******************************************
#define FOREACH_ENUM_EFBXSCENENORMALGENERATIONMETHOD(op) \
	op(EFBXSceneNormalGenerationMethod::BuiltIn) \
	op(EFBXSceneNormalGenerationMethod::MikkTSpace) 

enum class EFBXSceneNormalGenerationMethod : uint8;
template<> struct TIsUEnumClass<EFBXSceneNormalGenerationMethod> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXSceneNormalGenerationMethod>();
// ********** End Enum EFBXSceneNormalGenerationMethod *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
