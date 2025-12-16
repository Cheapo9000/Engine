// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/Bind/RCPropertyBindAction.h"

#ifdef REMOTECONTROLLOGIC_RCPropertyBindAction_generated_h
#error "RCPropertyBindAction.generated.h already included, missing '#pragma once' in RCPropertyBindAction.h"
#endif
#define REMOTECONTROLLOGIC_RCPropertyBindAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCPropertyBindAction ****************************************************
struct Z_Construct_UClass_URCPropertyBindAction_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCPropertyBindAction_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCPropertyBindAction(); \
	friend struct ::Z_Construct_UClass_URCPropertyBindAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCPropertyBindAction_NoRegister(); \
public: \
	DECLARE_CLASS2(URCPropertyBindAction, URCPropertyAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCPropertyBindAction_NoRegister) \
	DECLARE_SERIALIZER(URCPropertyBindAction)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCPropertyBindAction(URCPropertyBindAction&&) = delete; \
	URCPropertyBindAction(const URCPropertyBindAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCPropertyBindAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCPropertyBindAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCPropertyBindAction) \
	NO_API virtual ~URCPropertyBindAction();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCPropertyBindAction;

// ********** End Class URCPropertyBindAction ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_Bind_RCPropertyBindAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
