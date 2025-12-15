// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEEditorModelDataFactory.h"

#ifdef NNEEDITOR_NNEEditorModelDataFactory_generated_h
#error "NNEEditorModelDataFactory.generated.h already included, missing '#pragma once' in NNEEditorModelDataFactory.h"
#endif
#define NNEEDITOR_NNEEditorModelDataFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNNEModelDataFactory *****************************************************
struct Z_Construct_UClass_UNNEModelDataFactory_Statics;
NNEEDITOR_API UClass* Z_Construct_UClass_UNNEModelDataFactory_NoRegister();

#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNEModelDataFactory(); \
	friend struct ::Z_Construct_UClass_UNNEModelDataFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NNEEDITOR_API UClass* ::Z_Construct_UClass_UNNEModelDataFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UNNEModelDataFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NNEEditor"), Z_Construct_UClass_UNNEModelDataFactory_NoRegister) \
	DECLARE_SERIALIZER(UNNEModelDataFactory)


#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNNEModelDataFactory(UNNEModelDataFactory&&) = delete; \
	UNNEModelDataFactory(const UNNEModelDataFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NNEEDITOR_API, UNNEModelDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNEModelDataFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNEModelDataFactory) \
	NNEEDITOR_API virtual ~UNNEModelDataFactory();


#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNNEModelDataFactory;

// ********** End Class UNNEModelDataFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorModelDataFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
