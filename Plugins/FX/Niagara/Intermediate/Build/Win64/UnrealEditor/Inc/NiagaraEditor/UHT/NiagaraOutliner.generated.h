// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraOutliner.h"

#ifdef NIAGARAEDITOR_NiagaraOutliner_generated_h
#error "NiagaraOutliner.generated.h already included, missing '#pragma once' in NiagaraOutliner.h"
#endif
#define NIAGARAEDITOR_NiagaraOutliner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraOutlinerFilterSettings ************************************
struct Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraOutlinerFilterSettings;
// ********** End ScriptStruct FNiagaraOutlinerFilterSettings **************************************

// ********** Begin ScriptStruct FNiagaraOutlinerViewSettings **************************************
struct Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraOutlinerViewSettings;
// ********** End ScriptStruct FNiagaraOutlinerViewSettings ****************************************

// ********** Begin Class UNiagaraOutliner *********************************************************
struct Z_Construct_UClass_UNiagaraOutliner_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraOutliner_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_125_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraOutliner(); \
	friend struct ::Z_Construct_UClass_UNiagaraOutliner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraOutliner_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraOutliner, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraOutliner_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraOutliner) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_125_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraOutliner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraOutliner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraOutliner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraOutliner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraOutliner(UNiagaraOutliner&&) = delete; \
	UNiagaraOutliner(const UNiagaraOutliner&) = delete; \
	NO_API virtual ~UNiagaraOutliner();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_122_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_125_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_125_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraOutliner;

// ********** End Class UNiagaraOutliner ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h

// ********** Begin Enum ENiagaraOutlinerViewModes *************************************************
#define FOREACH_ENUM_ENIAGARAOUTLINERVIEWMODES(op) \
	op(ENiagaraOutlinerViewModes::State) \
	op(ENiagaraOutlinerViewModes::Performance) \
	op(ENiagaraOutlinerViewModes::Debug) 

enum class ENiagaraOutlinerViewModes : uint8;
template<> struct TIsUEnumClass<ENiagaraOutlinerViewModes> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraOutlinerViewModes>();
// ********** End Enum ENiagaraOutlinerViewModes ***************************************************

// ********** Begin Enum ENiagaraOutlinerSortMode **************************************************
#define FOREACH_ENUM_ENIAGARAOUTLINERSORTMODE(op) \
	op(ENiagaraOutlinerSortMode::Auto) \
	op(ENiagaraOutlinerSortMode::FilterMatches) \
	op(ENiagaraOutlinerSortMode::AverageTime) \
	op(ENiagaraOutlinerSortMode::MaxTime) 

enum class ENiagaraOutlinerSortMode : uint8;
template<> struct TIsUEnumClass<ENiagaraOutlinerSortMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraOutlinerSortMode>();
// ********** End Enum ENiagaraOutlinerSortMode ****************************************************

// ********** Begin Enum ENiagaraOutlinerTimeUnits *************************************************
#define FOREACH_ENUM_ENIAGARAOUTLINERTIMEUNITS(op) \
	op(ENiagaraOutlinerTimeUnits::Microseconds) \
	op(ENiagaraOutlinerTimeUnits::Milliseconds) \
	op(ENiagaraOutlinerTimeUnits::Seconds) 

enum class ENiagaraOutlinerTimeUnits : uint8;
template<> struct TIsUEnumClass<ENiagaraOutlinerTimeUnits> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraOutlinerTimeUnits>();
// ********** End Enum ENiagaraOutlinerTimeUnits ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
