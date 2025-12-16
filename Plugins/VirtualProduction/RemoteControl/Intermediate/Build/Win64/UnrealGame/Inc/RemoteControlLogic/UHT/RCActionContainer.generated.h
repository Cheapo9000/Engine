// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Action/RCActionContainer.h"

#ifdef REMOTECONTROLLOGIC_RCActionContainer_generated_h
#error "RCActionContainer.generated.h already included, missing '#pragma once' in RCActionContainer.h"
#endif
#define REMOTECONTROLLOGIC_RCActionContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCActionContainer *******************************************************
struct Z_Construct_UClass_URCActionContainer_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCActionContainer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCActionContainer(); \
	friend struct ::Z_Construct_UClass_URCActionContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCActionContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(URCActionContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCActionContainer_NoRegister) \
	DECLARE_SERIALIZER(URCActionContainer)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCActionContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCActionContainer(URCActionContainer&&) = delete; \
	URCActionContainer(const URCActionContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCActionContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCActionContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCActionContainer) \
	NO_API virtual ~URCActionContainer();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_30_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCActionContainer;

// ********** End Class URCActionContainer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Action_RCActionContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
