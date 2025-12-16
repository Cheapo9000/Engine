// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkRequestProxy.h"

#ifdef DATALINK_DataLinkRequestProxy_generated_h
#error "DataLinkRequestProxy.generated.h already included, missing '#pragma once' in DataLinkRequestProxy.h"
#endif
#define DATALINK_DataLinkRequestProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IDataLinkSinkProvider;
class UDataLinkRequestProxy;
class UObject;
enum class EDataLinkExecutionResult : uint8;
struct FDataLinkInstance;
struct FInstancedStruct;

// ********** Begin Delegate FOnDataLinkOutputDataProxy ********************************************
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h_14_DELEGATE \
DATALINK_API void FOnDataLinkOutputDataProxy_DelegateWrapper(const FMulticastScriptDelegate& OnDataLinkOutputDataProxy, FInstancedStruct const& OutputData, EDataLinkExecutionResult ExecutionResult);


// ********** End Delegate FOnDataLinkOutputDataProxy **********************************************

// ********** Begin Class UDataLinkRequestProxy ****************************************************
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateRequestProxy);


struct Z_Construct_UClass_UDataLinkRequestProxy_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkRequestProxy_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkRequestProxy(); \
	friend struct ::Z_Construct_UClass_UDataLinkRequestProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkRequestProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkRequestProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkRequestProxy_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkRequestProxy)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINK_API UDataLinkRequestProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkRequestProxy(UDataLinkRequestProxy&&) = delete; \
	UDataLinkRequestProxy(const UDataLinkRequestProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkRequestProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkRequestProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkRequestProxy) \
	DATALINK_API virtual ~UDataLinkRequestProxy();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkRequestProxy;

// ********** End Class UDataLinkRequestProxy ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_DataLinkRequestProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
