// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceWater.h"

#ifdef WATER_NiagaraDataInterfaceWater_generated_h
#error "NiagaraDataInterfaceWater.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceWater.h"
#endif
#define WATER_NiagaraDataInterfaceWater_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceWater ***********************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics;
WATER_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceWater_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceWater(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceWater_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceWater_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceWater, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UNiagaraDataInterfaceWater_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceWater)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UNiagaraDataInterfaceWater(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceWater(UNiagaraDataInterfaceWater&&) = delete; \
	UNiagaraDataInterfaceWater(const UNiagaraDataInterfaceWater&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UNiagaraDataInterfaceWater); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceWater); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceWater) \
	WATER_API virtual ~UNiagaraDataInterfaceWater();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceWater;

// ********** End Class UNiagaraDataInterfaceWater *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraDataInterfaceWater_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
