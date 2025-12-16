// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceCurve.h"

#ifdef NIAGARA_NiagaraDataInterfaceCurve_generated_h
#error "NiagaraDataInterfaceCurve.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceCurve.h"
#endif
#define NIAGARA_NiagaraDataInterfaceCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceCurve ***********************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceCurve, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurve_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceCurve(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceCurve_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceCurve, UNiagaraDataInterfaceCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceCurve_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceCurve) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_17_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceCurve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceCurve); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceCurve(UNiagaraDataInterfaceCurve&&) = delete; \
	UNiagaraDataInterfaceCurve(const UNiagaraDataInterfaceCurve&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceCurve();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_14_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_17_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceCurve;

// ********** End Class UNiagaraDataInterfaceCurve *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
