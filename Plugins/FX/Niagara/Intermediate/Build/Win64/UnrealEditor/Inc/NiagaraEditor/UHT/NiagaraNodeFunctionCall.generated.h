// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeFunctionCall.h"

#ifdef NIAGARAEDITOR_NiagaraNodeFunctionCall_generated_h
#error "NiagaraNodeFunctionCall.generated.h already included, missing '#pragma once' in NiagaraNodeFunctionCall.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeFunctionCall_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraPropagatedVariable ****************************************
struct Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraPropagatedVariable;
// ********** End ScriptStruct FNiagaraPropagatedVariable ******************************************

// ********** Begin Class UNiagaraNodeFunctionCall *************************************************
struct Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeFunctionCall_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraNodeFunctionCall(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeFunctionCall_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeFunctionCall, UNiagaraNodeWithDynamicPins, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeFunctionCall_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeFunctionCall)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeFunctionCall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeFunctionCall(UNiagaraNodeFunctionCall&&) = delete; \
	UNiagaraNodeFunctionCall(const UNiagaraNodeFunctionCall&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeFunctionCall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeFunctionCall); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeFunctionCall) \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeFunctionCall();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_53_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeFunctionCall;

// ********** End Class UNiagaraNodeFunctionCall ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
