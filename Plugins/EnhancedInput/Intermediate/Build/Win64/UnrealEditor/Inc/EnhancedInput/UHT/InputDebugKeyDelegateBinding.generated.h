// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputDebugKeyDelegateBinding.h"

#ifdef ENHANCEDINPUT_InputDebugKeyDelegateBinding_generated_h
#error "InputDebugKeyDelegateBinding.generated.h already included, missing '#pragma once' in InputDebugKeyDelegateBinding.h"
#endif
#define ENHANCEDINPUT_InputDebugKeyDelegateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintInputDebugKeyDelegateBinding ****************************
struct Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FBlueprintInputDebugKeyDelegateBinding;
// ********** End ScriptStruct FBlueprintInputDebugKeyDelegateBinding ******************************

// ********** Begin Class UInputDebugKeyDelegateBinding ********************************************
struct Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputDebugKeyDelegateBinding_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDebugKeyDelegateBinding(); \
	friend struct ::Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputDebugKeyDelegateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputDebugKeyDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputDebugKeyDelegateBinding_NoRegister) \
	DECLARE_SERIALIZER(UInputDebugKeyDelegateBinding)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputDebugKeyDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputDebugKeyDelegateBinding(UInputDebugKeyDelegateBinding&&) = delete; \
	UInputDebugKeyDelegateBinding(const UInputDebugKeyDelegateBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputDebugKeyDelegateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDebugKeyDelegateBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDebugKeyDelegateBinding) \
	ENHANCEDINPUT_API virtual ~UInputDebugKeyDelegateBinding();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_34_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputDebugKeyDelegateBinding;

// ********** End Class UInputDebugKeyDelegateBinding **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
