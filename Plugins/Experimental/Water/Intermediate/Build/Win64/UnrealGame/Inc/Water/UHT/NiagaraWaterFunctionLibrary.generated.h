// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraWaterFunctionLibrary.h"

#ifdef WATER_NiagaraWaterFunctionLibrary_generated_h
#error "NiagaraWaterFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraWaterFunctionLibrary.h"
#endif
#define WATER_NiagaraWaterFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaterBody;
class UNiagaraComponent;
class UWaterBodyComponent;

// ********** Begin Class UNiagaraWaterFunctionLibrary *********************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWaterBodyComponent); \
	DECLARE_FUNCTION(execSetWaterBody);


struct Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics;
WATER_API UClass* Z_Construct_UClass_UNiagaraWaterFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraWaterFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UNiagaraWaterFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraWaterFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UNiagaraWaterFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraWaterFunctionLibrary)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UNiagaraWaterFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraWaterFunctionLibrary(UNiagaraWaterFunctionLibrary&&) = delete; \
	UNiagaraWaterFunctionLibrary(const UNiagaraWaterFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UNiagaraWaterFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraWaterFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraWaterFunctionLibrary) \
	WATER_API virtual ~UNiagaraWaterFunctionLibrary();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraWaterFunctionLibrary;

// ********** End Class UNiagaraWaterFunctionLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
