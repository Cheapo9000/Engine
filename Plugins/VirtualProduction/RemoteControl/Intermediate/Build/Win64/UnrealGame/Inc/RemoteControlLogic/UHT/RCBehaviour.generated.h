// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviour/RCBehaviour.h"

#ifdef REMOTECONTROLLOGIC_RCBehaviour_generated_h
#error "RCBehaviour.generated.h already included, missing '#pragma once' in RCBehaviour.h"
#endif
#define REMOTECONTROLLOGIC_RCBehaviour_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCBehaviour *************************************************************
struct Z_Construct_UClass_URCBehaviour_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCBehaviour(); \
	friend struct ::Z_Construct_UClass_URCBehaviour_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCBehaviour_NoRegister(); \
public: \
	DECLARE_CLASS2(URCBehaviour, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCBehaviour_NoRegister) \
	DECLARE_SERIALIZER(URCBehaviour)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCBehaviour(URCBehaviour&&) = delete; \
	URCBehaviour(const URCBehaviour&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCBehaviour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCBehaviour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCBehaviour) \
	NO_API virtual ~URCBehaviour();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCBehaviour;

// ********** End Class URCBehaviour ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_RCBehaviour_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
