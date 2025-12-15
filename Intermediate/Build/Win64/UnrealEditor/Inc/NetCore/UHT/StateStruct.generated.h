// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Core/Connection/StateStruct.h"

#ifdef NETCORE_StateStruct_generated_h
#error "StateStruct.generated.h already included, missing '#pragma once' in StateStruct.h"
#endif
#define NETCORE_StateStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStateStruct ******************************************************
struct Z_Construct_UScriptStruct_FStateStruct_Statics;
#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateStruct_Statics; \
	NETCORE_API static class UScriptStruct* StaticStruct();


struct FStateStruct;
// ********** End ScriptStruct FStateStruct ********************************************************

// ********** Begin Class UStatePerObjectConfig ****************************************************
struct Z_Construct_UClass_UStatePerObjectConfig_Statics;
NETCORE_API UClass* Z_Construct_UClass_UStatePerObjectConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatePerObjectConfig(); \
	friend struct ::Z_Construct_UClass_UStatePerObjectConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCORE_API UClass* ::Z_Construct_UClass_UStatePerObjectConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatePerObjectConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetCore"), Z_Construct_UClass_UStatePerObjectConfig_NoRegister) \
	DECLARE_SERIALIZER(UStatePerObjectConfig)


#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_206_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NETCORE_API UStatePerObjectConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatePerObjectConfig(UStatePerObjectConfig&&) = delete; \
	UStatePerObjectConfig(const UStatePerObjectConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETCORE_API, UStatePerObjectConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatePerObjectConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatePerObjectConfig) \
	NETCORE_API virtual ~UStatePerObjectConfig();


#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_203_PROLOG
#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_206_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatePerObjectConfig;

// ********** End Class UStatePerObjectConfig ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
