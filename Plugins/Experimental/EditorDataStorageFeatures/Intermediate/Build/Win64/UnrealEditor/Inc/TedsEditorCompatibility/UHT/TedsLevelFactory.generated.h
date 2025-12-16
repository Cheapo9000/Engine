// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Level/TedsLevelFactory.h"

#ifdef TEDSEDITORCOMPATIBILITY_TedsLevelFactory_generated_h
#error "TedsLevelFactory.generated.h already included, missing '#pragma once' in TedsLevelFactory.h"
#endif
#define TEDSEDITORCOMPATIBILITY_TedsLevelFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTedsLevelFactory ********************************************************
struct Z_Construct_UClass_UTedsLevelFactory_Statics;
TEDSEDITORCOMPATIBILITY_API UClass* Z_Construct_UClass_UTedsLevelFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_Level_TedsLevelFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTedsLevelFactory(); \
	friend struct ::Z_Construct_UClass_UTedsLevelFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSEDITORCOMPATIBILITY_API UClass* ::Z_Construct_UClass_UTedsLevelFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTedsLevelFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsEditorCompatibility"), Z_Construct_UClass_UTedsLevelFactory_NoRegister) \
	DECLARE_SERIALIZER(UTedsLevelFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_Level_TedsLevelFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTedsLevelFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTedsLevelFactory(UTedsLevelFactory&&) = delete; \
	UTedsLevelFactory(const UTedsLevelFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTedsLevelFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTedsLevelFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTedsLevelFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_Level_TedsLevelFactory_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_Level_TedsLevelFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_Level_TedsLevelFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_Level_TedsLevelFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTedsLevelFactory;

// ********** End Class UTedsLevelFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_Level_TedsLevelFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
