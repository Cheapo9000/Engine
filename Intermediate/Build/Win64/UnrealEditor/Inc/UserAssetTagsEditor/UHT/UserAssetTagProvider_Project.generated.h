// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserAssetTagProviders/UserAssetTagProvider_Project.h"

#ifdef USERASSETTAGSEDITOR_UserAssetTagProvider_Project_generated_h
#error "UserAssetTagProvider_Project.generated.h already included, missing '#pragma once' in UserAssetTagProvider_Project.h"
#endif
#define USERASSETTAGSEDITOR_UserAssetTagProvider_Project_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUserAssetTagProvider_Project ********************************************
struct Z_Construct_UClass_UUserAssetTagProvider_Project_Statics;
USERASSETTAGSEDITOR_API UClass* Z_Construct_UClass_UUserAssetTagProvider_Project_NoRegister();

#define FID_Engine_Source_Editor_UserAssetTagsEditor_Private_UserAssetTagProviders_UserAssetTagProvider_Project_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserAssetTagProvider_Project(); \
	friend struct ::Z_Construct_UClass_UUserAssetTagProvider_Project_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERASSETTAGSEDITOR_API UClass* ::Z_Construct_UClass_UUserAssetTagProvider_Project_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserAssetTagProvider_Project, UUserAssetTagProvider, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UserAssetTagsEditor"), Z_Construct_UClass_UUserAssetTagProvider_Project_NoRegister) \
	DECLARE_SERIALIZER(UUserAssetTagProvider_Project)


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Private_UserAssetTagProviders_UserAssetTagProvider_Project_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserAssetTagProvider_Project(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserAssetTagProvider_Project(UUserAssetTagProvider_Project&&) = delete; \
	UUserAssetTagProvider_Project(const UUserAssetTagProvider_Project&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserAssetTagProvider_Project); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserAssetTagProvider_Project); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserAssetTagProvider_Project) \
	NO_API virtual ~UUserAssetTagProvider_Project();


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Private_UserAssetTagProviders_UserAssetTagProvider_Project_h_13_PROLOG
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Private_UserAssetTagProviders_UserAssetTagProvider_Project_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Private_UserAssetTagProviders_UserAssetTagProvider_Project_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Private_UserAssetTagProviders_UserAssetTagProvider_Project_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserAssetTagProvider_Project;

// ********** End Class UUserAssetTagProvider_Project **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UserAssetTagsEditor_Private_UserAssetTagProviders_UserAssetTagProvider_Project_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
