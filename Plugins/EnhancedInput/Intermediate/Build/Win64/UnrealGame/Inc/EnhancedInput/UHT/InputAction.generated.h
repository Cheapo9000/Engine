// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputAction.h"

#ifdef ENHANCEDINPUT_InputAction_generated_h
#error "InputAction.generated.h already included, missing '#pragma once' in InputAction.h"
#endif
#define ENHANCEDINPUT_InputAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInputAction *************************************************************
struct Z_Construct_UClass_UInputAction_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputAction(); \
	friend struct ::Z_Construct_UClass_UInputAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputAction, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputAction_NoRegister) \
	DECLARE_SERIALIZER(UInputAction)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputAction(UInputAction&&) = delete; \
	UInputAction(const UInputAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputAction) \
	ENHANCEDINPUT_API virtual ~UInputAction();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_54_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputAction;

// ********** End Class UInputAction ***************************************************************

// ********** Begin ScriptStruct FInputActionInstance **********************************************
struct Z_Construct_UScriptStruct_FInputActionInstance_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputActionInstance_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FInputActionInstance;
// ********** End ScriptStruct FInputActionInstance ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h

// ********** Begin Enum EInputActionAccumulationBehavior ******************************************
#define FOREACH_ENUM_EINPUTACTIONACCUMULATIONBEHAVIOR(op) \
	op(EInputActionAccumulationBehavior::TakeHighestAbsoluteValue) \
	op(EInputActionAccumulationBehavior::Cumulative) 

enum class EInputActionAccumulationBehavior : uint8;
template<> struct TIsUEnumClass<EInputActionAccumulationBehavior> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputActionAccumulationBehavior>();
// ********** End Enum EInputActionAccumulationBehavior ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
