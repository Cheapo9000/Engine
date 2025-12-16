// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeEmitter.h"

#ifdef NIAGARAEDITOR_NiagaraNodeEmitter_generated_h
#error "NiagaraNodeEmitter.generated.h already included, missing '#pragma once' in NiagaraNodeEmitter.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeEmitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraNodeEmitter ******************************************************
struct Z_Construct_UClass_UNiagaraNodeEmitter_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeEmitter_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraNodeEmitter(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeEmitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeEmitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeEmitter, UNiagaraNodeWithDynamicPins, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeEmitter_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeEmitter)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeEmitter(UNiagaraNodeEmitter&&) = delete; \
	UNiagaraNodeEmitter(const UNiagaraNodeEmitter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeEmitter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeEmitter) \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeEmitter();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeEmitter;

// ********** End Class UNiagaraNodeEmitter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeEmitter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
