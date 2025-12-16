// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpliceDataBP.h"

#ifdef GENESPLICERMODULE_SpliceDataBP_generated_h
#error "SpliceDataBP.generated.h already included, missing '#pragma once' in SpliceDataBP.h"
#endif
#define GENESPLICERMODULE_SpliceDataBP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGenePoolAsset;
class URegionAffiliationAsset;
class USkeletalMeshComponent;

// ********** Begin Class USpliceData **************************************************************
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_SpliceDataBP_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkeletalMeshComponent); \
	DECLARE_FUNCTION(execSetSkeletalMeshComponent); \
	DECLARE_FUNCTION(execSetArchetype); \
	DECLARE_FUNCTION(execSetSpliceWeights); \
	DECLARE_FUNCTION(execRegisterGenePool);


struct Z_Construct_UClass_USpliceData_Statics;
GENESPLICERMODULE_API UClass* Z_Construct_UClass_USpliceData_NoRegister();

#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_SpliceDataBP_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpliceData(); \
	friend struct ::Z_Construct_UClass_USpliceData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GENESPLICERMODULE_API UClass* ::Z_Construct_UClass_USpliceData_NoRegister(); \
public: \
	DECLARE_CLASS2(USpliceData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeneSplicerModule"), Z_Construct_UClass_USpliceData_NoRegister) \
	DECLARE_SERIALIZER(USpliceData)


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_SpliceDataBP_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpliceData(USpliceData&&) = delete; \
	USpliceData(const USpliceData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpliceData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpliceData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpliceData)


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_SpliceDataBP_h_21_PROLOG
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_SpliceDataBP_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_SpliceDataBP_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_SpliceDataBP_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_SpliceDataBP_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpliceData;

// ********** End Class USpliceData ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_SpliceDataBP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
