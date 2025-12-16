// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorFilterLibrary.h"

#ifdef EDITORSCRIPTINGUTILITIES_EditorFilterLibrary_generated_h
#error "EditorFilterLibrary.generated.h already included, missing '#pragma once' in EditorFilterLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorFilterLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
enum class EEditorScriptingFilterType : uint8;
enum class EEditorScriptingStringMatchType : uint8;

// ********** Begin Class UEditorFilterLibrary *****************************************************
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBySelection); \
	DECLARE_FUNCTION(execByLevelName); \
	DECLARE_FUNCTION(execByLayer); \
	DECLARE_FUNCTION(execByActorTag); \
	DECLARE_FUNCTION(execByActorLabel); \
	DECLARE_FUNCTION(execByIDName); \
	DECLARE_FUNCTION(execByClass);


struct Z_Construct_UClass_UEditorFilterLibrary_Statics;
EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorFilterLibrary_NoRegister();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorFilterLibrary(); \
	friend struct ::Z_Construct_UClass_UEditorFilterLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORSCRIPTINGUTILITIES_API UClass* ::Z_Construct_UClass_UEditorFilterLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), Z_Construct_UClass_UEditorFilterLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEditorFilterLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORSCRIPTINGUTILITIES_API UEditorFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorFilterLibrary(UEditorFilterLibrary&&) = delete; \
	UEditorFilterLibrary(const UEditorFilterLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORSCRIPTINGUTILITIES_API, UEditorFilterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFilterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFilterLibrary) \
	EDITORSCRIPTINGUTILITIES_API virtual ~UEditorFilterLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_31_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorFilterLibrary;

// ********** End Class UEditorFilterLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h

// ********** Begin Enum EEditorScriptingFilterType ************************************************
#define FOREACH_ENUM_EEDITORSCRIPTINGFILTERTYPE(op) \
	op(EEditorScriptingFilterType::Include) \
	op(EEditorScriptingFilterType::Exclude) 

enum class EEditorScriptingFilterType : uint8;
template<> struct TIsUEnumClass<EEditorScriptingFilterType> { enum { Value = true }; };
template<> EDITORSCRIPTINGUTILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditorScriptingFilterType>();
// ********** End Enum EEditorScriptingFilterType **************************************************

// ********** Begin Enum EEditorScriptingStringMatchType *******************************************
#define FOREACH_ENUM_EEDITORSCRIPTINGSTRINGMATCHTYPE(op) \
	op(EEditorScriptingStringMatchType::Contains) \
	op(EEditorScriptingStringMatchType::MatchesWildcard) \
	op(EEditorScriptingStringMatchType::ExactMatch) 

enum class EEditorScriptingStringMatchType : uint8;
template<> struct TIsUEnumClass<EEditorScriptingStringMatchType> { enum { Value = true }; };
template<> EDITORSCRIPTINGUTILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditorScriptingStringMatchType>();
// ********** End Enum EEditorScriptingStringMatchType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
