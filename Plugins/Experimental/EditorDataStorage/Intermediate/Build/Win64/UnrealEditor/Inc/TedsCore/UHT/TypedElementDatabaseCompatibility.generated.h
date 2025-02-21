// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TypedElementDatabaseCompatibility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSCORE_TypedElementDatabaseCompatibility_generated_h
#error "TypedElementDatabaseCompatibility.generated.h already included, missing '#pragma once' in TypedElementDatabaseCompatibility.h"
#endif
#define TEDSCORE_TypedElementDatabaseCompatibility_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabaseCompatibility_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorDataStorageCompatibility(); \
	friend struct Z_Construct_UClass_UEditorDataStorageCompatibility_Statics; \
public: \
	DECLARE_CLASS(UEditorDataStorageCompatibility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsCore"), NO_API) \
	DECLARE_SERIALIZER(UEditorDataStorageCompatibility)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabaseCompatibility_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorDataStorageCompatibility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorDataStorageCompatibility(UEditorDataStorageCompatibility&&); \
	UEditorDataStorageCompatibility(const UEditorDataStorageCompatibility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorDataStorageCompatibility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDataStorageCompatibility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDataStorageCompatibility)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabaseCompatibility_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabaseCompatibility_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabaseCompatibility_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabaseCompatibility_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSCORE_API UClass* StaticClass<class UEditorDataStorageCompatibility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabaseCompatibility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
