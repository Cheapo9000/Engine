// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSystem.h"

#ifdef NIAGARA_NiagaraSystem_generated_h
#error "NiagaraSystem.generated.h already included, missing '#pragma once' in NiagaraSystem.h"
#endif
#define NIAGARA_NiagaraSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraEmitterCompiledData ***************************************
struct Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraEmitterCompiledData;
// ********** End ScriptStruct FNiagaraEmitterCompiledData *****************************************

// ********** Begin ScriptStruct FNiagaraParameterDataSetBinding ***********************************
struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraParameterDataSetBinding;
// ********** End ScriptStruct FNiagaraParameterDataSetBinding *************************************

// ********** Begin ScriptStruct FNiagaraParameterDataSetBindingCollection *************************
struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraParameterDataSetBindingCollection;
// ********** End ScriptStruct FNiagaraParameterDataSetBindingCollection ***************************

// ********** Begin ScriptStruct FNiagaraSystemCompiledData ****************************************
struct Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSystemCompiledData;
// ********** End ScriptStruct FNiagaraSystemCompiledData ******************************************

// ********** Begin ScriptStruct FNiagaraSystemScalabilityOverrides ********************************
struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_200_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraSystemScalabilityOverrides;
// ********** End ScriptStruct FNiagaraSystemScalabilityOverrides **********************************

// ********** Begin Class UNiagaraSystem ***********************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_236_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraSystem, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraSystem_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_236_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSystem(); \
	friend struct ::Z_Construct_UClass_UNiagaraSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSystem, UFXSystemAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraSystem_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSystem) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_236_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_236_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSystem) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystem); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSystem(UNiagaraSystem&&) = delete; \
	UNiagaraSystem(const UNiagaraSystem&) = delete;


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_233_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_236_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_236_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_236_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSystem;

// ********** End Class UNiagaraSystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h

// ********** Begin Enum ENiagaraLwcTileUpdateMode *************************************************
#define FOREACH_ENUM_ENIAGARALWCTILEUPDATEMODE(op) \
	op(ENiagaraLwcTileUpdateMode::ResetSimulation) \
	op(ENiagaraLwcTileUpdateMode::Rebase) \
	op(ENiagaraLwcTileUpdateMode::RebaseOrResetSimulation) 

enum class ENiagaraLwcTileUpdateMode : uint8;
template<> struct TIsUEnumClass<ENiagaraLwcTileUpdateMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraLwcTileUpdateMode>();
// ********** End Enum ENiagaraLwcTileUpdateMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
