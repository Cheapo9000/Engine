// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/SimpleSpringWalkingMode.h"

#ifdef MOVER_SimpleSpringWalkingMode_generated_h
#error "SimpleSpringWalkingMode.generated.h already included, missing '#pragma once' in SimpleSpringWalkingMode.h"
#endif
#define MOVER_SimpleSpringWalkingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USimpleSpringWalkingMode *************************************************
struct Z_Construct_UClass_USimpleSpringWalkingMode_Statics;
MOVER_API UClass* Z_Construct_UClass_USimpleSpringWalkingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleSpringWalkingMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleSpringWalkingMode(); \
	friend struct ::Z_Construct_UClass_USimpleSpringWalkingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* ::Z_Construct_UClass_USimpleSpringWalkingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleSpringWalkingMode, USimpleWalkingMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_USimpleSpringWalkingMode_NoRegister) \
	DECLARE_SERIALIZER(USimpleSpringWalkingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleSpringWalkingMode_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleSpringWalkingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleSpringWalkingMode(USimpleSpringWalkingMode&&) = delete; \
	USimpleSpringWalkingMode(const USimpleSpringWalkingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleSpringWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleSpringWalkingMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleSpringWalkingMode) \
	NO_API virtual ~USimpleSpringWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleSpringWalkingMode_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleSpringWalkingMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleSpringWalkingMode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleSpringWalkingMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleSpringWalkingMode;

// ********** End Class USimpleSpringWalkingMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SimpleSpringWalkingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
