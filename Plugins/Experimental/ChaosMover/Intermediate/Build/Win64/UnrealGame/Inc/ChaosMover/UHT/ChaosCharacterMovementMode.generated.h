// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosMover/Character/Modes/ChaosCharacterMovementMode.h"

#ifdef CHAOSMOVER_ChaosCharacterMovementMode_generated_h
#error "ChaosCharacterMovementMode.generated.h already included, missing '#pragma once' in ChaosCharacterMovementMode.h"
#endif
#define CHAOSMOVER_ChaosCharacterMovementMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosCharacterMovementMode **********************************************
struct Z_Construct_UClass_UChaosCharacterMovementMode_Statics;
CHAOSMOVER_API UClass* Z_Construct_UClass_UChaosCharacterMovementMode_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosCharacterMovementMode_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosCharacterMovementMode(); \
	friend struct ::Z_Construct_UClass_UChaosCharacterMovementMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSMOVER_API UClass* ::Z_Construct_UClass_UChaosCharacterMovementMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosCharacterMovementMode, UChaosMovementMode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ChaosMover"), Z_Construct_UClass_UChaosCharacterMovementMode_NoRegister) \
	DECLARE_SERIALIZER(UChaosCharacterMovementMode) \
	virtual UObject* _getUObject() const override { return const_cast<UChaosCharacterMovementMode*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosCharacterMovementMode_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosCharacterMovementMode(UChaosCharacterMovementMode&&) = delete; \
	UChaosCharacterMovementMode(const UChaosCharacterMovementMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSMOVER_API, UChaosCharacterMovementMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosCharacterMovementMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosCharacterMovementMode) \
	CHAOSMOVER_API virtual ~UChaosCharacterMovementMode();


#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosCharacterMovementMode_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosCharacterMovementMode_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosCharacterMovementMode_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosCharacterMovementMode_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosCharacterMovementMode;

// ********** End Class UChaosCharacterMovementMode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosMover_Source_ChaosMover_Public_ChaosMover_Character_Modes_ChaosCharacterMovementMode_h

// ********** Begin Enum ECharacterMoverFrictionOverrideMode ***************************************
#define FOREACH_ENUM_ECHARACTERMOVERFRICTIONOVERRIDEMODE(op) \
	op(ECharacterMoverFrictionOverrideMode::DoNotOverride) \
	op(ECharacterMoverFrictionOverrideMode::AlwaysOverrideToZero) \
	op(ECharacterMoverFrictionOverrideMode::OverrideToZeroWhenMoving) 

enum class ECharacterMoverFrictionOverrideMode : uint8;
template<> struct TIsUEnumClass<ECharacterMoverFrictionOverrideMode> { enum { Value = true }; };
template<> CHAOSMOVER_NON_ATTRIBUTED_API UEnum* StaticEnum<ECharacterMoverFrictionOverrideMode>();
// ********** End Enum ECharacterMoverFrictionOverrideMode *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
