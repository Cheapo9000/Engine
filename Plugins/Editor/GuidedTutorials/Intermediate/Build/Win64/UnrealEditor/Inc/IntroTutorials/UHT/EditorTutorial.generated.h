// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorTutorial.h"

#ifdef INTROTUTORIALS_EditorTutorial_generated_h
#error "EditorTutorial.generated.h already included, missing '#pragma once' in EditorTutorial.h"
#endif
#define INTROTUTORIALS_EditorTutorial_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEditorTutorial;
class UObject;

// ********** Begin ScriptStruct FTutorialCategory *************************************************
struct Z_Construct_UScriptStruct_FTutorialCategory_Statics;
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTutorialCategory_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTutorialCategory;
// ********** End ScriptStruct FTutorialCategory ***************************************************

// ********** Begin ScriptStruct FTutorialContent **************************************************
struct Z_Construct_UScriptStruct_FTutorialContent_Statics;
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTutorialContent_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTutorialContent;
// ********** End ScriptStruct FTutorialContent ****************************************************

// ********** Begin ScriptStruct FTutorialContentAnchor ********************************************
struct Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics;
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTutorialContentAnchor;
// ********** End ScriptStruct FTutorialContentAnchor **********************************************

// ********** Begin ScriptStruct FTutorialWidgetContent ********************************************
struct Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics;
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTutorialWidgetContent;
// ********** End ScriptStruct FTutorialWidgetContent **********************************************

// ********** Begin ScriptStruct FTutorialStage ****************************************************
struct Z_Construct_UScriptStruct_FTutorialStage_Statics;
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_203_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTutorialStage_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTutorialStage;
// ********** End ScriptStruct FTutorialStage ******************************************************

// ********** Begin Class UEditorTutorial **********************************************************
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_238_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetEngineFolderVisibilty); \
	DECLARE_FUNCTION(execSetEngineFolderVisibilty); \
	DECLARE_FUNCTION(execOpenAsset); \
	DECLARE_FUNCTION(execBeginTutorial); \
	DECLARE_FUNCTION(execGoToPreviousTutorialStage); \
	DECLARE_FUNCTION(execGoToNextTutorialStage); \
	DECLARE_FUNCTION(execGetActorReference);


#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_238_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UEditorTutorial_Statics;
INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorial_NoRegister();

#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_238_INCLASS \
private: \
	static void StaticRegisterNativesUEditorTutorial(); \
	friend struct ::Z_Construct_UClass_UEditorTutorial_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROTUTORIALS_API UClass* ::Z_Construct_UClass_UEditorTutorial_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorTutorial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroTutorials"), Z_Construct_UClass_UEditorTutorial_NoRegister) \
	DECLARE_SERIALIZER(UEditorTutorial)


#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_238_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorial); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorTutorial(UEditorTutorial&&) = delete; \
	UEditorTutorial(const UEditorTutorial&) = delete; \
	NO_API virtual ~UEditorTutorial();


#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_235_PROLOG
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_238_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_238_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_238_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_238_INCLASS \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_238_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorTutorial;

// ********** End Class UEditorTutorial ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h

// ********** Begin Enum ETutorialContent **********************************************************
#define FOREACH_ENUM_ETUTORIALCONTENT(op) \
	op(ETutorialContent::None) \
	op(ETutorialContent::Text) \
	op(ETutorialContent::UDNExcerpt) \
	op(ETutorialContent::RichText) 

namespace ETutorialContent { enum Type : int; }
template<> INTROTUTORIALS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETutorialContent::Type>();
// ********** End Enum ETutorialContent ************************************************************

// ********** Begin Enum ETutorialAnchorIdentifier *************************************************
#define FOREACH_ENUM_ETUTORIALANCHORIDENTIFIER(op) \
	op(ETutorialAnchorIdentifier::None) \
	op(ETutorialAnchorIdentifier::NamedWidget) \
	op(ETutorialAnchorIdentifier::Asset) 

namespace ETutorialAnchorIdentifier { enum Type : int; }
template<> INTROTUTORIALS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETutorialAnchorIdentifier::Type>();
// ********** End Enum ETutorialAnchorIdentifier ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
