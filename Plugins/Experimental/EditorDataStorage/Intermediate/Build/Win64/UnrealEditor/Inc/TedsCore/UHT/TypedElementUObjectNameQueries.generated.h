// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compatibility/TypedElementUObjectNameQueries.h"

#ifdef TEDSCORE_TypedElementUObjectNameQueries_generated_h
#error "TypedElementUObjectNameQueries.generated.h already included, missing '#pragma once' in TypedElementUObjectNameQueries.h"
#endif
#define TEDSCORE_TypedElementUObjectNameQueries_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectNameDataStorageFactory ********************************************
struct Z_Construct_UClass_UObjectNameDataStorageFactory_Statics;
TEDSCORE_API UClass* Z_Construct_UClass_UObjectNameDataStorageFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Compatibility_TypedElementUObjectNameQueries_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectNameDataStorageFactory(); \
	friend struct ::Z_Construct_UClass_UObjectNameDataStorageFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSCORE_API UClass* ::Z_Construct_UClass_UObjectNameDataStorageFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectNameDataStorageFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsCore"), Z_Construct_UClass_UObjectNameDataStorageFactory_NoRegister) \
	DECLARE_SERIALIZER(UObjectNameDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Compatibility_TypedElementUObjectNameQueries_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectNameDataStorageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectNameDataStorageFactory(UObjectNameDataStorageFactory&&) = delete; \
	UObjectNameDataStorageFactory(const UObjectNameDataStorageFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectNameDataStorageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectNameDataStorageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectNameDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Compatibility_TypedElementUObjectNameQueries_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Compatibility_TypedElementUObjectNameQueries_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Compatibility_TypedElementUObjectNameQueries_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Compatibility_TypedElementUObjectNameQueries_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectNameDataStorageFactory;

// ********** End Class UObjectNameDataStorageFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_Compatibility_TypedElementUObjectNameQueries_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
