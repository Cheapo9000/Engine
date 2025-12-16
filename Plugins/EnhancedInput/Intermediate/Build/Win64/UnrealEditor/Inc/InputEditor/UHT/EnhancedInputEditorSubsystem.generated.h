// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputEditorSubsystem.h"

#ifdef INPUTEDITOR_EnhancedInputEditorSubsystem_generated_h
#error "EnhancedInputEditorSubsystem.generated.h already included, missing '#pragma once' in EnhancedInputEditorSubsystem.h"
#endif
#define INPUTEDITOR_EnhancedInputEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;

// ********** Begin Class UEnhancedInputEditorSubsystem ********************************************
#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsConsumingInput); \
	DECLARE_FUNCTION(execStopConsumingInput); \
	DECLARE_FUNCTION(execStartConsumingInput); \
	DECLARE_FUNCTION(execPopInputComponent); \
	DECLARE_FUNCTION(execPushInputComponent);


struct Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics;
INPUTEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTEDITOR_API UClass* ::Z_Construct_UClass_UEnhancedInputEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputEditor"), Z_Construct_UClass_UEnhancedInputEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputEditorSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UEnhancedInputEditorSubsystem*>(this); }


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INPUTEDITOR_API UEnhancedInputEditorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputEditorSubsystem(UEnhancedInputEditorSubsystem&&) = delete; \
	UEnhancedInputEditorSubsystem(const UEnhancedInputEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INPUTEDITOR_API, UEnhancedInputEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnhancedInputEditorSubsystem) \
	INPUTEDITOR_API virtual ~UEnhancedInputEditorSubsystem();


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_28_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputEditorSubsystem;

// ********** End Class UEnhancedInputEditorSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
