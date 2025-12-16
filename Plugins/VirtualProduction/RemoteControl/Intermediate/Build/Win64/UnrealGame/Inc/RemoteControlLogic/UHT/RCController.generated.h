// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/RCController.h"

#ifdef REMOTECONTROLLOGIC_RCController_generated_h
#error "RCController.generated.h already included, missing '#pragma once' in RCController.h"
#endif
#define REMOTECONTROLLOGIC_RCController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URCController ************************************************************
struct Z_Construct_UClass_URCController_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCController_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCController(); \
	friend struct ::Z_Construct_UClass_URCController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URCController_NoRegister(); \
public: \
	DECLARE_CLASS2(URCController, URCVirtualPropertyInContainer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URCController_NoRegister) \
	DECLARE_SERIALIZER(URCController)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCController(URCController&&) = delete; \
	URCController(const URCController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCController) \
	NO_API virtual ~URCController();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCController;

// ********** End Class URCController **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
