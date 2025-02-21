// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorInitializationContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UVEDITOR_UVEditorInitializationContext_generated_h
#error "UVEditorInitializationContext.generated.h already included, missing '#pragma once' in UVEditorInitializationContext.h"
#endif
#define UVEDITOR_UVEditorInitializationContext_generated_h

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorInitializationContext(); \
	friend struct Z_Construct_UClass_UUVEditorInitializationContext_Statics; \
public: \
	DECLARE_CLASS(UUVEditorInitializationContext, UUVToolContextObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditor"), NO_API) \
	DECLARE_SERIALIZER(UUVEditorInitializationContext)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVEditorInitializationContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVEditorInitializationContext(UUVEditorInitializationContext&&); \
	UUVEditorInitializationContext(const UUVEditorInitializationContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVEditorInitializationContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorInitializationContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorInitializationContext) \
	NO_API virtual ~UUVEditorInitializationContext();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_22_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITOR_API UClass* StaticClass<class UUVEditorInitializationContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
