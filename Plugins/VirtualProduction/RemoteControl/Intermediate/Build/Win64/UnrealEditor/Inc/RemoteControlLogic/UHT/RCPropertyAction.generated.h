// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/RCPropertyAction.h"

#ifdef REMOTECONTROLLOGIC_RCPropertyAction_generated_h
#error "RCPropertyAction.generated.h already included, missing '#pragma once' in RCPropertyAction.h"
#endif
#define REMOTECONTROLLOGIC_RCPropertyAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCPropertyAction ********************************************************
struct Z_Construct_UClass_URCPropertyAction_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCPropertyAction_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCPropertyAction(); \
	friend struct ::Z_Construct_UClass_URCPropertyAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCPropertyAction_NoRegister(); \
public: \
	DECLARE_CLASS2(URCPropertyAction, URCAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCPropertyAction_NoRegister) \
	DECLARE_SERIALIZER(URCPropertyAction)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCPropertyAction(URCPropertyAction&&) = delete; \
	URCPropertyAction(const URCPropertyAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCPropertyAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCPropertyAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCPropertyAction) \
	NO_API virtual ~URCPropertyAction();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCPropertyAction;

// ********** End Class URCPropertyAction **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCPropertyAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
