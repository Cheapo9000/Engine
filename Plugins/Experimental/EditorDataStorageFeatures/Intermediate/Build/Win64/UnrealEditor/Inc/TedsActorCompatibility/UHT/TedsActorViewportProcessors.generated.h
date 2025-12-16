// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compatibility/TedsActorViewportProcessors.h"

#ifdef TEDSACTORCOMPATIBILITY_TedsActorViewportProcessors_generated_h
#error "TedsActorViewportProcessors.generated.h already included, missing '#pragma once' in TedsActorViewportProcessors.h"
#endif
#define TEDSACTORCOMPATIBILITY_TedsActorViewportProcessors_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorViewportDataStorageFactory *****************************************
struct Z_Construct_UClass_UActorViewportDataStorageFactory_Statics;
TEDSACTORCOMPATIBILITY_API UClass* Z_Construct_UClass_UActorViewportDataStorageFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorViewportProcessors_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorViewportDataStorageFactory(); \
	friend struct ::Z_Construct_UClass_UActorViewportDataStorageFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSACTORCOMPATIBILITY_API UClass* ::Z_Construct_UClass_UActorViewportDataStorageFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorViewportDataStorageFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsActorCompatibility"), Z_Construct_UClass_UActorViewportDataStorageFactory_NoRegister) \
	DECLARE_SERIALIZER(UActorViewportDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorViewportProcessors_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorViewportDataStorageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorViewportDataStorageFactory(UActorViewportDataStorageFactory&&) = delete; \
	UActorViewportDataStorageFactory(const UActorViewportDataStorageFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorViewportDataStorageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorViewportDataStorageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorViewportDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorViewportProcessors_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorViewportProcessors_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorViewportProcessors_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorViewportProcessors_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorViewportDataStorageFactory;

// ********** End Class UActorViewportDataStorageFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorViewportProcessors_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
