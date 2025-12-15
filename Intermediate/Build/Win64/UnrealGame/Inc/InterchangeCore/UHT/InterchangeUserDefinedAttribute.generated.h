// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/InterchangeUserDefinedAttribute.h"

#ifdef INTERCHANGECORE_InterchangeUserDefinedAttribute_generated_h
#error "InterchangeUserDefinedAttribute.generated.h already included, missing '#pragma once' in InterchangeUserDefinedAttribute.h"
#endif
#define INTERCHANGECORE_InterchangeUserDefinedAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNode;
struct FInterchangeUserDefinedAttributeInfo;

// ********** Begin ScriptStruct FInterchangeUserDefinedAttributeInfo ******************************
struct Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics;
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


struct FInterchangeUserDefinedAttributeInfo;
// ********** End ScriptStruct FInterchangeUserDefinedAttributeInfo ********************************

// ********** Begin Class UInterchangeUserDefinedAttributesAPI *************************************
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDuplicateAllUserDefinedAttribute); \
	DECLARE_FUNCTION(execGetUserDefinedAttributeInfos); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_FString); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Int32); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Double); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Float); \
	DECLARE_FUNCTION(execGetUserDefinedAttribute_Boolean); \
	DECLARE_FUNCTION(execRemoveUserDefinedAttribute); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_FString); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Int32); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Double); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Float); \
	DECLARE_FUNCTION(execCreateUserDefinedAttribute_Boolean);


struct Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics;
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeUserDefinedAttributesAPI(); \
	friend struct ::Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGECORE_API UClass* ::Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeUserDefinedAttributesAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), Z_Construct_UClass_UInterchangeUserDefinedAttributesAPI_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeUserDefinedAttributesAPI)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGECORE_API UInterchangeUserDefinedAttributesAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeUserDefinedAttributesAPI(UInterchangeUserDefinedAttributesAPI&&) = delete; \
	UInterchangeUserDefinedAttributesAPI(const UInterchangeUserDefinedAttributesAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeUserDefinedAttributesAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeUserDefinedAttributesAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeUserDefinedAttributesAPI) \
	INTERCHANGECORE_API virtual ~UInterchangeUserDefinedAttributesAPI();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_43_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeUserDefinedAttributesAPI;

// ********** End Class UInterchangeUserDefinedAttributesAPI ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeUserDefinedAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
