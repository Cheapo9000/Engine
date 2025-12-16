// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraCullProxyComponent.h"

#ifdef NIAGARA_NiagaraCullProxyComponent_generated_h
#error "NiagaraCullProxyComponent.generated.h already included, missing '#pragma once' in NiagaraCullProxyComponent.h"
#endif
#define NIAGARA_NiagaraCullProxyComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraCulledComponentInfo ***************************************
struct Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraCulledComponentInfo_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraCulledComponentInfo;
// ********** End ScriptStruct FNiagaraCulledComponentInfo *****************************************

// ********** Begin Class UNiagaraCullProxyComponent ***********************************************
struct Z_Construct_UClass_UNiagaraCullProxyComponent_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraCullProxyComponent(); \
	friend struct ::Z_Construct_UClass_UNiagaraCullProxyComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraCullProxyComponent, UNiagaraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraCullProxyComponent)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraCullProxyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraCullProxyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraCullProxyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraCullProxyComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraCullProxyComponent(UNiagaraCullProxyComponent&&) = delete; \
	UNiagaraCullProxyComponent(const UNiagaraCullProxyComponent&) = delete; \
	NO_API virtual ~UNiagaraCullProxyComponent();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_22_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_25_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraCullProxyComponent;

// ********** End Class UNiagaraCullProxyComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCullProxyComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
