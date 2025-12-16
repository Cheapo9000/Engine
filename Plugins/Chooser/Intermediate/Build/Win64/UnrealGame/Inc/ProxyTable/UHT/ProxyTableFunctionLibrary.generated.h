// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProxyTableFunctionLibrary.h"

#ifdef PROXYTABLE_ProxyTableFunctionLibrary_generated_h
#error "ProxyTableFunctionLibrary.generated.h already included, missing '#pragma once' in ProxyTableFunctionLibrary.h"
#endif
#define PROXYTABLE_ProxyTableFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
class UProxyAsset;
class UProxyTable;
struct FInstancedStruct;

// ********** Begin Class UProxyTableFunctionLibrary ***********************************************
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeLookupProxyWithOverrideTable); \
	DECLARE_FUNCTION(execMakeLookupProxy); \
	DECLARE_FUNCTION(execEvaluateProxyAsset); \
	DECLARE_FUNCTION(execEvaluateProxyTable);


struct Z_Construct_UClass_UProxyTableFunctionLibrary_Statics;
PROXYTABLE_API UClass* Z_Construct_UClass_UProxyTableFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyTableFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UProxyTableFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROXYTABLE_API UClass* ::Z_Construct_UClass_UProxyTableFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProxyTable"), Z_Construct_UClass_UProxyTableFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UProxyTableFunctionLibrary)


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROXYTABLE_API UProxyTableFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyTableFunctionLibrary(UProxyTableFunctionLibrary&&) = delete; \
	UProxyTableFunctionLibrary(const UProxyTableFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROXYTABLE_API, UProxyTableFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyTableFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyTableFunctionLibrary) \
	PROXYTABLE_API virtual ~UProxyTableFunctionLibrary();


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyTableFunctionLibrary;

// ********** End Class UProxyTableFunctionLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
