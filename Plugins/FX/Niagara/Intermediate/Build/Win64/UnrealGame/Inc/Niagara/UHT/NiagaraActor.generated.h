// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraActor.h"

#ifdef NIAGARA_NiagaraActor_generated_h
#error "NiagaraActor.generated.h already included, missing '#pragma once' in NiagaraActor.h"
#endif
#define NIAGARA_NiagaraActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;

// ********** Begin Class ANiagaraActor ************************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNiagaraSystemFinished); \
	DECLARE_FUNCTION(execGetDestroyOnSystemFinish); \
	DECLARE_FUNCTION(execSetDestroyOnSystemFinish);


struct Z_Construct_UClass_ANiagaraActor_Statics;
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraActor_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraActor(); \
	friend struct ::Z_Construct_UClass_ANiagaraActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_ANiagaraActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ANiagaraActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_ANiagaraActor_NoRegister) \
	DECLARE_SERIALIZER(ANiagaraActor)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANiagaraActor(ANiagaraActor&&) = delete; \
	ANiagaraActor(const ANiagaraActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, ANiagaraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraActor) \
	NIAGARA_API virtual ~ANiagaraActor();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_16_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANiagaraActor;

// ********** End Class ANiagaraActor **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
