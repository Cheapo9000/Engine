// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/RCControllerContainer.h"

#ifdef REMOTECONTROLLOGIC_RCControllerContainer_generated_h
#error "RCControllerContainer.generated.h already included, missing '#pragma once' in RCControllerContainer.h"
#endif
#define REMOTECONTROLLOGIC_RCControllerContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCControllerContainer ***************************************************
struct Z_Construct_UClass_URCControllerContainer_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCControllerContainer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCControllerContainer(); \
	friend struct ::Z_Construct_UClass_URCControllerContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCControllerContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(URCControllerContainer, URCVirtualPropertyContainerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCControllerContainer_NoRegister) \
	DECLARE_SERIALIZER(URCControllerContainer)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCControllerContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCControllerContainer(URCControllerContainer&&) = delete; \
	URCControllerContainer(const URCControllerContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCControllerContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCControllerContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCControllerContainer) \
	NO_API virtual ~URCControllerContainer();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCControllerContainer;

// ********** End Class URCControllerContainer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
