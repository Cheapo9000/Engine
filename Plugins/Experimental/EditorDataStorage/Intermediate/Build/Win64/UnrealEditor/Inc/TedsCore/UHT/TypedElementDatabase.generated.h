// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TypedElementDatabase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSCORE_TypedElementDatabase_generated_h
#error "TypedElementDatabase.generated.h already included, missing '#pragma once' in TypedElementDatabase.h"
#endif
#define TEDSCORE_TypedElementDatabase_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorDataStorage(); \
	friend struct Z_Construct_UClass_UEditorDataStorage_Statics; \
public: \
	DECLARE_CLASS(UEditorDataStorage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsCore"), NO_API) \
	DECLARE_SERIALIZER(UEditorDataStorage)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorDataStorage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorDataStorage(UEditorDataStorage&&); \
	UEditorDataStorage(const UEditorDataStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorDataStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDataStorage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDataStorage)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSCORE_API UClass* StaticClass<class UEditorDataStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
