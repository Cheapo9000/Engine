// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UVEDITOR_UVEditorMode_generated_h
#error "UVEditorMode.generated.h already included, missing '#pragma once' in UVEditorMode.h"
#endif
#define UVEDITOR_UVEditorMode_generated_h

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorGridProperties(); \
	friend struct Z_Construct_UClass_UUVEditorGridProperties_Statics; \
public: \
	DECLARE_CLASS(UUVEditorGridProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditor"), NO_API) \
	DECLARE_SERIALIZER(UUVEditorGridProperties)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVEditorGridProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVEditorGridProperties(UUVEditorGridProperties&&); \
	UUVEditorGridProperties(const UUVEditorGridProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVEditorGridProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorGridProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorGridProperties) \
	NO_API virtual ~UUVEditorGridProperties();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_44_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITOR_API UClass* StaticClass<class UUVEditorGridProperties>();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUDIMSpecifier_Statics; \
	UVEDITOR_API static class UScriptStruct* StaticStruct();


template<> UVEDITOR_API UScriptStruct* StaticStruct<struct FUDIMSpecifier>();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUDIMsFromTexture); \
	DECLARE_FUNCTION(execSetUDIMsFromAsset); \
	DECLARE_FUNCTION(execAssetByIndex); \
	DECLARE_FUNCTION(execGetAssetNames);


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorUDIMProperties(); \
	friend struct Z_Construct_UClass_UUVEditorUDIMProperties_Statics; \
public: \
	DECLARE_CLASS(UUVEditorUDIMProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditor"), NO_API) \
	DECLARE_SERIALIZER(UUVEditorUDIMProperties)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVEditorUDIMProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVEditorUDIMProperties(UUVEditorUDIMProperties&&); \
	UUVEditorUDIMProperties(const UUVEditorUDIMProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVEditorUDIMProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorUDIMProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorUDIMProperties) \
	NO_API virtual ~UUVEditorUDIMProperties();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_100_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITOR_API UClass* StaticClass<class UUVEditorUDIMProperties>();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorMode(); \
	friend struct Z_Construct_UClass_UUVEditorMode_Statics; \
public: \
	DECLARE_CLASS(UUVEditorMode, UEdMode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditor"), NO_API) \
	DECLARE_SERIALIZER(UUVEditorMode)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_157_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVEditorMode(UUVEditorMode&&); \
	UUVEditorMode(const UUVEditorMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVEditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVEditorMode) \
	NO_API virtual ~UUVEditorMode();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_154_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITOR_API UClass* StaticClass<class UUVEditorMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h


#define FOREACH_ENUM_EUVEDITORMODEACTIONS(op) \
	op(EUVEditorModeActions::NoAction) \
	op(EUVEditorModeActions::ConfigureUDIMsFromAsset) \
	op(EUVEditorModeActions::ConfigureUDIMsFromTexture) 

enum class EUVEditorModeActions;
template<> struct TIsUEnumClass<EUVEditorModeActions> { enum { Value = true }; };
template<> UVEDITOR_API UEnum* StaticEnum<EUVEditorModeActions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
