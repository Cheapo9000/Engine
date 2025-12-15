// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsSettings.h"

#ifdef ENGINE_PhysicsSettings_generated_h
#error "PhysicsSettings.generated.h already included, missing '#pragma once' in PhysicsSettings.h"
#endif
#define ENGINE_PhysicsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPhysicalSurfaceName **********************************************
struct Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPhysicalSurfaceName;
// ********** End ScriptStruct FPhysicalSurfaceName ************************************************

// ********** Begin ScriptStruct FChaosPhysicsSettings *********************************************
struct Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosPhysicsSettings;
// ********** End ScriptStruct FChaosPhysicsSettings ***********************************************

// ********** Begin ScriptStruct FPhysicsReplicationResimulationSettings ***************************
struct Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsReplicationResimulationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPhysicsReplicationResimulationSettings;
// ********** End ScriptStruct FPhysicsReplicationResimulationSettings *****************************

// ********** Begin ScriptStruct FPhysicsReplicationLODSettings ************************************
struct Z_Construct_UScriptStruct_FPhysicsReplicationLODSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsReplicationLODSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPhysicsReplicationLODSettings;
// ********** End ScriptStruct FPhysicsReplicationLODSettings **************************************

// ********** Begin ScriptStruct FPhysicsPredictionSettings ****************************************
struct Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_195_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPhysicsPredictionSettings;
// ********** End ScriptStruct FPhysicsPredictionSettings ******************************************

// ********** Begin Class UPhysicsSettings *********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_263_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPhysicsHistoryCount);


struct Z_Construct_UClass_UPhysicsSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicsSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_263_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsSettings(); \
	friend struct ::Z_Construct_UClass_UPhysicsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsSettings, UPhysicsSettingsCore, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_263_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsSettings(UPhysicsSettings&&) = delete; \
	UPhysicsSettings(const UPhysicsSettings&) = delete; \
	ENGINE_API virtual ~UPhysicsSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_260_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_263_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_263_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_263_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_263_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsSettings;

// ********** End Class UPhysicsSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h

// ********** Begin Enum ESettingsDOF **************************************************************
#define FOREACH_ENUM_ESETTINGSDOF(op) \
	op(ESettingsDOF::Full3D) \
	op(ESettingsDOF::YZPlane) \
	op(ESettingsDOF::XZPlane) \
	op(ESettingsDOF::XYPlane) 

namespace ESettingsDOF { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESettingsDOF::Type>();
// ********** End Enum ESettingsDOF ****************************************************************

// ********** Begin Enum ESettingsLockedAxis *******************************************************
#define FOREACH_ENUM_ESETTINGSLOCKEDAXIS(op) \
	op(ESettingsLockedAxis::None) \
	op(ESettingsLockedAxis::X) \
	op(ESettingsLockedAxis::Y) \
	op(ESettingsLockedAxis::Z) \
	op(ESettingsLockedAxis::Invalid) 

namespace ESettingsLockedAxis { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESettingsLockedAxis::Type>();
// ********** End Enum ESettingsLockedAxis *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
