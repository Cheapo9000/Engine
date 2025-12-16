// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/SimpleWalkingMode.h"

#ifdef MOVER_SimpleWalkingMode_generated_h
#error "SimpleWalkingMode.generated.h already included, missing '#pragma once' in SimpleWalkingMode.h"
#endif
#define MOVER_SimpleWalkingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMoverTickStartData;

// ********** Begin Class USimpleWalkingMode *******************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MOVER_API virtual void GenerateWalkMove_Implementation(FMoverTickStartData& StartState, float DeltaSeconds, FVector const& DesiredVelocity, FQuat const& DesiredFacing, FQuat const& CurrentFacing, FVector& InOutAngularVelocityDegrees, FVector& InOutVelocity); \
	DECLARE_FUNCTION(execGenerateWalkMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USimpleWalkingMode_Statics;
MOVER_API UClass* Z_Construct_UClass_USimpleWalkingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleWalkingMode(); \
	friend struct ::Z_Construct_UClass_USimpleWalkingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* ::Z_Construct_UClass_USimpleWalkingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleWalkingMode, UWalkingMode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_USimpleWalkingMode_NoRegister) \
	DECLARE_SERIALIZER(USimpleWalkingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleWalkingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleWalkingMode(USimpleWalkingMode&&) = delete; \
	USimpleWalkingMode(const USimpleWalkingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleWalkingMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleWalkingMode) \
	NO_API virtual ~USimpleWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_17_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleWalkingMode;

// ********** End Class USimpleWalkingMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleWalkingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
