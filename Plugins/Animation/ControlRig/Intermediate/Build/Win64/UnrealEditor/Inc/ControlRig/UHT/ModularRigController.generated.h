// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularRigController.h"

#ifdef CONTROLRIG_ModularRigController_generated_h
#error "ModularRigController.generated.h already included, missing '#pragma once' in ModularRigController.h"
#endif
#define CONTROLRIG_ModularRigController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UControlRig;
struct FRigElementKey;
struct FRigModuleReference;
struct FRigVMMirrorSettings;

// ********** Begin Class UModularRigController ****************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetConnectorsForModule); \
	DECLARE_FUNCTION(execGetModuleReference); \
	DECLARE_FUNCTION(execImportModuleSettingsFromString); \
	DECLARE_FUNCTION(execExportModuleSettingsToString); \
	DECLARE_FUNCTION(execGetSelectedModules); \
	DECLARE_FUNCTION(execGetAllModules); \
	DECLARE_FUNCTION(execSetModuleSelection); \
	DECLARE_FUNCTION(execDeselectModule); \
	DECLARE_FUNCTION(execSelectModule); \
	DECLARE_FUNCTION(execSwapModulesOfClass); \
	DECLARE_FUNCTION(execSwapModuleClass); \
	DECLARE_FUNCTION(execMirrorModule); \
	DECLARE_FUNCTION(execReorderModule); \
	DECLARE_FUNCTION(execReparentModule); \
	DECLARE_FUNCTION(execRenameModule); \
	DECLARE_FUNCTION(execDeleteModule); \
	DECLARE_FUNCTION(execUnBindModuleVariable); \
	DECLARE_FUNCTION(execBindModuleVariable); \
	DECLARE_FUNCTION(execResetConfigValueInModule); \
	DECLARE_FUNCTION(execSetConfigValueInModule); \
	DECLARE_FUNCTION(execAutoConnectModules); \
	DECLARE_FUNCTION(execAutoConnectSecondaryConnectors); \
	DECLARE_FUNCTION(execDisconnectCyclicConnectors); \
	DECLARE_FUNCTION(execDisconnectConnector); \
	DECLARE_FUNCTION(execAddTargetToArrayConnector); \
	DECLARE_FUNCTION(execConnectConnectorToElements); \
	DECLARE_FUNCTION(execConnectConnectorToElement); \
	DECLARE_FUNCTION(execCanConnectConnectorToElements); \
	DECLARE_FUNCTION(execCanConnectConnectorToElement); \
	DECLARE_FUNCTION(execAddModule);


struct Z_Construct_UClass_UModularRigController_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UModularRigController_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUModularRigController(); \
	friend struct ::Z_Construct_UClass_UModularRigController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UModularRigController_NoRegister(); \
public: \
	DECLARE_CLASS2(UModularRigController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UModularRigController_NoRegister) \
	DECLARE_SERIALIZER(UModularRigController)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UModularRigController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularRigController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UModularRigController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularRigController); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularRigController(UModularRigController&&) = delete; \
	UModularRigController(const UModularRigController&) = delete; \
	CONTROLRIG_API virtual ~UModularRigController();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_16_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_19_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularRigController;

// ********** End Class UModularRigController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
