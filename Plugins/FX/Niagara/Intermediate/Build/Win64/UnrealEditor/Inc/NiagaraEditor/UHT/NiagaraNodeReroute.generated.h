// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraNodeReroute.h"

#ifdef NIAGARAEDITOR_NiagaraNodeReroute_generated_h
#error "NiagaraNodeReroute.generated.h already included, missing '#pragma once' in NiagaraNodeReroute.h"
#endif
#define NIAGARAEDITOR_NiagaraNodeReroute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraNodeReroute ******************************************************
struct Z_Construct_UClass_UNiagaraNodeReroute_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeReroute_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraNodeReroute(); \
	friend struct ::Z_Construct_UClass_UNiagaraNodeReroute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraNodeReroute_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraNodeReroute, UNiagaraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraNodeReroute_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraNodeReroute)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraNodeReroute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraNodeReroute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraNodeReroute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraNodeReroute); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraNodeReroute(UNiagaraNodeReroute&&) = delete; \
	UNiagaraNodeReroute(const UNiagaraNodeReroute&) = delete; \
	NIAGARAEDITOR_API virtual ~UNiagaraNodeReroute();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_8_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_11_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraNodeReroute;

// ********** End Class UNiagaraNodeReroute ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
