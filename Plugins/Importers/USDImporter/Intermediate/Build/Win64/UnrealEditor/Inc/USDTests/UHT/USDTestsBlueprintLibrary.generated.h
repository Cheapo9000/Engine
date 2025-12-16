// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDTestsBlueprintLibrary.h"

#ifdef USDTESTS_USDTestsBlueprintLibrary_generated_h
#error "USDTestsBlueprintLibrary.generated.h already included, missing '#pragma once' in USDTestsBlueprintLibrary.h"
#endif
#define USDTESTS_USDTestsBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUsdStageActor;

// ********** Begin Class USDTestsBlueprintLibrary *************************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearTransactionHistory); \
	DECLARE_FUNCTION(execSetUsdStageCpp); \
	DECLARE_FUNCTION(execGetSubtreeMaterialSlotCount); \
	DECLARE_FUNCTION(execGetSubtreeVertexCount); \
	DECLARE_FUNCTION(execDirtyStageActorBlueprint); \
	DECLARE_FUNCTION(execRecompileBlueprintStageActor);


struct Z_Construct_UClass_USDTestsBlueprintLibrary_Statics;
USDTESTS_API UClass* Z_Construct_UClass_USDTestsBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSDTestsBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_USDTestsBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDTESTS_API UClass* ::Z_Construct_UClass_USDTestsBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USDTestsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDTests"), Z_Construct_UClass_USDTestsBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(USDTestsBlueprintLibrary)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDTESTS_API USDTestsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USDTestsBlueprintLibrary(USDTestsBlueprintLibrary&&) = delete; \
	USDTestsBlueprintLibrary(const USDTestsBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDTESTS_API, USDTestsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USDTestsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USDTestsBlueprintLibrary) \
	USDTESTS_API virtual ~USDTestsBlueprintLibrary();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USDTestsBlueprintLibrary;

// ********** End Class USDTestsBlueprintLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
