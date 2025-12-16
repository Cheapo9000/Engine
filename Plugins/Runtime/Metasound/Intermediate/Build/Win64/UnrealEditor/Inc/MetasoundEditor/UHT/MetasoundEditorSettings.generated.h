// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundEditorSettings.h"

#ifdef METASOUNDEDITOR_MetasoundEditorSettings_generated_h
#error "MetasoundEditorSettings.generated.h already included, missing '#pragma once' in MetasoundEditorSettings.h"
#endif
#define METASOUNDEDITOR_MetasoundEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetasoundAnalyzerAnimationSettings *******************************
struct Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics; \
	METASOUNDEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetasoundAnalyzerAnimationSettings;
// ********** End ScriptStruct FMetasoundAnalyzerAnimationSettings *********************************

// ********** Begin Class UMetasoundEditorSettings *************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_111_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAuditionPlatformNames); \
	DECLARE_FUNCTION(execGetAuditionPageNames);


struct Z_Construct_UClass_UMetasoundEditorSettings_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUMetasoundEditorSettings(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorSettings(UMetasoundEditorSettings&&) = delete; \
	UMetasoundEditorSettings(const UMetasoundEditorSettings&) = delete; \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorSettings();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_108_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_111_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_111_INCLASS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorSettings;

// ********** End Class UMetasoundEditorSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h

// ********** Begin Enum EMetasoundActiveAnalyzerEnvelopeDirection *********************************
#define FOREACH_ENUM_EMETASOUNDACTIVEANALYZERENVELOPEDIRECTION(op) \
	op(EMetasoundActiveAnalyzerEnvelopeDirection::FromSourceOutput) \
	op(EMetasoundActiveAnalyzerEnvelopeDirection::FromDestinationInput) 

enum class EMetasoundActiveAnalyzerEnvelopeDirection : uint8;
template<> struct TIsUEnumClass<EMetasoundActiveAnalyzerEnvelopeDirection> { enum { Value = true }; };
template<> METASOUNDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetasoundActiveAnalyzerEnvelopeDirection>();
// ********** End Enum EMetasoundActiveAnalyzerEnvelopeDirection ***********************************

// ********** Begin Enum EMetasoundMemberDefaultWidget *********************************************
#define FOREACH_ENUM_EMETASOUNDMEMBERDEFAULTWIDGET(op) \
	op(EMetasoundMemberDefaultWidget::None) \
	op(EMetasoundMemberDefaultWidget::Slider) \
	op(EMetasoundMemberDefaultWidget::RadialSlider) 

enum class EMetasoundMemberDefaultWidget : uint8;
template<> struct TIsUEnumClass<EMetasoundMemberDefaultWidget> { enum { Value = true }; };
template<> METASOUNDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetasoundMemberDefaultWidget>();
// ********** End Enum EMetasoundMemberDefaultWidget ***********************************************

// ********** Begin Enum EMetasoundBoolMemberDefaultWidget *****************************************
#define FOREACH_ENUM_EMETASOUNDBOOLMEMBERDEFAULTWIDGET(op) \
	op(EMetasoundBoolMemberDefaultWidget::None) \
	op(EMetasoundBoolMemberDefaultWidget::Button) 

enum class EMetasoundBoolMemberDefaultWidget : uint8;
template<> struct TIsUEnumClass<EMetasoundBoolMemberDefaultWidget> { enum { Value = true }; };
template<> METASOUNDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetasoundBoolMemberDefaultWidget>();
// ********** End Enum EMetasoundBoolMemberDefaultWidget *******************************************

// ********** Begin Enum EMetasoundActiveDetailView ************************************************
#define FOREACH_ENUM_EMETASOUNDACTIVEDETAILVIEW(op) \
	op(EMetasoundActiveDetailView::Metasound) \
	op(EMetasoundActiveDetailView::General) 

enum class EMetasoundActiveDetailView : uint8;
template<> struct TIsUEnumClass<EMetasoundActiveDetailView> { enum { Value = true }; };
template<> METASOUNDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetasoundActiveDetailView>();
// ********** End Enum EMetasoundActiveDetailView **************************************************

// ********** Begin Enum EAuditionPageMode *********************************************************
#define FOREACH_ENUM_EAUDITIONPAGEMODE(op) \
	op(EAuditionPageMode::Focused) \
	op(EAuditionPageMode::User) 

enum class EAuditionPageMode : uint8;
template<> struct TIsUEnumClass<EAuditionPageMode> { enum { Value = true }; };
template<> METASOUNDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAuditionPageMode>();
// ********** End Enum EAuditionPageMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
