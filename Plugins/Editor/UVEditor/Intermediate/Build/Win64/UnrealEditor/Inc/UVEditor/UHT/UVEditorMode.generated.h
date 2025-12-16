// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorMode.h"

#ifdef UVEDITOR_UVEditorMode_generated_h
#error "UVEditorMode.generated.h already included, missing '#pragma once' in UVEditorMode.h"
#endif
#define UVEDITOR_UVEditorMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVEditorGridProperties **************************************************
struct Z_Construct_UClass_UUVEditorGridProperties_Statics;
UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorGridProperties_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorGridProperties(); \
	friend struct ::Z_Construct_UClass_UUVEditorGridProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITOR_API UClass* ::Z_Construct_UClass_UUVEditorGridProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorGridProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditor"), Z_Construct_UClass_UUVEditorGridProperties_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorGridProperties)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITOR_API UUVEditorGridProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorGridProperties(UUVEditorGridProperties&&) = delete; \
	UUVEditorGridProperties(const UUVEditorGridProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITOR_API, UUVEditorGridProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorGridProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorGridProperties) \
	UVEDITOR_API virtual ~UUVEditorGridProperties();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_46_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorGridProperties;

// ********** End Class UUVEditorGridProperties ****************************************************

// ********** Begin ScriptStruct FUDIMSpecifier ****************************************************
struct Z_Construct_UScriptStruct_FUDIMSpecifier_Statics;
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUDIMSpecifier_Statics; \
	UVEDITOR_API static class UScriptStruct* StaticStruct();


struct FUDIMSpecifier;
// ********** End ScriptStruct FUDIMSpecifier ******************************************************

// ********** Begin Class UUVEditorUDIMProperties **************************************************
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUDIMsFromTexture); \
	DECLARE_FUNCTION(execSetUDIMsFromAsset); \
	DECLARE_FUNCTION(execAssetByIndex); \
	DECLARE_FUNCTION(execGetAssetNames);


struct Z_Construct_UClass_UUVEditorUDIMProperties_Statics;
UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorUDIMProperties_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorUDIMProperties(); \
	friend struct ::Z_Construct_UClass_UUVEditorUDIMProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITOR_API UClass* ::Z_Construct_UClass_UUVEditorUDIMProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorUDIMProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditor"), Z_Construct_UClass_UUVEditorUDIMProperties_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorUDIMProperties)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITOR_API UUVEditorUDIMProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorUDIMProperties(UUVEditorUDIMProperties&&) = delete; \
	UUVEditorUDIMProperties(const UUVEditorUDIMProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITOR_API, UUVEditorUDIMProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorUDIMProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorUDIMProperties) \
	UVEDITOR_API virtual ~UUVEditorUDIMProperties();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_102_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorUDIMProperties;

// ********** End Class UUVEditorUDIMProperties ****************************************************

// ********** Begin Class UUVEditorMode ************************************************************
struct Z_Construct_UClass_UUVEditorMode_Statics;
UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorMode_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorMode(); \
	friend struct ::Z_Construct_UClass_UUVEditorMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITOR_API UClass* ::Z_Construct_UClass_UUVEditorMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorMode, UEdMode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditor"), Z_Construct_UClass_UUVEditorMode_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorMode)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_159_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorMode(UUVEditorMode&&) = delete; \
	UUVEditorMode(const UUVEditorMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVEditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVEditorMode) \
	NO_API virtual ~UUVEditorMode();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_156_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorMode;

// ********** End Class UUVEditorMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorMode_h

// ********** Begin Enum EUVEditorModeActions ******************************************************
#define FOREACH_ENUM_EUVEDITORMODEACTIONS(op) \
	op(EUVEditorModeActions::NoAction) \
	op(EUVEditorModeActions::ConfigureUDIMsFromAsset) \
	op(EUVEditorModeActions::ConfigureUDIMsFromTexture) 

enum class EUVEditorModeActions;
template<> struct TIsUEnumClass<EUVEditorModeActions> { enum { Value = true }; };
template<> UVEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EUVEditorModeActions>();
// ********** End Enum EUVEditorModeActions ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
