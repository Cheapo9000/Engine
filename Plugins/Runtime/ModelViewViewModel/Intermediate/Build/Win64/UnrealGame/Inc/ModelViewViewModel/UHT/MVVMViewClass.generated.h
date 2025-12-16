// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "View/MVVMViewClass.h"

#ifdef MODELVIEWVIEWMODEL_MVVMViewClass_generated_h
#error "MVVMViewClass.generated.h already included, missing '#pragma once' in MVVMViewClass.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMViewClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMVVMViewClass_SourceBinding **************************************
struct Z_Construct_UScriptStruct_FMVVMViewClass_SourceBinding_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMViewClass_SourceBinding_Statics; \
	MODELVIEWVIEWMODEL_API static class UScriptStruct* StaticStruct();


struct FMVVMViewClass_SourceBinding;
// ********** End ScriptStruct FMVVMViewClass_SourceBinding ****************************************

// ********** Begin ScriptStruct FMVVMViewClass_SourceCondition ************************************
struct Z_Construct_UScriptStruct_FMVVMViewClass_SourceCondition_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMViewClass_SourceCondition_Statics; \
	MODELVIEWVIEWMODEL_API static class UScriptStruct* StaticStruct();


struct FMVVMViewClass_SourceCondition;
// ********** End ScriptStruct FMVVMViewClass_SourceCondition **************************************

// ********** Begin ScriptStruct FMVVMViewClass_Binding ********************************************
struct Z_Construct_UScriptStruct_FMVVMViewClass_Binding_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMViewClass_Binding_Statics; \
	MODELVIEWVIEWMODEL_API static class UScriptStruct* StaticStruct();


struct FMVVMViewClass_Binding;
// ********** End ScriptStruct FMVVMViewClass_Binding **********************************************

// ********** Begin ScriptStruct FMVVMViewClass_EvaluateSource *************************************
struct Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateSource_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_214_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateSource_Statics; \
	MODELVIEWVIEWMODEL_API static class UScriptStruct* StaticStruct();


struct FMVVMViewClass_EvaluateSource;
// ********** End ScriptStruct FMVVMViewClass_EvaluateSource ***************************************

// ********** Begin ScriptStruct FMVVMViewClass_Source *********************************************
struct Z_Construct_UScriptStruct_FMVVMViewClass_Source_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_268_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMViewClass_Source_Statics; \
	MODELVIEWVIEWMODEL_API static class UScriptStruct* StaticStruct();


struct FMVVMViewClass_Source;
// ********** End ScriptStruct FMVVMViewClass_Source ***********************************************

// ********** Begin ScriptStruct FMVVMViewClass_Event **********************************************
struct Z_Construct_UScriptStruct_FMVVMViewClass_Event_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_478_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMViewClass_Event_Statics; \
	MODELVIEWVIEWMODEL_API static class UScriptStruct* StaticStruct();


struct FMVVMViewClass_Event;
// ********** End ScriptStruct FMVVMViewClass_Event ************************************************

// ********** Begin ScriptStruct FMVVMViewClass_Condition ******************************************
struct Z_Construct_UScriptStruct_FMVVMViewClass_Condition_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_546_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMViewClass_Condition_Statics; \
	MODELVIEWVIEWMODEL_API static class UScriptStruct* StaticStruct();


struct FMVVMViewClass_Condition;
// ********** End ScriptStruct FMVVMViewClass_Condition ********************************************

// ********** Begin Class UMVVMViewClass ***********************************************************
struct Z_Construct_UClass_UMVVMViewClass_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewClass_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_606_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMViewClass(); \
	friend struct ::Z_Construct_UClass_UMVVMViewClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMViewClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMViewClass, UWidgetBlueprintGeneratedClassExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMViewClass_NoRegister) \
	DECLARE_SERIALIZER(UMVVMViewClass)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_606_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODEL_API UMVVMViewClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMViewClass(UMVVMViewClass&&) = delete; \
	UMVVMViewClass(const UMVVMViewClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODEL_API, UMVVMViewClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMViewClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMViewClass) \
	MODELVIEWVIEWMODEL_API virtual ~UMVVMViewClass();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_603_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_606_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_606_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_606_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMViewClass;

// ********** End Class UMVVMViewClass *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
