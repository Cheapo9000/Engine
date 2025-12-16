// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraLightRendererProperties.h"

#ifdef NIAGARA_NiagaraLightRendererProperties_generated_h
#error "NiagaraLightRendererProperties.generated.h already included, missing '#pragma once' in NiagaraLightRendererProperties.h"
#endif
#define NIAGARA_NiagaraLightRendererProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraLightRendererProperties ******************************************
struct Z_Construct_UClass_UNiagaraLightRendererProperties_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraLightRendererProperties(); \
	friend struct ::Z_Construct_UClass_UNiagaraLightRendererProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraLightRendererProperties, UNiagaraRendererProperties, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraLightRendererProperties)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraLightRendererProperties(UNiagaraLightRendererProperties&&) = delete; \
	UNiagaraLightRendererProperties(const UNiagaraLightRendererProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraLightRendererProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraLightRendererProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraLightRendererProperties) \
	NIAGARA_API virtual ~UNiagaraLightRendererProperties();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_15_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraLightRendererProperties;

// ********** End Class UNiagaraLightRendererProperties ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
