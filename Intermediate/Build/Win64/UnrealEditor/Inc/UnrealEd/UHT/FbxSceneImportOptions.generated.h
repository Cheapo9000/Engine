// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxSceneImportOptions.h"

#ifdef UNREALED_FbxSceneImportOptions_generated_h
#error "FbxSceneImportOptions.generated.h already included, missing '#pragma once' in FbxSceneImportOptions.h"
#endif
#define UNREALED_FbxSceneImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxSceneImportOptions ***************************************************
struct Z_Construct_UClass_UFbxSceneImportOptions_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptions_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUFbxSceneImportOptions(); \
	friend struct ::Z_Construct_UClass_UFbxSceneImportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxSceneImportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxSceneImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxSceneImportOptions_NoRegister) \
	DECLARE_SERIALIZER(UFbxSceneImportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxSceneImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxSceneImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxSceneImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxSceneImportOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxSceneImportOptions(UFbxSceneImportOptions&&) = delete; \
	UFbxSceneImportOptions(const UFbxSceneImportOptions&) = delete; \
	UNREALED_API virtual ~UFbxSceneImportOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_22_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxSceneImportOptions;

// ********** End Class UFbxSceneImportOptions *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptions_h

// ********** Begin Enum EFBXSceneOptionsCreateHierarchyType ***************************************
#define FOREACH_ENUM_EFBXSCENEOPTIONSCREATEHIERARCHYTYPE(op) \
	op(EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateLevelActors) \
	op(EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateActorComponents) \
	op(EFBXSceneOptionsCreateHierarchyType::FBXSOCHT_CreateBlueprint) 

enum class EFBXSceneOptionsCreateHierarchyType : uint8;
template<> struct TIsUEnumClass<EFBXSceneOptionsCreateHierarchyType> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXSceneOptionsCreateHierarchyType>();
// ********** End Enum EFBXSceneOptionsCreateHierarchyType *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
