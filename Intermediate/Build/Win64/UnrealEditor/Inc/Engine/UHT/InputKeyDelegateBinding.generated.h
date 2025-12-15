// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InputKeyDelegateBinding.h"

#ifdef ENGINE_InputKeyDelegateBinding_generated_h
#error "InputKeyDelegateBinding.generated.h already included, missing '#pragma once' in InputKeyDelegateBinding.h"
#endif
#define ENGINE_InputKeyDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintInputKeyDelegateBinding *********************************
struct Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


struct FBlueprintInputKeyDelegateBinding;
// ********** End ScriptStruct FBlueprintInputKeyDelegateBinding ***********************************

// ********** Begin Class UInputKeyDelegateBinding *************************************************
struct Z_Construct_UClass_UInputKeyDelegateBinding_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUInputKeyDelegateBinding(); \
	friend struct ::Z_Construct_UClass_UInputKeyDelegateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputKeyDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister) \
	DECLARE_SERIALIZER(UInputKeyDelegateBinding)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputKeyDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputKeyDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputKeyDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputKeyDelegateBinding); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputKeyDelegateBinding(UInputKeyDelegateBinding&&) = delete; \
	UInputKeyDelegateBinding(const UInputKeyDelegateBinding&) = delete; \
	ENGINE_API virtual ~UInputKeyDelegateBinding();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputKeyDelegateBinding;

// ********** End Class UInputKeyDelegateBinding ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
