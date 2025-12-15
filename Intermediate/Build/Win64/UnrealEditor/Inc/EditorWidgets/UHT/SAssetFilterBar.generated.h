// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/SAssetFilterBar.h"

#ifdef EDITORWIDGETS_SAssetFilterBar_generated_h
#error "SAssetFilterBar.generated.h already included, missing '#pragma once' in SAssetFilterBar.h"
#endif
#define EDITORWIDGETS_SAssetFilterBar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetFilterBarContext ***************************************************
struct Z_Construct_UClass_UAssetFilterBarContext_Statics;
EDITORWIDGETS_API UClass* Z_Construct_UClass_UAssetFilterBarContext_NoRegister();

#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetFilterBarContext(); \
	friend struct ::Z_Construct_UClass_UAssetFilterBarContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORWIDGETS_API UClass* ::Z_Construct_UClass_UAssetFilterBarContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetFilterBarContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorWidgets"), Z_Construct_UClass_UAssetFilterBarContext_NoRegister) \
	DECLARE_SERIALIZER(UAssetFilterBarContext)


#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORWIDGETS_API UAssetFilterBarContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetFilterBarContext(UAssetFilterBarContext&&) = delete; \
	UAssetFilterBarContext(const UAssetFilterBarContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORWIDGETS_API, UAssetFilterBarContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetFilterBarContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetFilterBarContext) \
	EDITORWIDGETS_API virtual ~UAssetFilterBarContext();


#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_99_PROLOG
#define FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetFilterBarContext;

// ********** End Class UAssetFilterBarContext *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
