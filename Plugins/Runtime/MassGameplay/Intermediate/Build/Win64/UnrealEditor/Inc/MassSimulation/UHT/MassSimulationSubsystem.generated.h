// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSimulationSubsystem.h"

#ifdef MASSSIMULATION_MassSimulationSubsystem_generated_h
#error "MassSimulationSubsystem.generated.h already included, missing '#pragma once' in MassSimulationSubsystem.h"
#endif
#define MASSSIMULATION_MassSimulationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSimulationSubsystem *************************************************
struct Z_Construct_UClass_UMassSimulationSubsystem_Statics;
MASSSIMULATION_API UClass* Z_Construct_UClass_UMassSimulationSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSimulationSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassSimulationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSIMULATION_API UClass* ::Z_Construct_UClass_UMassSimulationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSimulationSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassSimulation"), Z_Construct_UClass_UMassSimulationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassSimulationSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSimulationSubsystem(UMassSimulationSubsystem&&) = delete; \
	UMassSimulationSubsystem(const UMassSimulationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSIMULATION_API, UMassSimulationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSimulationSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSimulationSubsystem) \
	MASSSIMULATION_API virtual ~UMassSimulationSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSimulationSubsystem;

// ********** End Class UMassSimulationSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
