// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Core/Connection/EscalationStates.h"

#ifdef NETCORE_EscalationStates_generated_h
#error "EscalationStates.generated.h already included, missing '#pragma once' in EscalationStates.h"
#endif
#define NETCORE_EscalationStates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEscalationState **************************************************
struct Z_Construct_UScriptStruct_FEscalationState_Statics;
#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEscalationState_Statics; \
	NETCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FStateStruct Super;


struct FEscalationState;
// ********** End ScriptStruct FEscalationState ****************************************************

// ********** Begin Class UEscalationManagerConfig *************************************************
struct Z_Construct_UClass_UEscalationManagerConfig_Statics;
NETCORE_API UClass* Z_Construct_UClass_UEscalationManagerConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEscalationManagerConfig(); \
	friend struct ::Z_Construct_UClass_UEscalationManagerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETCORE_API UClass* ::Z_Construct_UClass_UEscalationManagerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UEscalationManagerConfig, UStatePerObjectConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetCore"), Z_Construct_UClass_UEscalationManagerConfig_NoRegister) \
	DECLARE_SERIALIZER(UEscalationManagerConfig)


#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NETCORE_API UEscalationManagerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEscalationManagerConfig(UEscalationManagerConfig&&) = delete; \
	UEscalationManagerConfig(const UEscalationManagerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETCORE_API, UEscalationManagerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEscalationManagerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEscalationManagerConfig) \
	NETCORE_API virtual ~UEscalationManagerConfig();


#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_754_PROLOG
#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h_757_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEscalationManagerConfig;

// ********** End Class UEscalationManagerConfig ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
