// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProxyTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROXYTABLE_ProxyTable_generated_h
#error "ProxyTable.generated.h already included, missing '#pragma once' in ProxyTable.h"
#endif
#define PROXYTABLE_ProxyTable_generated_h

#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProxyStructOutput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PROXYTABLE_API UScriptStruct* StaticStruct<struct FProxyStructOutput>();

#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProxyEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PROXYTABLE_API UScriptStruct* StaticStruct<struct FProxyEntry>();

#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PROXYTABLE_API UScriptStruct* StaticStruct<struct FRuntimeProxyValue>();

#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUProxyTable(); \
	friend struct Z_Construct_UClass_UProxyTable_Statics; \
public: \
	DECLARE_CLASS(UProxyTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProxyTable"), NO_API) \
	DECLARE_SERIALIZER(UProxyTable)


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyTable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProxyTable(UProxyTable&&); \
	UProxyTable(const UProxyTable&); \
public: \
	NO_API virtual ~UProxyTable();


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_72_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_75_INCLASS \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROXYTABLE_API UClass* StaticClass<class UProxyTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
