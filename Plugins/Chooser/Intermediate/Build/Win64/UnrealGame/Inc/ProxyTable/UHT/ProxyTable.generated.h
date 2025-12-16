// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProxyTable.h"

#ifdef PROXYTABLE_ProxyTable_generated_h
#error "ProxyTable.generated.h already included, missing '#pragma once' in ProxyTable.h"
#endif
#define PROXYTABLE_ProxyTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FProxyStructOutput ************************************************
struct Z_Construct_UScriptStruct_FProxyStructOutput_Statics;
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProxyStructOutput_Statics; \
	PROXYTABLE_API static class UScriptStruct* StaticStruct();


struct FProxyStructOutput;
// ********** End ScriptStruct FProxyStructOutput **************************************************

// ********** Begin ScriptStruct FProxyEntry *******************************************************
struct Z_Construct_UScriptStruct_FProxyEntry_Statics;
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProxyEntry_Statics; \
	PROXYTABLE_API static class UScriptStruct* StaticStruct();


struct FProxyEntry;
// ********** End ScriptStruct FProxyEntry *********************************************************

// ********** Begin ScriptStruct FRuntimeProxyValue ************************************************
struct Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics;
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics; \
	PROXYTABLE_API static class UScriptStruct* StaticStruct();


struct FRuntimeProxyValue;
// ********** End ScriptStruct FRuntimeProxyValue **************************************************

// ********** Begin Class UProxyTable **************************************************************
struct Z_Construct_UClass_UProxyTable_Statics;
PROXYTABLE_API UClass* Z_Construct_UClass_UProxyTable_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUProxyTable(); \
	friend struct ::Z_Construct_UClass_UProxyTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROXYTABLE_API UClass* ::Z_Construct_UClass_UProxyTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProxyTable"), Z_Construct_UClass_UProxyTable_NoRegister) \
	DECLARE_SERIALIZER(UProxyTable)


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROXYTABLE_API UProxyTable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROXYTABLE_API, UProxyTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyTable(UProxyTable&&) = delete; \
	UProxyTable(const UProxyTable&) = delete; \
	PROXYTABLE_API virtual ~UProxyTable();


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_74_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_77_INCLASS \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyTable;

// ********** End Class UProxyTable ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
