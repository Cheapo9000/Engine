// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceColorCurve.h"

#ifdef NIAGARA_NiagaraDataInterfaceColorCurve_generated_h
#error "NiagaraDataInterfaceColorCurve.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceColorCurve.h"
#endif
#define NIAGARA_NiagaraDataInterfaceColorCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceColorCurve ******************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceColorCurve, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceColorCurve(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceColorCurve, UNiagaraDataInterfaceCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceColorCurve) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_23_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceColorCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceColorCurve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceColorCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceColorCurve); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceColorCurve(UNiagaraDataInterfaceColorCurve&&) = delete; \
	UNiagaraDataInterfaceColorCurve(const UNiagaraDataInterfaceColorCurve&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceColorCurve();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_20_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_23_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceColorCurve;

// ********** End Class UNiagaraDataInterfaceColorCurve ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
