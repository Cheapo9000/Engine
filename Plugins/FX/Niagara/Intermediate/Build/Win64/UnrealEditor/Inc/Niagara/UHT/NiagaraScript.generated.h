// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraScript.h"

#ifdef NIAGARA_NiagaraScript_generated_h
#error "NiagaraScript.generated.h already included, missing '#pragma once' in NiagaraScript.h"
#endif
#define NIAGARA_NiagaraScript_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraModuleDependency ******************************************
struct Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_123_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraModuleDependency;
// ********** End ScriptStruct FNiagaraModuleDependency ********************************************

// ********** Begin ScriptStruct FNiagaraCompilerTag ***********************************************
struct Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_186_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraCompilerTag;
// ********** End ScriptStruct FNiagaraCompilerTag *************************************************

// ********** Begin ScriptStruct FNiagaraVMExecutableDataId ****************************************
struct Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_243_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraVMExecutableDataId;
// ********** End ScriptStruct FNiagaraVMExecutableDataId ******************************************

// ********** Begin ScriptStruct FNiagaraVMExecutableByteCode **************************************
struct Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_356_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraVMExecutableByteCode;
// ********** End ScriptStruct FNiagaraVMExecutableByteCode ****************************************

// ********** Begin ScriptStruct FNiagaraVMExecutableData ******************************************
struct Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_400_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraVMExecutableData;
// ********** End ScriptStruct FNiagaraVMExecutableData ********************************************

// ********** Begin ScriptStruct FNiagaraInlineDynamicInputFormatToken *****************************
struct Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_591_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraInlineDynamicInputFormatToken;
// ********** End ScriptStruct FNiagaraInlineDynamicInputFormatToken *******************************

// ********** Begin ScriptStruct FVersionedNiagaraScriptData ***************************************
struct Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_620_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FVersionedNiagaraScriptData;
// ********** End ScriptStruct FVersionedNiagaraScriptData *****************************************

// ********** Begin Class UNiagaraScript ***********************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_784_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRaiseOnGPUCompilationComplete);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_784_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraScript, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraScript_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_784_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScript(); \
	friend struct ::Z_Construct_UClass_UNiagaraScript_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraScript_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraScript, UNiagaraScriptBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraScript_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraScript) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_784_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_784_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraScript(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScript); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraScript(UNiagaraScript&&) = delete; \
	UNiagaraScript(const UNiagaraScript&) = delete; \
	NIAGARA_API virtual ~UNiagaraScript();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_781_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_784_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_784_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_784_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_784_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraScript;

// ********** End Class UNiagaraScript *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h

// ********** Begin Enum EUnusedAttributeBehaviour *************************************************
#define FOREACH_ENUM_EUNUSEDATTRIBUTEBEHAVIOUR(op) \
	op(EUnusedAttributeBehaviour::Copy) \
	op(EUnusedAttributeBehaviour::Zero) \
	op(EUnusedAttributeBehaviour::None) \
	op(EUnusedAttributeBehaviour::MarkInvalid) \
	op(EUnusedAttributeBehaviour::PassThrough) 

enum class EUnusedAttributeBehaviour : uint8;
template<> struct TIsUEnumClass<EUnusedAttributeBehaviour> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<EUnusedAttributeBehaviour>();
// ********** End Enum EUnusedAttributeBehaviour ***************************************************

// ********** Begin Enum ENiagaraModuleDependencyType **********************************************
#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYTYPE(op) \
	op(ENiagaraModuleDependencyType::PreDependency) \
	op(ENiagaraModuleDependencyType::PostDependency) 

enum class ENiagaraModuleDependencyType : uint8;
template<> struct TIsUEnumClass<ENiagaraModuleDependencyType> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraModuleDependencyType>();
// ********** End Enum ENiagaraModuleDependencyType ************************************************

// ********** Begin Enum ENiagaraModuleDependencyScriptConstraint **********************************
#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYSCRIPTCONSTRAINT(op) \
	op(ENiagaraModuleDependencyScriptConstraint::SameScript) \
	op(ENiagaraModuleDependencyScriptConstraint::AllScripts) 

enum class ENiagaraModuleDependencyScriptConstraint : uint8;
template<> struct TIsUEnumClass<ENiagaraModuleDependencyScriptConstraint> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraModuleDependencyScriptConstraint>();
// ********** End Enum ENiagaraModuleDependencyScriptConstraint ************************************

// ********** Begin Enum ENiagaraScriptLibraryVisibility *******************************************
#define FOREACH_ENUM_ENIAGARASCRIPTLIBRARYVISIBILITY(op) \
	op(ENiagaraScriptLibraryVisibility::Invalid) \
	op(ENiagaraScriptLibraryVisibility::Unexposed) \
	op(ENiagaraScriptLibraryVisibility::Library) \
	op(ENiagaraScriptLibraryVisibility::Hidden) 

enum class ENiagaraScriptLibraryVisibility : uint8;
template<> struct TIsUEnumClass<ENiagaraScriptLibraryVisibility> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraScriptLibraryVisibility>();
// ********** End Enum ENiagaraScriptLibraryVisibility *********************************************

// ********** Begin Enum ENiagaraScriptTemplateSpecification ***************************************
#define FOREACH_ENUM_ENIAGARASCRIPTTEMPLATESPECIFICATION(op) \
	op(ENiagaraScriptTemplateSpecification::None) \
	op(ENiagaraScriptTemplateSpecification::Template) \
	op(ENiagaraScriptTemplateSpecification::Behavior) 

enum class ENiagaraScriptTemplateSpecification : uint8;
template<> struct TIsUEnumClass<ENiagaraScriptTemplateSpecification> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraScriptTemplateSpecification>();
// ********** End Enum ENiagaraScriptTemplateSpecification *****************************************

// ********** Begin Enum ENiagaraEmitterDefaultSummaryState ****************************************
#define FOREACH_ENUM_ENIAGARAEMITTERDEFAULTSUMMARYSTATE(op) \
	op(ENiagaraEmitterDefaultSummaryState::Default) \
	op(ENiagaraEmitterDefaultSummaryState::Summary) 

enum class ENiagaraEmitterDefaultSummaryState : uint8;
template<> struct TIsUEnumClass<ENiagaraEmitterDefaultSummaryState> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraEmitterDefaultSummaryState>();
// ********** End Enum ENiagaraEmitterDefaultSummaryState ******************************************

// ********** Begin Enum ENiagaraModuleDependencyUsage *********************************************
#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYUSAGE(op) \
	op(ENiagaraModuleDependencyUsage::None) \
	op(ENiagaraModuleDependencyUsage::Spawn) \
	op(ENiagaraModuleDependencyUsage::Update) \
	op(ENiagaraModuleDependencyUsage::Event) \
	op(ENiagaraModuleDependencyUsage::SimulationStage) 

enum class ENiagaraModuleDependencyUsage : uint8;
template<> struct TIsUEnumClass<ENiagaraModuleDependencyUsage> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraModuleDependencyUsage>();
// ********** End Enum ENiagaraModuleDependencyUsage ***********************************************

// ********** Begin Enum ENiagaraInlineDynamicInputFormatTokenUsage ********************************
#define FOREACH_ENUM_ENIAGARAINLINEDYNAMICINPUTFORMATTOKENUSAGE(op) \
	op(ENiagaraInlineDynamicInputFormatTokenUsage::Input) \
	op(ENiagaraInlineDynamicInputFormatTokenUsage::Decorator) \
	op(ENiagaraInlineDynamicInputFormatTokenUsage::LineBreak) 

enum class ENiagaraInlineDynamicInputFormatTokenUsage;
template<> struct TIsUEnumClass<ENiagaraInlineDynamicInputFormatTokenUsage> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraInlineDynamicInputFormatTokenUsage>();
// ********** End Enum ENiagaraInlineDynamicInputFormatTokenUsage **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
