// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/RCFunctionAction.h"

#ifdef REMOTECONTROLLOGIC_RCFunctionAction_generated_h
#error "RCFunctionAction.generated.h already included, missing '#pragma once' in RCFunctionAction.h"
#endif
#define REMOTECONTROLLOGIC_RCFunctionAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCFunctionAction ********************************************************
struct Z_Construct_UClass_URCFunctionAction_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCFunctionAction_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCFunctionAction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCFunctionAction(); \
	friend struct ::Z_Construct_UClass_URCFunctionAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCFunctionAction_NoRegister(); \
public: \
	DECLARE_CLASS2(URCFunctionAction, URCAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCFunctionAction_NoRegister) \
	DECLARE_SERIALIZER(URCFunctionAction)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCFunctionAction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCFunctionAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCFunctionAction(URCFunctionAction&&) = delete; \
	URCFunctionAction(const URCFunctionAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCFunctionAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCFunctionAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCFunctionAction) \
	NO_API virtual ~URCFunctionAction();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCFunctionAction_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCFunctionAction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCFunctionAction_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCFunctionAction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCFunctionAction;

// ********** End Class URCFunctionAction **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCFunctionAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
