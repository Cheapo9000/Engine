// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/Character/Modes/ChaosFlyingMode.h"

#ifdef CHAOSMOVER_ChaosFlyingMode_generated_h
#error "ChaosFlyingMode.generated.h already included, missing '#pragma once' in ChaosFlyingMode.h"
#endif
#define CHAOSMOVER_ChaosFlyingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosFlyingMode *********************************************************
struct Z_Construct_UClass_UChaosFlyingMode_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosFlyingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosFlyingMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosFlyingMode(); \
	friend struct ::Z_Construct_UClass_UChaosFlyingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosFlyingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosFlyingMode, UChaosCharacterMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosFlyingMode_NoRegister) \
	DECLARE_SERIALIZER(UChaosFlyingMode)


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosFlyingMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosFlyingMode(UChaosFlyingMode&&) = delete; \
	UChaosFlyingMode(const UChaosFlyingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosFlyingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosFlyingMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosFlyingMode) \
	CHAOSMOVER_API virtual ~UChaosFlyingMode();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosFlyingMode_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosFlyingMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosFlyingMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosFlyingMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosFlyingMode;

// ********** End Class UChaosFlyingMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosFlyingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
