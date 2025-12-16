// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/String/DataLinkReplaceString.h"

#ifdef DATALINK_DataLinkReplaceString_generated_h
#error "DataLinkReplaceString.generated.h already included, missing '#pragma once' in DataLinkReplaceString.h"
#endif
#define DATALINK_DataLinkReplaceString_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataLinkReplaceStringEntry ***************************************
struct Z_Construct_UScriptStruct_FDataLinkReplaceStringEntry_Statics;
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkReplaceString_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataLinkReplaceStringEntry_Statics; \
	DATALINK_API static class UScriptStruct* StaticStruct();


struct FDataLinkReplaceStringEntry;
// ********** End ScriptStruct FDataLinkReplaceStringEntry *****************************************

// ********** Begin ScriptStruct FDataLinkReplaceStringSettings ************************************
struct Z_Construct_UScriptStruct_FDataLinkReplaceStringSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkReplaceString_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataLinkReplaceStringSettings_Statics; \
	DATALINK_API static class UScriptStruct* StaticStruct();


struct FDataLinkReplaceStringSettings;
// ********** End ScriptStruct FDataLinkReplaceStringSettings **************************************

// ********** Begin Class UDataLinkReplaceString ***************************************************
struct Z_Construct_UClass_UDataLinkReplaceString_Statics;
DATALINK_API UClass* Z_Construct_UClass_UDataLinkReplaceString_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkReplaceString_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkReplaceString(); \
	friend struct ::Z_Construct_UClass_UDataLinkReplaceString_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkReplaceString_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkReplaceString, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkReplaceString_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkReplaceString)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkReplaceString_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINK_API UDataLinkReplaceString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkReplaceString(UDataLinkReplaceString&&) = delete; \
	UDataLinkReplaceString(const UDataLinkReplaceString&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkReplaceString); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkReplaceString); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkReplaceString) \
	DATALINK_API virtual ~UDataLinkReplaceString();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkReplaceString_h_40_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkReplaceString_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkReplaceString_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkReplaceString_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkReplaceString;

// ********** End Class UDataLinkReplaceString *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_String_DataLinkReplaceString_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
