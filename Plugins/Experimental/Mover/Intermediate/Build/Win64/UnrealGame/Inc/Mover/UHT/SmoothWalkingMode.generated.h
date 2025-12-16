// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/SmoothWalkingMode.h"

#ifdef MOVER_SmoothWalkingMode_generated_h
#error "SmoothWalkingMode.generated.h already included, missing '#pragma once' in SmoothWalkingMode.h"
#endif
#define MOVER_SmoothWalkingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmoothWalkingMode *******************************************************
struct Z_Construct_UClass_USmoothWalkingMode_Statics;
MOVER_API UClass* Z_Construct_UClass_USmoothWalkingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SmoothWalkingMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmoothWalkingMode(); \
	friend struct ::Z_Construct_UClass_USmoothWalkingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* ::Z_Construct_UClass_USmoothWalkingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(USmoothWalkingMode, USimpleWalkingMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_USmoothWalkingMode_NoRegister) \
	DECLARE_SERIALIZER(USmoothWalkingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SmoothWalkingMode_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmoothWalkingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmoothWalkingMode(USmoothWalkingMode&&) = delete; \
	USmoothWalkingMode(const USmoothWalkingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmoothWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmoothWalkingMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmoothWalkingMode) \
	NO_API virtual ~USmoothWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SmoothWalkingMode_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SmoothWalkingMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SmoothWalkingMode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SmoothWalkingMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmoothWalkingMode;

// ********** End Class USmoothWalkingMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SmoothWalkingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
