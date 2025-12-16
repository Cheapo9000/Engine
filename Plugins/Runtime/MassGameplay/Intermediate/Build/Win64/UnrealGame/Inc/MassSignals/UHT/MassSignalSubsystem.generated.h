// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSignalSubsystem.h"

#ifdef MASSSIGNALS_MassSignalSubsystem_generated_h
#error "MassSignalSubsystem.generated.h already included, missing '#pragma once' in MassSignalSubsystem.h"
#endif
#define MASSSIGNALS_MassSignalSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSignalSubsystem *****************************************************
struct Z_Construct_UClass_UMassSignalSubsystem_Statics;
MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSignalSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassSignalSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSIGNALS_API UClass* ::Z_Construct_UClass_UMassSignalSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSignalSubsystem, UMassTickableSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassSignals"), Z_Construct_UClass_UMassSignalSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassSignalSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSSIGNALS_API UMassSignalSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSignalSubsystem(UMassSignalSubsystem&&) = delete; \
	UMassSignalSubsystem(const UMassSignalSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSIGNALS_API, UMassSignalSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSignalSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSignalSubsystem) \
	MASSSIGNALS_API virtual ~UMassSignalSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSignalSubsystem;

// ********** End Class UMassSignalSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
