// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/RCAction.h"

#ifdef REMOTECONTROLLOGIC_RCAction_generated_h
#error "RCAction.generated.h already included, missing '#pragma once' in RCAction.h"
#endif
#define REMOTECONTROLLOGIC_RCAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCAction ****************************************************************
struct Z_Construct_UClass_URCAction_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCAction_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCAction(); \
	friend struct ::Z_Construct_UClass_URCAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCAction_NoRegister(); \
public: \
	DECLARE_CLASS2(URCAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCAction_NoRegister) \
	DECLARE_SERIALIZER(URCAction)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCAction(URCAction&&) = delete; \
	URCAction(const URCAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCAction) \
	NO_API virtual ~URCAction();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCAction;

// ********** End Class URCAction ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
