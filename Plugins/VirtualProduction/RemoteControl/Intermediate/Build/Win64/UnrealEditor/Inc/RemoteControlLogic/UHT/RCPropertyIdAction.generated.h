// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/RCPropertyIdAction.h"

#ifdef REMOTECONTROLLOGIC_RCPropertyIdAction_generated_h
#error "RCPropertyIdAction.generated.h already included, missing '#pragma once' in RCPropertyIdAction.h"
#endif
#define REMOTECONTROLLOGIC_RCPropertyIdAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyIdContainerKey *******************************************
struct Z_Construct_UScriptStruct_FPropertyIdContainerKey_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyIdAction_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyIdContainerKey_Statics; \
	REMOTECONTROLLOGIC_API static class UScriptStruct* StaticStruct();


struct FPropertyIdContainerKey;
// ********** End ScriptStruct FPropertyIdContainerKey *********************************************

// ********** Begin Class URCPropertyIdAction ******************************************************
struct Z_Construct_UClass_URCPropertyIdAction_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCPropertyIdAction_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyIdAction_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCPropertyIdAction(); \
	friend struct ::Z_Construct_UClass_URCPropertyIdAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCPropertyIdAction_NoRegister(); \
public: \
	DECLARE_CLASS2(URCPropertyIdAction, URCAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCPropertyIdAction_NoRegister) \
	DECLARE_SERIALIZER(URCPropertyIdAction)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyIdAction_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCPropertyIdAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCPropertyIdAction(URCPropertyIdAction&&) = delete; \
	URCPropertyIdAction(const URCPropertyIdAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCPropertyIdAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCPropertyIdAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCPropertyIdAction)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyIdAction_h_55_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyIdAction_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyIdAction_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyIdAction_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCPropertyIdAction;

// ********** End Class URCPropertyIdAction ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyIdAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
