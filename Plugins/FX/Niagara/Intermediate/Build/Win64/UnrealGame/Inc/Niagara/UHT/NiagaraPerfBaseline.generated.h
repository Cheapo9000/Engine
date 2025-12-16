// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraPerfBaseline.h"

#ifdef NIAGARA_NiagaraPerfBaseline_generated_h
#error "NiagaraPerfBaseline.generated.h already included, missing '#pragma once' in NiagaraPerfBaseline.h"
#endif
#define NIAGARA_NiagaraPerfBaseline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraSystem;
struct FNiagaraPerfBaselineStats;

// ********** Begin ScriptStruct FNiagaraPerfBaselineStats *****************************************
struct Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraPerfBaselineStats;
// ********** End ScriptStruct FNiagaraPerfBaselineStats *******************************************

// ********** Begin Class UNiagaraBaselineController ***********************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	NIAGARA_API virtual void OnOwnerTick_Implementation(float DeltaTime); \
	NIAGARA_API virtual void OnEndTest_Implementation(FNiagaraPerfBaselineStats Stats); \
	NIAGARA_API virtual bool OnTickTest_Implementation(); \
	NIAGARA_API virtual void OnBeginTest_Implementation(); \
	DECLARE_FUNCTION(execGetSystem); \
	DECLARE_FUNCTION(execOnOwnerTick); \
	DECLARE_FUNCTION(execOnEndTest); \
	DECLARE_FUNCTION(execOnTickTest); \
	DECLARE_FUNCTION(execOnBeginTest);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UNiagaraBaselineController_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraBaselineController(); \
	friend struct ::Z_Construct_UClass_UNiagaraBaselineController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraBaselineController_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraBaselineController, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraBaselineController_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraBaselineController)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraBaselineController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraBaselineController(UNiagaraBaselineController&&) = delete; \
	UNiagaraBaselineController(const UNiagaraBaselineController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraBaselineController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBaselineController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBaselineController) \
	NIAGARA_API virtual ~UNiagaraBaselineController();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_71_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraBaselineController;

// ********** End Class UNiagaraBaselineController *************************************************

// ********** Begin Class UNiagaraBaselineController_Basic *****************************************
struct Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController_Basic_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraBaselineController_Basic(); \
	friend struct ::Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraBaselineController_Basic_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraBaselineController_Basic, UNiagaraBaselineController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraBaselineController_Basic_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraBaselineController_Basic)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraBaselineController_Basic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraBaselineController_Basic(UNiagaraBaselineController_Basic&&) = delete; \
	UNiagaraBaselineController_Basic(const UNiagaraBaselineController_Basic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraBaselineController_Basic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBaselineController_Basic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBaselineController_Basic) \
	NIAGARA_API virtual ~UNiagaraBaselineController_Basic();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_120_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraBaselineController_Basic;

// ********** End Class UNiagaraBaselineController_Basic *******************************************

// ********** Begin Class ANiagaraPerfBaselineActor ************************************************
struct Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics;
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_INCLASS \
private: \
	static void StaticRegisterNativesANiagaraPerfBaselineActor(); \
	friend struct ::Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ANiagaraPerfBaselineActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister) \
	DECLARE_SERIALIZER(ANiagaraPerfBaselineActor)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API ANiagaraPerfBaselineActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraPerfBaselineActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, ANiagaraPerfBaselineActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraPerfBaselineActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANiagaraPerfBaselineActor(ANiagaraPerfBaselineActor&&) = delete; \
	ANiagaraPerfBaselineActor(const ANiagaraPerfBaselineActor&) = delete; \
	NIAGARA_API virtual ~ANiagaraPerfBaselineActor();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_138_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANiagaraPerfBaselineActor;

// ********** End Class ANiagaraPerfBaselineActor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
