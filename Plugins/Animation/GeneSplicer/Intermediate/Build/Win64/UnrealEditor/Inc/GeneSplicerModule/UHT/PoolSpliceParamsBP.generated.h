// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoolSpliceParamsBP.h"

#ifdef GENESPLICERMODULE_PoolSpliceParamsBP_generated_h
#error "PoolSpliceParamsBP.generated.h already included, missing '#pragma once' in PoolSpliceParamsBP.h"
#endif
#define GENESPLICERMODULE_PoolSpliceParamsBP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGenePoolAsset;
class URegionAffiliationAsset;
class USpliceData;

// ********** Begin Class UPoolSpliceParams ********************************************************
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_PoolSpliceParamsBP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSpliceWeights); \
	DECLARE_FUNCTION(execGetRegionNames); \
	DECLARE_FUNCTION(execGetRegionCount); \
	DECLARE_FUNCTION(execGetDNACount); \
	DECLARE_FUNCTION(execRegisterToSpliceData);


struct Z_Construct_UClass_UPoolSpliceParams_Statics;
GENESPLICERMODULE_API UClass* Z_Construct_UClass_UPoolSpliceParams_NoRegister();

#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_PoolSpliceParamsBP_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoolSpliceParams(); \
	friend struct ::Z_Construct_UClass_UPoolSpliceParams_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GENESPLICERMODULE_API UClass* ::Z_Construct_UClass_UPoolSpliceParams_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoolSpliceParams, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeneSplicerModule"), Z_Construct_UClass_UPoolSpliceParams_NoRegister) \
	DECLARE_SERIALIZER(UPoolSpliceParams)


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_PoolSpliceParamsBP_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoolSpliceParams(UPoolSpliceParams&&) = delete; \
	UPoolSpliceParams(const UPoolSpliceParams&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolSpliceParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolSpliceParams); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoolSpliceParams) \
	NO_API virtual ~UPoolSpliceParams();


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_PoolSpliceParamsBP_h_12_PROLOG
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_PoolSpliceParamsBP_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_PoolSpliceParamsBP_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_PoolSpliceParamsBP_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_PoolSpliceParamsBP_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoolSpliceParams;

// ********** End Class UPoolSpliceParams **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_PoolSpliceParamsBP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
