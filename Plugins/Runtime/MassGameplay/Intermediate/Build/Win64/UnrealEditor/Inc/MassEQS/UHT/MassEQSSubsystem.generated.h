// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEQSSubsystem.h"

#ifdef MASSEQS_MassEQSSubsystem_generated_h
#error "MassEQSSubsystem.generated.h already included, missing '#pragma once' in MassEQSSubsystem.h"
#endif
#define MASSEQS_MassEQSSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEQSSubsystem ********************************************************
struct Z_Construct_UClass_UMassEQSSubsystem_Statics;
MASSEQS_API UClass* Z_Construct_UClass_UMassEQSSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEQSSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassEQSSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSEQS_API UClass* ::Z_Construct_UClass_UMassEQSSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEQSSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassEQS"), Z_Construct_UClass_UMassEQSSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassEQSSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassEQSSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEQSSubsystem(UMassEQSSubsystem&&) = delete; \
	UMassEQSSubsystem(const UMassEQSSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassEQSSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEQSSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassEQSSubsystem) \
	NO_API virtual ~UMassEQSSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEQSSubsystem;

// ********** End Class UMassEQSSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
