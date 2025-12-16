// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/TedsWorldFactory.h"

#ifdef TEDSEDITORCOMPATIBILITY_TedsWorldFactory_generated_h
#error "TedsWorldFactory.generated.h already included, missing '#pragma once' in TedsWorldFactory.h"
#endif
#define TEDSEDITORCOMPATIBILITY_TedsWorldFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTedsWorldFactory ********************************************************
struct Z_Construct_UClass_UTedsWorldFactory_Statics;
TEDSEDITORCOMPATIBILITY_API UClass* Z_Construct_UClass_UTedsWorldFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_World_TedsWorldFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTedsWorldFactory(); \
	friend struct ::Z_Construct_UClass_UTedsWorldFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSEDITORCOMPATIBILITY_API UClass* ::Z_Construct_UClass_UTedsWorldFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTedsWorldFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsEditorCompatibility"), Z_Construct_UClass_UTedsWorldFactory_NoRegister) \
	DECLARE_SERIALIZER(UTedsWorldFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_World_TedsWorldFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTedsWorldFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTedsWorldFactory(UTedsWorldFactory&&) = delete; \
	UTedsWorldFactory(const UTedsWorldFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTedsWorldFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTedsWorldFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTedsWorldFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_World_TedsWorldFactory_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_World_TedsWorldFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_World_TedsWorldFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_World_TedsWorldFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTedsWorldFactory;

// ********** End Class UTedsWorldFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsEditorCompatibility_Private_World_TedsWorldFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
