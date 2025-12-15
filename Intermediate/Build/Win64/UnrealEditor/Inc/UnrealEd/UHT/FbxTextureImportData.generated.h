// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxTextureImportData.h"

#ifdef UNREALED_FbxTextureImportData_generated_h
#error "FbxTextureImportData.generated.h already included, missing '#pragma once' in FbxTextureImportData.h"
#endif
#define UNREALED_FbxTextureImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxTextureImportData ****************************************************
struct Z_Construct_UClass_UFbxTextureImportData_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxTextureImportData_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFbxTextureImportData(); \
	friend struct ::Z_Construct_UClass_UFbxTextureImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxTextureImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxTextureImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxTextureImportData_NoRegister) \
	DECLARE_SERIALIZER(UFbxTextureImportData)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxTextureImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxTextureImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxTextureImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxTextureImportData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxTextureImportData(UFbxTextureImportData&&) = delete; \
	UFbxTextureImportData(const UFbxTextureImportData&) = delete; \
	UNREALED_API virtual ~UFbxTextureImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxTextureImportData;

// ********** End Class UFbxTextureImportData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
