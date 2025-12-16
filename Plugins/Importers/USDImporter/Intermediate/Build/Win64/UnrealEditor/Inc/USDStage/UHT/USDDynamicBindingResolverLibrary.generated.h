// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDDynamicBindingResolverLibrary.h"

#ifdef USDSTAGE_USDDynamicBindingResolverLibrary_generated_h
#error "USDDynamicBindingResolverLibrary.generated.h already included, missing '#pragma once' in USDDynamicBindingResolverLibrary.h"
#endif
#define USDSTAGE_USDDynamicBindingResolverLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FMovieSceneDynamicBindingResolveParams;
struct FMovieSceneDynamicBindingResolveResult;

// ********** Begin Class UUsdDynamicBindingResolverLibrary ****************************************
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResolveWithStageActor);


struct Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics;
USDSTAGE_API UClass* Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdDynamicBindingResolverLibrary(); \
	friend struct ::Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDSTAGE_API UClass* ::Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUsdDynamicBindingResolverLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDStage"), Z_Construct_UClass_UUsdDynamicBindingResolverLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUsdDynamicBindingResolverLibrary)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdDynamicBindingResolverLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUsdDynamicBindingResolverLibrary(UUsdDynamicBindingResolverLibrary&&) = delete; \
	UUsdDynamicBindingResolverLibrary(const UUsdDynamicBindingResolverLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdDynamicBindingResolverLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdDynamicBindingResolverLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdDynamicBindingResolverLibrary) \
	NO_API virtual ~UUsdDynamicBindingResolverLibrary();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUsdDynamicBindingResolverLibrary;

// ********** End Class UUsdDynamicBindingResolverLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDDynamicBindingResolverLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
