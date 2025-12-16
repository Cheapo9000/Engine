// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compatibility/TedsActorLevelQueries.h"

#ifdef TEDSACTORCOMPATIBILITY_TedsActorLevelQueries_generated_h
#error "TedsActorLevelQueries.generated.h already included, missing '#pragma once' in TedsActorLevelQueries.h"
#endif
#define TEDSACTORCOMPATIBILITY_TedsActorLevelQueries_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorLevelDataStorageFactory ********************************************
struct Z_Construct_UClass_UActorLevelDataStorageFactory_Statics;
TEDSACTORCOMPATIBILITY_API UClass* Z_Construct_UClass_UActorLevelDataStorageFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorLevelQueries_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorLevelDataStorageFactory(); \
	friend struct ::Z_Construct_UClass_UActorLevelDataStorageFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSACTORCOMPATIBILITY_API UClass* ::Z_Construct_UClass_UActorLevelDataStorageFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorLevelDataStorageFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsActorCompatibility"), Z_Construct_UClass_UActorLevelDataStorageFactory_NoRegister) \
	DECLARE_SERIALIZER(UActorLevelDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorLevelQueries_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorLevelDataStorageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorLevelDataStorageFactory(UActorLevelDataStorageFactory&&) = delete; \
	UActorLevelDataStorageFactory(const UActorLevelDataStorageFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorLevelDataStorageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorLevelDataStorageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorLevelDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorLevelQueries_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorLevelQueries_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorLevelQueries_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorLevelQueries_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorLevelDataStorageFactory;

// ********** End Class UActorLevelDataStorageFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsActorCompatibility_Private_Compatibility_TedsActorLevelQueries_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
