// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraBakerOutput.h"

#ifdef NIAGARA_NiagaraBakerOutput_generated_h
#error "NiagaraBakerOutput.generated.h already included, missing '#pragma once' in NiagaraBakerOutput.h"
#endif
#define NIAGARA_NiagaraBakerOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraBakerTextureSource ****************************************
struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraBakerTextureSource;
// ********** End ScriptStruct FNiagaraBakerTextureSource ******************************************

// ********** Begin Class UNiagaraBakerOutput ******************************************************
struct Z_Construct_UClass_UNiagaraBakerOutput_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraBakerOutput(); \
	friend struct ::Z_Construct_UClass_UNiagaraBakerOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraBakerOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraBakerOutput, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraBakerOutput_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraBakerOutput)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraBakerOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraBakerOutput(UNiagaraBakerOutput&&) = delete; \
	UNiagaraBakerOutput(const UNiagaraBakerOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraBakerOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBakerOutput); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBakerOutput) \
	NIAGARA_API virtual ~UNiagaraBakerOutput();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_25_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraBakerOutput;

// ********** End Class UNiagaraBakerOutput ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
