// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DNAAsset.h"

#ifdef RIGLOGICMODULE_DNAAsset_generated_h
#error "DNAAsset.generated.h already included, missing '#pragma once' in DNAAsset.h"
#endif
#define RIGLOGICMODULE_DNAAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDNAAsset ****************************************************************
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDNAAsset, RIGLOGICMODULE_API)


struct Z_Construct_UClass_UDNAAsset_Statics;
RIGLOGICMODULE_API UClass* Z_Construct_UClass_UDNAAsset_NoRegister();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDNAAsset(); \
	friend struct ::Z_Construct_UClass_UDNAAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGLOGICMODULE_API UClass* ::Z_Construct_UClass_UDNAAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDNAAsset, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigLogicModule"), Z_Construct_UClass_UDNAAsset_NoRegister) \
	DECLARE_SERIALIZER(UDNAAsset) \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_42_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDNAAsset(UDNAAsset&&) = delete; \
	UDNAAsset(const UDNAAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGLOGICMODULE_API, UDNAAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDNAAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDNAAsset)


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_39_PROLOG
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDNAAsset;

// ********** End Class UDNAAsset ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
