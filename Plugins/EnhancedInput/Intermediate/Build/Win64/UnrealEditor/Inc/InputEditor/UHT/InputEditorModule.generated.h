// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputEditorModule.h"

#ifdef INPUTEDITOR_InputEditorModule_generated_h
#error "InputEditorModule.generated.h already included, missing '#pragma once' in InputEditorModule.h"
#endif
#define INPUTEDITOR_InputEditorModule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInputMappingContext_Factory *********************************************
struct Z_Construct_UClass_UInputMappingContext_Factory_Statics;
INPUTEDITOR_API UClass* Z_Construct_UClass_UInputMappingContext_Factory_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUInputMappingContext_Factory(); \
	friend struct ::Z_Construct_UClass_UInputMappingContext_Factory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTEDITOR_API UClass* ::Z_Construct_UClass_UInputMappingContext_Factory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputMappingContext_Factory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputEditor"), Z_Construct_UClass_UInputMappingContext_Factory_NoRegister) \
	DECLARE_SERIALIZER(UInputMappingContext_Factory)


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INPUTEDITOR_API UInputMappingContext_Factory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputMappingContext_Factory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INPUTEDITOR_API, UInputMappingContext_Factory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMappingContext_Factory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputMappingContext_Factory(UInputMappingContext_Factory&&) = delete; \
	UInputMappingContext_Factory(const UInputMappingContext_Factory&) = delete; \
	INPUTEDITOR_API virtual ~UInputMappingContext_Factory();


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_60_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_63_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputMappingContext_Factory;

// ********** End Class UInputMappingContext_Factory ***********************************************

// ********** Begin Class UInputAction_Factory *****************************************************
struct Z_Construct_UClass_UInputAction_Factory_Statics;
INPUTEDITOR_API UClass* Z_Construct_UClass_UInputAction_Factory_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUInputAction_Factory(); \
	friend struct ::Z_Construct_UClass_UInputAction_Factory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTEDITOR_API UClass* ::Z_Construct_UClass_UInputAction_Factory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputAction_Factory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputEditor"), Z_Construct_UClass_UInputAction_Factory_NoRegister) \
	DECLARE_SERIALIZER(UInputAction_Factory)


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INPUTEDITOR_API UInputAction_Factory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputAction_Factory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INPUTEDITOR_API, UInputAction_Factory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputAction_Factory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputAction_Factory(UInputAction_Factory&&) = delete; \
	UInputAction_Factory(const UInputAction_Factory&) = delete; \
	INPUTEDITOR_API virtual ~UInputAction_Factory();


#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_81_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_84_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputAction_Factory;

// ********** End Class UInputAction_Factory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
