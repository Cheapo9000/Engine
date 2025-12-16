// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Script/DataLinkScriptNodeWrapper.h"

#ifdef DATALINK_DataLinkScriptNodeWrapper_generated_h
#error "DataLinkScriptNodeWrapper.generated.h already included, missing '#pragma once' in DataLinkScriptNodeWrapper.h"
#endif
#define DATALINK_DataLinkScriptNodeWrapper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataLinkScriptNodeInstance ***************************************
struct Z_Construct_UScriptStruct_FDataLinkScriptNodeInstance_Statics;
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNodeWrapper_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataLinkScriptNodeInstance_Statics; \
	DATALINK_API static class UScriptStruct* StaticStruct();


struct FDataLinkScriptNodeInstance;
// ********** End ScriptStruct FDataLinkScriptNodeInstance *****************************************

// ********** Begin Class UDataLinkScriptNodeWrapper ***********************************************
struct Z_Construct_UClass_UDataLinkScriptNodeWrapper_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkScriptNodeWrapper_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNodeWrapper_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkScriptNodeWrapper(); \
	friend struct ::Z_Construct_UClass_UDataLinkScriptNodeWrapper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkScriptNodeWrapper_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkScriptNodeWrapper, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkScriptNodeWrapper_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkScriptNodeWrapper)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNodeWrapper_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkScriptNodeWrapper(UDataLinkScriptNodeWrapper&&) = delete; \
	UDataLinkScriptNodeWrapper(const UDataLinkScriptNodeWrapper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkScriptNodeWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkScriptNodeWrapper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLinkScriptNodeWrapper) \
	DATALINK_API virtual ~UDataLinkScriptNodeWrapper();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNodeWrapper_h_29_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNodeWrapper_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNodeWrapper_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNodeWrapper_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkScriptNodeWrapper;

// ********** End Class UDataLinkScriptNodeWrapper *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNodeWrapper_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
