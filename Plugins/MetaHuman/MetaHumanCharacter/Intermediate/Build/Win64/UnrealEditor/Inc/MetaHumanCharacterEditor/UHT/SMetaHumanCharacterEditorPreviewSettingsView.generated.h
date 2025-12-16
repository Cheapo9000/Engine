// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SMetaHumanCharacterEditorPreviewSettingsView.h"

#ifdef METAHUMANCHARACTEREDITOR_SMetaHumanCharacterEditorPreviewSettingsView_generated_h
#error "SMetaHumanCharacterEditorPreviewSettingsView.generated.h already included, missing '#pragma once' in SMetaHumanCharacterEditorPreviewSettingsView.h"
#endif
#define METAHUMANCHARACTEREDITOR_SMetaHumanCharacterEditorPreviewSettingsView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanTemplateAnimationRow ************************************
struct Z_Construct_UScriptStruct_FMetaHumanTemplateAnimationRow_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanTemplateAnimationRow_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FMetaHumanTemplateAnimationRow;
// ********** End ScriptStruct FMetaHumanTemplateAnimationRow **************************************

// ********** Begin Class UMetaHumanCharacterEditorPreviewSceneDescription *************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTemplateAnimationOptions);


struct Z_Construct_UClass_UMetaHumanCharacterEditorPreviewSceneDescription_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorPreviewSceneDescription_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorPreviewSceneDescription(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorPreviewSceneDescription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorPreviewSceneDescription_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorPreviewSceneDescription, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorPreviewSceneDescription_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorPreviewSceneDescription)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorPreviewSceneDescription(UMetaHumanCharacterEditorPreviewSceneDescription&&) = delete; \
	UMetaHumanCharacterEditorPreviewSceneDescription(const UMetaHumanCharacterEditorPreviewSceneDescription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorPreviewSceneDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorPreviewSceneDescription); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorPreviewSceneDescription) \
	NO_API virtual ~UMetaHumanCharacterEditorPreviewSceneDescription();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h_61_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h_65_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorPreviewSceneDescription;

// ********** End Class UMetaHumanCharacterEditorPreviewSceneDescription ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Private_SMetaHumanCharacterEditorPreviewSettingsView_h

// ********** Begin Enum EMetaHumanPreviewAssemblyVisibility ***************************************
#define FOREACH_ENUM_EMETAHUMANPREVIEWASSEMBLYVISIBILITY(op) \
	op(EMetaHumanPreviewAssemblyVisibility::Visible) \
	op(EMetaHumanPreviewAssemblyVisibility::Hidden) 

enum class EMetaHumanPreviewAssemblyVisibility : uint8;
template<> struct TIsUEnumClass<EMetaHumanPreviewAssemblyVisibility> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanPreviewAssemblyVisibility>();
// ********** End Enum EMetaHumanPreviewAssemblyVisibility *****************************************

// ********** Begin Enum EMetaHumanCharacterAnimationController ************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERANIMATIONCONTROLLER(op) \
	op(EMetaHumanCharacterAnimationController::None) \
	op(EMetaHumanCharacterAnimationController::AnimSequence) \
	op(EMetaHumanCharacterAnimationController::LiveLink) 

enum class EMetaHumanCharacterAnimationController : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterAnimationController> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterAnimationController>();
// ********** End Enum EMetaHumanCharacterAnimationController **************************************

// ********** Begin Enum EMetaHumanAnimationType ***************************************************
#define FOREACH_ENUM_EMETAHUMANANIMATIONTYPE(op) \
	op(EMetaHumanAnimationType::SpecificAnimation) \
	op(EMetaHumanAnimationType::TemplateAnimation) 

enum class EMetaHumanAnimationType : uint8;
template<> struct TIsUEnumClass<EMetaHumanAnimationType> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanAnimationType>();
// ********** End Enum EMetaHumanAnimationType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
