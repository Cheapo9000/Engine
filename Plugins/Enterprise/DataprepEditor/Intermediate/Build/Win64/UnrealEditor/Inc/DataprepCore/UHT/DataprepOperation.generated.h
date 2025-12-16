// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepOperation.h"

#ifdef DATAPREPCORE_DataprepOperation_generated_h
#error "DataprepOperation.generated.h already included, missing '#pragma once' in DataprepOperation.h"
#endif
#define DATAPREPCORE_DataprepOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
struct FDataprepContext;

// ********** Begin ScriptStruct FDataprepContext **************************************************
struct Z_Construct_UScriptStruct_FDataprepContext_Statics;
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataprepContext_Statics; \
	DATAPREPCORE_API static class UScriptStruct* StaticStruct();


struct FDataprepContext;
// ********** End ScriptStruct FDataprepContext ****************************************************

// ********** Begin Class UDataprepOperation *******************************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetTooltip); \
	DECLARE_FUNCTION(execGetDisplayOperationName); \
	DECLARE_FUNCTION(execAssetsModified); \
	DECLARE_FUNCTION(execReportProgress); \
	DECLARE_FUNCTION(execEndWork); \
	DECLARE_FUNCTION(execBeginWork); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execLogWarning); \
	DECLARE_FUNCTION(execLogInfo); \
	DECLARE_FUNCTION(execOnExecution); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_139_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataprepOperation_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepOperation_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepOperation(); \
	friend struct ::Z_Construct_UClass_UDataprepOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepOperation, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepOperation_NoRegister) \
	DECLARE_SERIALIZER(UDataprepOperation)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepOperation(UDataprepOperation&&) = delete; \
	UDataprepOperation(const UDataprepOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepOperation); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepOperation) \
	NO_API virtual ~UDataprepOperation();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_136_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_139_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_139_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_139_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepOperation;

// ********** End Class UDataprepOperation *********************************************************

// ********** Begin Class UDataprepEditingOperation ************************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteObjects); \
	DECLARE_FUNCTION(execDeleteObject); \
	DECLARE_FUNCTION(execRemoveObjects); \
	DECLARE_FUNCTION(execRemoveObject); \
	DECLARE_FUNCTION(execCreateActor); \
	DECLARE_FUNCTION(execCreateAsset); \
	DECLARE_FUNCTION(execAddAsset);


struct Z_Construct_UClass_UDataprepEditingOperation_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepEditingOperation_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepEditingOperation(); \
	friend struct ::Z_Construct_UClass_UDataprepEditingOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepEditingOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepEditingOperation, UDataprepOperation, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepEditingOperation_NoRegister) \
	DECLARE_SERIALIZER(UDataprepEditingOperation)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_284_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepEditingOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepEditingOperation(UDataprepEditingOperation&&) = delete; \
	UDataprepEditingOperation(const UDataprepEditingOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepEditingOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepEditingOperation); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepEditingOperation) \
	NO_API virtual ~UDataprepEditingOperation();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_281_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_284_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepEditingOperation;

// ********** End Class UDataprepEditingOperation **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
