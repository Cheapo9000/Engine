// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "View/MVVMView.h"

#ifdef MODELVIEWVIEWMODEL_MVVMView_generated_h
#error "MVVMView.generated.h already included, missing '#pragma once' in MVVMView.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class INotifyFieldValueChanged;

// ********** Begin ScriptStruct FMVVMView_Source **************************************************
struct Z_Construct_UScriptStruct_FMVVMView_Source_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMView_Source_Statics; \
	MODELVIEWVIEWMODEL_API static class UScriptStruct* StaticStruct();


struct FMVVMView_Source;
// ********** End ScriptStruct FMVVMView_Source ****************************************************

// ********** Begin Class UMVVMView ****************************************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAreSourcesValidForBinding); \
	DECLARE_FUNCTION(execAreSourcesValidForEvent); \
	DECLARE_FUNCTION(execExecuteViewModelBindings); \
	DECLARE_FUNCTION(execSetViewModelByClass); \
	DECLARE_FUNCTION(execSetViewModel); \
	DECLARE_FUNCTION(execGetViewModel); \
	DECLARE_FUNCTION(execAreEventsInitialized); \
	DECLARE_FUNCTION(execUninitializeEvents); \
	DECLARE_FUNCTION(execInitializeEvents); \
	DECLARE_FUNCTION(execAreBindingsInitialized); \
	DECLARE_FUNCTION(execUninitializeBindings); \
	DECLARE_FUNCTION(execInitializeBindings); \
	DECLARE_FUNCTION(execAreSourcesInitialized); \
	DECLARE_FUNCTION(execUninitializeSources); \
	DECLARE_FUNCTION(execInitializeSources);


struct Z_Construct_UClass_UMVVMView_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMView_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMView(); \
	friend struct ::Z_Construct_UClass_UMVVMView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMView_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMView, UUserWidgetExtension, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMView_NoRegister) \
	DECLARE_SERIALIZER(UMVVMView)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODEL_API UMVVMView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMView(UMVVMView&&) = delete; \
	UMVVMView(const UMVVMView&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODEL_API, UMVVMView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMView) \
	MODELVIEWVIEWMODEL_API virtual ~UMVVMView();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_67_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMView;

// ********** End Class UMVVMView ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
