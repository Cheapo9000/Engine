// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntityConfigAsset.h"

#ifdef MASSSPAWNER_MassEntityConfigAsset_generated_h
#error "MassEntityConfigAsset.generated.h already included, missing '#pragma once' in MassEntityConfigAsset.h"
#endif
#define MASSSPAWNER_MassEntityConfigAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassEntityConfig *************************************************
struct Z_Construct_UScriptStruct_FMassEntityConfig_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassEntityConfig_Statics; \
	MASSSPAWNER_API static class UScriptStruct* StaticStruct();


struct FMassEntityConfig;
// ********** End ScriptStruct FMassEntityConfig ***************************************************

// ********** Begin Class UMassEntityConfigAsset ***************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_113_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execValidateEntityConfig);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_113_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMassEntityConfigAsset_Statics;
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEntityConfigAsset(); \
	friend struct ::Z_Construct_UClass_UMassEntityConfigAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSPAWNER_API UClass* ::Z_Construct_UClass_UMassEntityConfigAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEntityConfigAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassSpawner"), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister) \
	DECLARE_SERIALIZER(UMassEntityConfigAsset)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_113_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEntityConfigAsset(UMassEntityConfigAsset&&) = delete; \
	UMassEntityConfigAsset(const UMassEntityConfigAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSPAWNER_API, UMassEntityConfigAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEntityConfigAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassEntityConfigAsset) \
	MASSSPAWNER_API virtual ~UMassEntityConfigAsset();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_110_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_113_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEntityConfigAsset;

// ********** End Class UMassEntityConfigAsset *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityConfigAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
