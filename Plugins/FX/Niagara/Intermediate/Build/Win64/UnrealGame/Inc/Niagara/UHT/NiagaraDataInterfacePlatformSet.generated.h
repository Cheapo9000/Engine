// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfacePlatformSet.h"

#ifdef NIAGARA_NiagaraDataInterfacePlatformSet_generated_h
#error "NiagaraDataInterfacePlatformSet.generated.h already included, missing '#pragma once' in NiagaraDataInterfacePlatformSet.h"
#endif
#define NIAGARA_NiagaraDataInterfacePlatformSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfacePlatformSet *****************************************
struct Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfacePlatformSet(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfacePlatformSet, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfacePlatformSet)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfacePlatformSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfacePlatformSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfacePlatformSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfacePlatformSet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfacePlatformSet(UNiagaraDataInterfacePlatformSet&&) = delete; \
	UNiagaraDataInterfacePlatformSet(const UNiagaraDataInterfacePlatformSet&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfacePlatformSet();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfacePlatformSet;

// ********** End Class UNiagaraDataInterfacePlatformSet *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfacePlatformSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
