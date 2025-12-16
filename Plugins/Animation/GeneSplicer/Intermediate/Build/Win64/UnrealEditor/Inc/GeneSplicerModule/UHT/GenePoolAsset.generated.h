// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenePoolAsset.h"

#ifdef GENESPLICERMODULE_GenePoolAsset_generated_h
#error "GenePoolAsset.generated.h already included, missing '#pragma once' in GenePoolAsset.h"
#endif
#define GENESPLICERMODULE_GenePoolAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGenePoolAsset ***********************************************************
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDNACount);


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGenePoolAsset, NO_API)


struct Z_Construct_UClass_UGenePoolAsset_Statics;
GENESPLICERMODULE_API UClass* Z_Construct_UClass_UGenePoolAsset_NoRegister();

#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenePoolAsset(); \
	friend struct ::Z_Construct_UClass_UGenePoolAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GENESPLICERMODULE_API UClass* ::Z_Construct_UClass_UGenePoolAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenePoolAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeneSplicerModule"), Z_Construct_UClass_UGenePoolAsset_NoRegister) \
	DECLARE_SERIALIZER(UGenePoolAsset) \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_16_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenePoolAsset(UGenePoolAsset&&) = delete; \
	UGenePoolAsset(const UGenePoolAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenePoolAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenePoolAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGenePoolAsset) \
	NO_API virtual ~UGenePoolAsset();


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_13_PROLOG
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenePoolAsset;

// ********** End Class UGenePoolAsset *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_GenePoolAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
