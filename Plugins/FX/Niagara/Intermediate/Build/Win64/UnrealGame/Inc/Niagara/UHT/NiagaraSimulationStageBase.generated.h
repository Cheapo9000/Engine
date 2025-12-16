// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimulationStageBase.h"

#ifdef NIAGARA_NiagaraSimulationStageBase_generated_h
#error "NiagaraSimulationStageBase.generated.h already included, missing '#pragma once' in NiagaraSimulationStageBase.h"
#endif
#define NIAGARA_NiagaraSimulationStageBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraSimulationStageBase **********************************************
struct Z_Construct_UClass_UNiagaraSimulationStageBase_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSimulationStageBase(); \
	friend struct ::Z_Construct_UClass_UNiagaraSimulationStageBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSimulationStageBase, UNiagaraMergeable, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSimulationStageBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSimulationStageBase(UNiagaraSimulationStageBase&&) = delete; \
	UNiagaraSimulationStageBase(const UNiagaraSimulationStageBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimulationStageBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimulationStageBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSimulationStageBase) \
	NIAGARA_API virtual ~UNiagaraSimulationStageBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_19_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSimulationStageBase;

// ********** End Class UNiagaraSimulationStageBase ************************************************

// ********** Begin Class UNiagaraSimulationStageGeneric *******************************************
struct Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSimulationStageGeneric(); \
	friend struct ::Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraSimulationStageGeneric, UNiagaraSimulationStageBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraSimulationStageGeneric)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSimulationStageGeneric(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraSimulationStageGeneric(UNiagaraSimulationStageGeneric&&) = delete; \
	UNiagaraSimulationStageGeneric(const UNiagaraSimulationStageGeneric&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSimulationStageGeneric); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimulationStageGeneric); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSimulationStageGeneric) \
	NIAGARA_API virtual ~UNiagaraSimulationStageGeneric();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_60_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraSimulationStageGeneric;

// ********** End Class UNiagaraSimulationStageGeneric *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
