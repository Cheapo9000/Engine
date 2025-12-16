// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDecalRendererProperties.h"

#ifdef NIAGARA_NiagaraDecalRendererProperties_generated_h
#error "NiagaraDecalRendererProperties.generated.h already included, missing '#pragma once' in NiagaraDecalRendererProperties.h"
#endif
#define NIAGARA_NiagaraDecalRendererProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDecalRendererProperties ******************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDecalRendererProperties, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDecalRendererProperties(); \
	friend struct ::Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDecalRendererProperties, UNiagaraRendererProperties, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDecalRendererProperties) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_22_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDecalRendererProperties(UNiagaraDecalRendererProperties&&) = delete; \
	UNiagaraDecalRendererProperties(const UNiagaraDecalRendererProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDecalRendererProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDecalRendererProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraDecalRendererProperties) \
	NIAGARA_API virtual ~UNiagaraDecalRendererProperties();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_18_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDecalRendererProperties;

// ********** End Class UNiagaraDecalRendererProperties ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
