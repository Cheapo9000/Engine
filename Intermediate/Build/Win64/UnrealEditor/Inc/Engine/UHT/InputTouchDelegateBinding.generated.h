// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputTouchDelegateBinding.h"

#ifdef ENGINE_InputTouchDelegateBinding_generated_h
#error "InputTouchDelegateBinding.generated.h already included, missing '#pragma once' in InputTouchDelegateBinding.h"
#endif
#define ENGINE_InputTouchDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintInputTouchDelegateBinding *******************************
struct Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


struct FBlueprintInputTouchDelegateBinding;
// ********** End ScriptStruct FBlueprintInputTouchDelegateBinding *********************************

// ********** Begin Class UInputTouchDelegateBinding ***********************************************
struct Z_Construct_UClass_UInputTouchDelegateBinding_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUInputTouchDelegateBinding(); \
	friend struct ::Z_Construct_UClass_UInputTouchDelegateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTouchDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister) \
	DECLARE_SERIALIZER(UInputTouchDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputTouchDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTouchDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputTouchDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTouchDelegateBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTouchDelegateBinding(UInputTouchDelegateBinding&&) = delete; \
	UInputTouchDelegateBinding(const UInputTouchDelegateBinding&) = delete; \
	ENGINE_API virtual ~UInputTouchDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_33_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTouchDelegateBinding;

// ********** End Class UInputTouchDelegateBinding *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
