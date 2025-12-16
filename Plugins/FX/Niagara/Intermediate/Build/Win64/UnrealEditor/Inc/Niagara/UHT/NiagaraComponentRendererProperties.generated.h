// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraComponentRendererProperties.h"

#ifdef NIAGARA_NiagaraComponentRendererProperties_generated_h
#error "NiagaraComponentRendererProperties.generated.h already included, missing '#pragma once' in NiagaraComponentRendererProperties.h"
#endif
#define NIAGARA_NiagaraComponentRendererProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraComponentPropertyBinding **********************************
struct Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraComponentPropertyBinding;
// ********** End ScriptStruct FNiagaraComponentPropertyBinding ************************************

// ********** Begin Class UNiagaraComponentRendererProperties **************************************
struct Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentRendererProperties_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraComponentRendererProperties(); \
	friend struct ::Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraComponentRendererProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraComponentRendererProperties, UNiagaraRendererProperties, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraComponentRendererProperties_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraComponentRendererProperties)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraComponentRendererProperties(UNiagaraComponentRendererProperties&&) = delete; \
	UNiagaraComponentRendererProperties(const UNiagaraComponentRendererProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraComponentRendererProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraComponentRendererProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraComponentRendererProperties)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_48_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_52_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraComponentRendererProperties;

// ********** End Class UNiagaraComponentRendererProperties ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
