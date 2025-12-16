// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEditorSettings.h"

#ifdef NIAGARAEDITOR_NiagaraEditorSettings_generated_h
#error "NiagaraEditorSettings.generated.h already included, missing '#pragma once' in NiagaraEditorSettings.h"
#endif
#define NIAGARAEDITOR_NiagaraEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraNamespaceMetadata *****************************************
struct Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraNamespaceMetadata;
// ********** End ScriptStruct FNiagaraNamespaceMetadata *******************************************

// ********** Begin ScriptStruct FNiagaraCurveTemplate *********************************************
struct Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_200_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraCurveTemplate;
// ********** End ScriptStruct FNiagaraCurveTemplate ***********************************************

// ********** Begin ScriptStruct FNiagaraActionColors **********************************************
struct Z_Construct_UScriptStruct_FNiagaraActionColors_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraActionColors_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraActionColors;
// ********** End ScriptStruct FNiagaraActionColors ************************************************

// ********** Begin ScriptStruct FNiagaraParameterPanelSectionStorage ******************************
struct Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_233_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraParameterPanelSectionStorage;
// ********** End ScriptStruct FNiagaraParameterPanelSectionStorage ********************************

// ********** Begin ScriptStruct FNiagaraViewportSharedSettings ************************************
struct Z_Construct_UScriptStruct_FNiagaraViewportSharedSettings_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_253_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraViewportSharedSettings_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraViewportSharedSettings;
// ********** End ScriptStruct FNiagaraViewportSharedSettings **************************************

// ********** Begin ScriptStruct FNiagaraCurveEditorSharedSettings *********************************
struct Z_Construct_UScriptStruct_FNiagaraCurveEditorSharedSettings_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_324_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraCurveEditorSharedSettings_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraCurveEditorSharedSettings;
// ********** End ScriptStruct FNiagaraCurveEditorSharedSettings ***********************************

// ********** Begin Class UNiagaraEditorSettings ***************************************************
struct Z_Construct_UClass_UNiagaraEditorSettings_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEditorSettings_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_342_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEditorSettings(); \
	friend struct ::Z_Construct_UClass_UNiagaraEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_342_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraEditorSettings(UNiagaraEditorSettings&&) = delete; \
	UNiagaraEditorSettings(const UNiagaraEditorSettings&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraEditorSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_338_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_342_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_342_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_342_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraEditorSettings;

// ********** End Class UNiagaraEditorSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h

// ********** Begin Enum ENiagaraCategoryExpandState ***********************************************
#define FOREACH_ENUM_ENIAGARACATEGORYEXPANDSTATE(op) \
	op(ENiagaraCategoryExpandState::Default) \
	op(ENiagaraCategoryExpandState::DefaultExpandModified) \
	op(ENiagaraCategoryExpandState::CollapseAll) \
	op(ENiagaraCategoryExpandState::ExpandAll) 

enum class ENiagaraCategoryExpandState : uint8;
template<> struct TIsUEnumClass<ENiagaraCategoryExpandState> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraCategoryExpandState>();
// ********** End Enum ENiagaraCategoryExpandState *************************************************

// ********** Begin Enum ENiagaraNamespaceMetadataOptions ******************************************
#define FOREACH_ENUM_ENIAGARANAMESPACEMETADATAOPTIONS(op) \
	op(ENiagaraNamespaceMetadataOptions::HideInScript) \
	op(ENiagaraNamespaceMetadataOptions::HideInSystem) \
	op(ENiagaraNamespaceMetadataOptions::AdvancedInScript) \
	op(ENiagaraNamespaceMetadataOptions::AdvancedInSystem) \
	op(ENiagaraNamespaceMetadataOptions::PreventEditingNamespace) \
	op(ENiagaraNamespaceMetadataOptions::PreventEditingNamespaceModifier) \
	op(ENiagaraNamespaceMetadataOptions::PreventEditingName) \
	op(ENiagaraNamespaceMetadataOptions::PreventCreatingInSystemEditor) \
	op(ENiagaraNamespaceMetadataOptions::HideInDefinitions) 

enum class ENiagaraNamespaceMetadataOptions;
template<> struct TIsUEnumClass<ENiagaraNamespaceMetadataOptions> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraNamespaceMetadataOptions>();
// ********** End Enum ENiagaraNamespaceMetadataOptions ********************************************

// ********** Begin Enum ENiagaraAddDefaultsTrackMode **********************************************
#define FOREACH_ENUM_ENIAGARAADDDEFAULTSTRACKMODE(op) \
	op(ENiagaraAddDefaultsTrackMode::NoSubtracks) \
	op(ENiagaraAddDefaultsTrackMode::ComponentTrackOnly) \
	op(ENiagaraAddDefaultsTrackMode::LifecycleTrack) 

enum class ENiagaraAddDefaultsTrackMode : uint8;
template<> struct TIsUEnumClass<ENiagaraAddDefaultsTrackMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraAddDefaultsTrackMode>();
// ********** End Enum ENiagaraAddDefaultsTrackMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
