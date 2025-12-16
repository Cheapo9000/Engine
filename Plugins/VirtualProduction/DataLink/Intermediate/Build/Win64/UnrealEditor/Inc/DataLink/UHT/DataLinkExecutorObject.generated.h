// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkExecutorObject.h"

#ifdef DATALINK_DataLinkExecutorObject_generated_h
#error "DataLinkExecutorObject.generated.h already included, missing '#pragma once' in DataLinkExecutorObject.h"
#endif
#define DATALINK_DataLinkExecutorObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataLinkExecutionResult : uint8;
struct FInstancedStruct;

// ********** Begin Delegate FReceiveDataLinkOutputData ********************************************
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_14_DELEGATE \
DATALINK_API void FReceiveDataLinkOutputData_DelegateWrapper(const FMulticastScriptDelegate& ReceiveDataLinkOutputData, FInstancedStruct OutputData);


// ********** End Delegate FReceiveDataLinkOutputData **********************************************

// ********** Begin Delegate FReceiveDataLinkExecutionFinished *************************************
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_15_DELEGATE \
DATALINK_API void FReceiveDataLinkExecutionFinished_DelegateWrapper(const FMulticastScriptDelegate& ReceiveDataLinkExecutionFinished, EDataLinkExecutionResult Result);


// ********** End Delegate FReceiveDataLinkExecutionFinished ***************************************

// ********** Begin Class UDataLinkExecutorObject **************************************************
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execIsRunning);


struct Z_Construct_UClass_UDataLinkExecutorObject_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkExecutorObject_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkExecutorObject(); \
	friend struct ::Z_Construct_UClass_UDataLinkExecutorObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkExecutorObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkExecutorObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkExecutorObject_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkExecutorObject)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINK_API UDataLinkExecutorObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkExecutorObject(UDataLinkExecutorObject&&) = delete; \
	UDataLinkExecutorObject(const UDataLinkExecutorObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkExecutorObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkExecutorObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkExecutorObject) \
	DATALINK_API virtual ~UDataLinkExecutorObject();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkExecutorObject;

// ********** End Class UDataLinkExecutorObject ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkExecutorObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
