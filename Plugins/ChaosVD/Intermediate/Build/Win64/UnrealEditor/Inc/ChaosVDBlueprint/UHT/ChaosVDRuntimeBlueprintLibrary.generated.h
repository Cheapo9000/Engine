// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDRuntimeBlueprintLibrary.h"

#ifdef CHAOSVDBLUEPRINT_ChaosVDRuntimeBlueprintLibrary_generated_h
#error "ChaosVDRuntimeBlueprintLibrary.generated.h already included, missing '#pragma once' in ChaosVDRuntimeBlueprintLibrary.h"
#endif
#define CHAOSVDBLUEPRINT_ChaosVDRuntimeBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinearColor;

// ********** Begin Class UChaosVDRuntimeBlueprintLibrary ******************************************
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTraceRelevancyVolume); \
	DECLARE_FUNCTION(execRecordDebugDrawSphere); \
	DECLARE_FUNCTION(execRecordDebugDrawVector); \
	DECLARE_FUNCTION(execRecordDebugDrawLine); \
	DECLARE_FUNCTION(execRecordDebugDrawBox);


struct Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics;
CHAOSVDBLUEPRINT_API UClass* Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVDRuntimeBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVDBLUEPRINT_API UClass* ::Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDRuntimeBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVDBlueprint"), Z_Construct_UClass_UChaosVDRuntimeBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDRuntimeBlueprintLibrary)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSVDBLUEPRINT_API UChaosVDRuntimeBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDRuntimeBlueprintLibrary(UChaosVDRuntimeBlueprintLibrary&&) = delete; \
	UChaosVDRuntimeBlueprintLibrary(const UChaosVDRuntimeBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVDBLUEPRINT_API, UChaosVDRuntimeBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDRuntimeBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDRuntimeBlueprintLibrary) \
	CHAOSVDBLUEPRINT_API virtual ~UChaosVDRuntimeBlueprintLibrary();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDRuntimeBlueprintLibrary;

// ********** End Class UChaosVDRuntimeBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVDBlueprint_Public_ChaosVDRuntimeBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
