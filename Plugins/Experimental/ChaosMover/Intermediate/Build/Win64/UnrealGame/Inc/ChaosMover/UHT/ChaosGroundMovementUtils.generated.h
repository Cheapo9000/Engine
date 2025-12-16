// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/Utilities/ChaosGroundMovementUtils.h"

#ifdef CHAOSMOVER_ChaosGroundMovementUtils_generated_h
#error "ChaosGroundMovementUtils.generated.h already included, missing '#pragma once' in ChaosGroundMovementUtils.h"
#endif
#define CHAOSMOVER_ChaosGroundMovementUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFloorCheckResult;

// ********** Begin Class UChaosGroundMovementUtils ************************************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Utilities_ChaosGroundMovementUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComputeLocalGroundVelocity_Internal);


struct Z_Construct_UClass_UChaosGroundMovementUtils_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosGroundMovementUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Utilities_ChaosGroundMovementUtils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosGroundMovementUtils(); \
	friend struct ::Z_Construct_UClass_UChaosGroundMovementUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosGroundMovementUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosGroundMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosGroundMovementUtils_NoRegister) \
	DECLARE_SERIALIZER(UChaosGroundMovementUtils)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Utilities_ChaosGroundMovementUtils_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSMOVER_API UChaosGroundMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosGroundMovementUtils(UChaosGroundMovementUtils&&) = delete; \
	UChaosGroundMovementUtils(const UChaosGroundMovementUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosGroundMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosGroundMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosGroundMovementUtils) \
	CHAOSMOVER_API virtual ~UChaosGroundMovementUtils();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Utilities_ChaosGroundMovementUtils_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Utilities_ChaosGroundMovementUtils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Utilities_ChaosGroundMovementUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Utilities_ChaosGroundMovementUtils_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Utilities_ChaosGroundMovementUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosGroundMovementUtils;

// ********** End Class UChaosGroundMovementUtils **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Utilities_ChaosGroundMovementUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
