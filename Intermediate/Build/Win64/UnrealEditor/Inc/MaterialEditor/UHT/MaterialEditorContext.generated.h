// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditorContext.h"

#ifdef MATERIALEDITOR_MaterialEditorContext_generated_h
#error "MaterialEditorContext.generated.h already included, missing '#pragma once' in MaterialEditorContext.h"
#endif
#define MATERIALEDITOR_MaterialEditorContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialEditorMenuContext ***********************************************
struct Z_Construct_UClass_UMaterialEditorMenuContext_Statics;
MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditorMenuContext_NoRegister();

#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditorMenuContext(); \
	friend struct ::Z_Construct_UClass_UMaterialEditorMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MATERIALEDITOR_API UClass* ::Z_Construct_UClass_UMaterialEditorMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialEditorMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialEditor"), Z_Construct_UClass_UMaterialEditorMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UMaterialEditorMenuContext)


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MATERIALEDITOR_API UMaterialEditorMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialEditorMenuContext(UMaterialEditorMenuContext&&) = delete; \
	UMaterialEditorMenuContext(const UMaterialEditorMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MATERIALEDITOR_API, UMaterialEditorMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorMenuContext) \
	MATERIALEDITOR_API virtual ~UMaterialEditorMenuContext();


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_11_PROLOG
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialEditorMenuContext;

// ********** End Class UMaterialEditorMenuContext *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
