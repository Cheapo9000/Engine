// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassRepresentationSubsystem.h"

#ifdef MASSREPRESENTATION_MassRepresentationSubsystem_generated_h
#error "MassRepresentationSubsystem.generated.h already included, missing '#pragma once' in MassRepresentationSubsystem.h"
#endif
#define MASSREPRESENTATION_MassRepresentationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UMassRepresentationSubsystem *********************************************
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleVisualizerEndPlay);


struct Z_Construct_UClass_UMassRepresentationSubsystem_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassRepresentationSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassRepresentationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassRepresentationSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassRepresentationSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSREPRESENTATION_API UMassRepresentationSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassRepresentationSubsystem(UMassRepresentationSubsystem&&) = delete; \
	UMassRepresentationSubsystem(const UMassRepresentationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassRepresentationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassRepresentationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassRepresentationSubsystem) \
	MASSREPRESENTATION_API virtual ~UMassRepresentationSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassRepresentationSubsystem;

// ********** End Class UMassRepresentationSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
