// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputActionDelegateBinding.h"

#ifdef ENGINE_InputActionDelegateBinding_generated_h
#error "InputActionDelegateBinding.generated.h already included, missing '#pragma once' in InputActionDelegateBinding.h"
#endif
#define ENGINE_InputActionDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintInputActionDelegateBinding ******************************
struct Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


struct FBlueprintInputActionDelegateBinding;
// ********** End ScriptStruct FBlueprintInputActionDelegateBinding ********************************

// ********** Begin Class UInputActionDelegateBinding **********************************************
struct Z_Construct_UClass_UInputActionDelegateBinding_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputActionDelegateBinding_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUInputActionDelegateBinding(); \
	friend struct ::Z_Construct_UClass_UInputActionDelegateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputActionDelegateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputActionDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputActionDelegateBinding_NoRegister) \
	DECLARE_SERIALIZER(UInputActionDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputActionDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputActionDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputActionDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputActionDelegateBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputActionDelegateBinding(UInputActionDelegateBinding&&) = delete; \
	UInputActionDelegateBinding(const UInputActionDelegateBinding&) = delete; \
	ENGINE_API virtual ~UInputActionDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputActionDelegateBinding;

// ********** End Class UInputActionDelegateBinding ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
