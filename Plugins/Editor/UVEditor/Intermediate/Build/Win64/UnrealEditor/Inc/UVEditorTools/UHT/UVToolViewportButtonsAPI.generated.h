// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextObjects/UVToolViewportButtonsAPI.h"

#ifdef UVEDITORTOOLS_UVToolViewportButtonsAPI_generated_h
#error "UVToolViewportButtonsAPI.generated.h already included, missing '#pragma once' in UVToolViewportButtonsAPI.h"
#endif
#define UVEDITORTOOLS_UVToolViewportButtonsAPI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVToolViewportButtonsAPI ************************************************
struct Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolViewportButtonsAPI_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVToolViewportButtonsAPI(); \
	friend struct ::Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVToolViewportButtonsAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVToolViewportButtonsAPI, UUVToolContextObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVToolViewportButtonsAPI_NoRegister) \
	DECLARE_SERIALIZER(UUVToolViewportButtonsAPI)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVToolViewportButtonsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVToolViewportButtonsAPI(UUVToolViewportButtonsAPI&&) = delete; \
	UUVToolViewportButtonsAPI(const UUVToolViewportButtonsAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVToolViewportButtonsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVToolViewportButtonsAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVToolViewportButtonsAPI) \
	UVEDITORTOOLS_API virtual ~UUVToolViewportButtonsAPI();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_14_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVToolViewportButtonsAPI;

// ********** End Class UUVToolViewportButtonsAPI **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
