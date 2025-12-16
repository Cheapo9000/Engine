// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassActorSubsystem.h"

#ifdef MASSACTORS_MassActorSubsystem_generated_h
#error "MassActorSubsystem.generated.h already included, missing '#pragma once' in MassActorSubsystem.h"
#endif
#define MASSACTORS_MassActorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassGuidFragment *************************************************
struct Z_Construct_UScriptStruct_FMassGuidFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassGuidFragment_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectWrapperFragment Super;


struct FMassGuidFragment;
// ********** End ScriptStruct FMassGuidFragment ***************************************************

// ********** Begin ScriptStruct FMassActorInstanceFragment ****************************************
struct Z_Construct_UScriptStruct_FMassActorInstanceFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassActorInstanceFragment_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FMassActorInstanceFragment;
// ********** End ScriptStruct FMassActorInstanceFragment ******************************************

// ********** Begin ScriptStruct FMassActorFragment ************************************************
struct Z_Construct_UScriptStruct_FMassActorFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassActorFragment_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectWrapperFragment Super;


struct FMassActorFragment;
// ********** End ScriptStruct FMassActorFragment **************************************************

// ********** Begin Class UMassActorSubsystem ******************************************************
struct Z_Construct_UClass_UMassActorSubsystem_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassActorSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassActorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassActorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassActorSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassActorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassActorSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSACTORS_API UMassActorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassActorSubsystem(UMassActorSubsystem&&) = delete; \
	UMassActorSubsystem(const UMassActorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassActorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassActorSubsystem) \
	MASSACTORS_API virtual ~UMassActorSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_181_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassActorSubsystem;

// ********** End Class UMassActorSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
