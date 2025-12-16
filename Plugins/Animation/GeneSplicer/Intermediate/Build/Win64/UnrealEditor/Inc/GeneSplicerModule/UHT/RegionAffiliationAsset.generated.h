// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RegionAffiliationAsset.h"

#ifdef GENESPLICERMODULE_RegionAffiliationAsset_generated_h
#error "RegionAffiliationAsset.generated.h already included, missing '#pragma once' in RegionAffiliationAsset.h"
#endif
#define GENESPLICERMODULE_RegionAffiliationAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URegionAffiliationAsset **************************************************
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRegionName); \
	DECLARE_FUNCTION(execGetRegionCount);


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URegionAffiliationAsset, NO_API)


struct Z_Construct_UClass_URegionAffiliationAsset_Statics;
GENESPLICERMODULE_API UClass* Z_Construct_UClass_URegionAffiliationAsset_NoRegister();

#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURegionAffiliationAsset(); \
	friend struct ::Z_Construct_UClass_URegionAffiliationAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GENESPLICERMODULE_API UClass* ::Z_Construct_UClass_URegionAffiliationAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(URegionAffiliationAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeneSplicerModule"), Z_Construct_UClass_URegionAffiliationAsset_NoRegister) \
	DECLARE_SERIALIZER(URegionAffiliationAsset) \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_16_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URegionAffiliationAsset(URegionAffiliationAsset&&) = delete; \
	URegionAffiliationAsset(const URegionAffiliationAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URegionAffiliationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegionAffiliationAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URegionAffiliationAsset) \
	NO_API virtual ~URegionAffiliationAsset();


#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_13_PROLOG
#define FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URegionAffiliationAsset;

// ********** End Class URegionAffiliationAsset ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GeneSplicer_Source_GeneSplicerModule_Public_RegionAffiliationAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
