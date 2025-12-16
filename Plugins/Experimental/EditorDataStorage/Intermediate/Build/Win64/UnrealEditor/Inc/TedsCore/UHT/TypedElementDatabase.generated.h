// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TypedElementDatabase.h"

#ifdef TEDSCORE_TypedElementDatabase_generated_h
#error "TypedElementDatabase.generated.h already included, missing '#pragma once' in TypedElementDatabase.h"
#endif
#define TEDSCORE_TypedElementDatabase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorDataStorage *******************************************************
struct Z_Construct_UClass_UEditorDataStorage_Statics;
TEDSCORE_API UClass* Z_Construct_UClass_UEditorDataStorage_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorDataStorage(); \
	friend struct ::Z_Construct_UClass_UEditorDataStorage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSCORE_API UClass* ::Z_Construct_UClass_UEditorDataStorage_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorDataStorage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsCore"), Z_Construct_UClass_UEditorDataStorage_NoRegister) \
	DECLARE_SERIALIZER(UEditorDataStorage)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEDSCORE_API UEditorDataStorage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorDataStorage(UEditorDataStorage&&) = delete; \
	UEditorDataStorage(const UEditorDataStorage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEDSCORE_API, UEditorDataStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDataStorage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDataStorage)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorDataStorage;

// ********** End Class UEditorDataStorage *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_TypedElementDatabase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
