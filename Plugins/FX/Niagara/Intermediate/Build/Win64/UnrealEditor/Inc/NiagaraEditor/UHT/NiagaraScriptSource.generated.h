// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraScriptSource.h"

#ifdef NIAGARAEDITOR_NiagaraScriptSource_generated_h
#error "NiagaraScriptSource.generated.h already included, missing '#pragma once' in NiagaraScriptSource.h"
#endif
#define NIAGARAEDITOR_NiagaraScriptSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraScriptSource *****************************************************
struct Z_Construct_UClass_UNiagaraScriptSource_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptSource_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraScriptSource(); \
	friend struct ::Z_Construct_UClass_UNiagaraScriptSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraScriptSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraScriptSource, UNiagaraScriptSourceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraScriptSource_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraScriptSource)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraScriptSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraScriptSource(UNiagaraScriptSource&&) = delete; \
	UNiagaraScriptSource(const UNiagaraScriptSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraScriptSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScriptSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScriptSource) \
	NIAGARAEDITOR_API virtual ~UNiagaraScriptSource();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_17_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraScriptSource;

// ********** End Class UNiagaraScriptSource *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
