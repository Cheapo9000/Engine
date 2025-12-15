// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputAxisKeyDelegateBinding.h"

#ifdef ENGINE_InputAxisKeyDelegateBinding_generated_h
#error "InputAxisKeyDelegateBinding.generated.h already included, missing '#pragma once' in InputAxisKeyDelegateBinding.h"
#endif
#define ENGINE_InputAxisKeyDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintInputAxisKeyDelegateBinding *****************************
struct Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


struct FBlueprintInputAxisKeyDelegateBinding;
// ********** End ScriptStruct FBlueprintInputAxisKeyDelegateBinding *******************************

// ********** Begin Class UInputAxisKeyDelegateBinding *********************************************
struct Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUInputAxisKeyDelegateBinding(); \
	friend struct ::Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputAxisKeyDelegateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputAxisKeyDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputAxisKeyDelegateBinding_NoRegister) \
	DECLARE_SERIALIZER(UInputAxisKeyDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputAxisKeyDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputAxisKeyDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputAxisKeyDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputAxisKeyDelegateBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputAxisKeyDelegateBinding(UInputAxisKeyDelegateBinding&&) = delete; \
	UInputAxisKeyDelegateBinding(const UInputAxisKeyDelegateBinding&) = delete; \
	ENGINE_API virtual ~UInputAxisKeyDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputAxisKeyDelegateBinding;

// ********** End Class UInputAxisKeyDelegateBinding ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
