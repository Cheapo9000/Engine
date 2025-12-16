// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMEditorSubsystem.h"

#ifdef MODELVIEWVIEWMODELEDITOR_MVVMEditorSubsystem_generated_h
#error "MVVMEditorSubsystem.generated.h already included, missing '#pragma once' in MVVMEditorSubsystem.h"
#endif
#define MODELVIEWVIEWMODELEDITOR_MVVMEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UEdGraph;
class UFunction;
class UK2Node_CallFunction;
class UMVVMBlueprintView;
class UMVVMBlueprintViewCondition;
class UMVVMBlueprintViewEvent;
class UObject;
class UWidgetBlueprint;
struct FGuid;
struct FMVVMAvailableBinding;
struct FMVVMBlueprintPropertyPath;
struct FMVVMBlueprintViewBinding;

// ********** Begin Class UMVVMEditorSubsystem *****************************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvailableConversionFunctions); \
	DECLARE_FUNCTION(execGetConversionFunctionNode); \
	DECLARE_FUNCTION(execGetConversionFunction); \
	DECLARE_FUNCTION(execGetConversionFunctionGraph); \
	DECLARE_FUNCTION(execIsSimpleConversionFunction); \
	DECLARE_FUNCTION(execIsValidConversionFunction); \
	DECLARE_FUNCTION(execGetChildViewModels); \
	DECLARE_FUNCTION(execRemoveCondition); \
	DECLARE_FUNCTION(execAddCondition); \
	DECLARE_FUNCTION(execRemoveEvent); \
	DECLARE_FUNCTION(execAddEvent); \
	DECLARE_FUNCTION(execRemoveBinding); \
	DECLARE_FUNCTION(execAddBinding); \
	DECLARE_FUNCTION(execReparentViewModel); \
	DECLARE_FUNCTION(execRenameViewModel); \
	DECLARE_FUNCTION(execVerifyViewModelRename); \
	DECLARE_FUNCTION(execRemoveViewModel); \
	DECLARE_FUNCTION(execAddInstancedViewModel); \
	DECLARE_FUNCTION(execAddViewModel); \
	DECLARE_FUNCTION(execGetView); \
	DECLARE_FUNCTION(execRequestView);


struct Z_Construct_UClass_UMVVMEditorSubsystem_Statics;
MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UMVVMEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODELEDITOR_API UClass* ::Z_Construct_UClass_UMVVMEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModelEditor"), Z_Construct_UClass_UMVVMEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMVVMEditorSubsystem)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODELEDITOR_API UMVVMEditorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMEditorSubsystem(UMVVMEditorSubsystem&&) = delete; \
	UMVVMEditorSubsystem(const UMVVMEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODELEDITOR_API, UMVVMEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMVVMEditorSubsystem) \
	MODELVIEWVIEWMODELEDITOR_API virtual ~UMVVMEditorSubsystem();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMEditorSubsystem;

// ********** End Class UMVVMEditorSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
