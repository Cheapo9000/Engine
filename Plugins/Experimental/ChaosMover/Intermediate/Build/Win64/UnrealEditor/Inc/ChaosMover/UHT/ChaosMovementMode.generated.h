// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/ChaosMovementMode.h"

#ifdef CHAOSMOVER_ChaosMovementMode_generated_h
#error "ChaosMovementMode.generated.h already included, missing '#pragma once' in ChaosMovementMode.h"
#endif
#define CHAOSMOVER_ChaosMovementMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosMoverSimulation;

// ********** Begin Class UChaosMovementMode *******************************************************
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementMode_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSimulation);


struct Z_Construct_UClass_UChaosMovementMode_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosMovementMode_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementMode_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosMovementMode(); \
	friend struct ::Z_Construct_UClass_UChaosMovementMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosMovementMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosMovementMode, UBaseMovementMode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosMovementMode_NoRegister) \
	DECLARE_SERIALIZER(UChaosMovementMode)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementMode_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosMovementMode(UChaosMovementMode&&) = delete; \
	UChaosMovementMode(const UChaosMovementMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosMovementMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosMovementMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosMovementMode) \
	CHAOSMOVER_API virtual ~UChaosMovementMode();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementMode_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementMode_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementMode_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementMode_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementMode_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosMovementMode;

// ********** End Class UChaosMovementMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_ChaosMovementMode_h

// ********** Begin Enum EChaosMoverIgnoredCollisionMode *******************************************
#define FOREACH_ENUM_ECHAOSMOVERIGNOREDCOLLISIONMODE(op) \
	op(EChaosMoverIgnoredCollisionMode::EnableCollisionsWithIgnored) \
	op(EChaosMoverIgnoredCollisionMode::DisableCollisionsWithIgnored) 

enum class EChaosMoverIgnoredCollisionMode : uint8;
template<> struct TIsUEnumClass<EChaosMoverIgnoredCollisionMode> { enum { Value = true }; };
template<> CHAOSMOVER_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosMoverIgnoredCollisionMode>();
// ********** End Enum EChaosMoverIgnoredCollisionMode *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
