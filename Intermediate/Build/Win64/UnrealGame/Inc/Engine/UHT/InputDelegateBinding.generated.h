// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputDelegateBinding.h"

#ifdef ENGINE_InputDelegateBinding_generated_h
#error "InputDelegateBinding.generated.h already included, missing '#pragma once' in InputDelegateBinding.h"
#endif
#define ENGINE_InputDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintInputDelegateBinding ************************************
struct Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlueprintInputDelegateBinding;
// ********** End ScriptStruct FBlueprintInputDelegateBinding **************************************

// ********** Begin Class UInputDelegateBinding ****************************************************
struct Z_Construct_UClass_UInputDelegateBinding_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUInputDelegateBinding(); \
	friend struct ::Z_Construct_UClass_UInputDelegateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputDelegateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputDelegateBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputDelegateBinding_NoRegister) \
	DECLARE_SERIALIZER(UInputDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDelegateBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputDelegateBinding(UInputDelegateBinding&&) = delete; \
	UInputDelegateBinding(const UInputDelegateBinding&) = delete; \
	ENGINE_API virtual ~UInputDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_34_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputDelegateBinding;

// ********** End Class UInputDelegateBinding ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
