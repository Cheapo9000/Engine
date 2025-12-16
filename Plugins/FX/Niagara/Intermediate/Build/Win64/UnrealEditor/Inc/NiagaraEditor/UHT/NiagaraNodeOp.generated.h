// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeOp.h"

#ifdef NIAGARAEDITOR_NiagaraNodeOp_generated_h
#error "NiagaraNodeOp.generated.h already included, missing '#pragma once' in NiagaraNodeOp.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeOp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAddedPinData *****************************************************
struct Z_Construct_UScriptStruct_FAddedPinData_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAddedPinData_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FAddedPinData;
// ********** End ScriptStruct FAddedPinData *******************************************************

// ********** Begin Class UNiagaraNodeOp ***********************************************************
struct Z_Construct_UClass_UNiagaraNodeOp_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeOp_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeOp(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeOp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeOp_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeOp, UNiagaraNodeWithDynamicPins, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeOp_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeOp)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeOp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeOp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeOp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeOp); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeOp(UNiagaraNodeOp&&) = delete; \
	UNiagaraNodeOp(const UNiagaraNodeOp&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeOp();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_33_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_36_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeOp;

// ********** End Class UNiagaraNodeOp *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
