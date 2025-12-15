// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputAxisDelegateBinding.h"

#ifdef ENGINE_InputAxisDelegateBinding_generated_h
#error "InputAxisDelegateBinding.generated.h already included, missing '#pragma once' in InputAxisDelegateBinding.h"
#endif
#define ENGINE_InputAxisDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintInputAxisDelegateBinding ********************************
struct Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


struct FBlueprintInputAxisDelegateBinding;
// ********** End ScriptStruct FBlueprintInputAxisDelegateBinding **********************************

// ********** Begin Class UInputAxisDelegateBinding ************************************************
struct Z_Construct_UClass_UInputAxisDelegateBinding_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputAxisDelegateBinding_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUInputAxisDelegateBinding(); \
	friend struct ::Z_Construct_UClass_UInputAxisDelegateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputAxisDelegateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputAxisDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputAxisDelegateBinding_NoRegister) \
	DECLARE_SERIALIZER(UInputAxisDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputAxisDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputAxisDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputAxisDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputAxisDelegateBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputAxisDelegateBinding(UInputAxisDelegateBinding&&) = delete; \
	UInputAxisDelegateBinding(const UInputAxisDelegateBinding&) = delete; \
	ENGINE_API virtual ~UInputAxisDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputAxisDelegateBinding;

// ********** End Class UInputAxisDelegateBinding **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
