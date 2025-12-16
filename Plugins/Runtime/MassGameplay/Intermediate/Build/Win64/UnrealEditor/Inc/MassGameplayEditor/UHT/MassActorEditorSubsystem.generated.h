// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassActorEditorSubsystem.h"

#ifdef MASSGAMEPLAYEDITOR_MassActorEditorSubsystem_generated_h
#error "MassActorEditorSubsystem.generated.h already included, missing '#pragma once' in MassActorEditorSubsystem.h"
#endif
#define MASSGAMEPLAYEDITOR_MassActorEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassActorEditorSubsystem ************************************************
struct Z_Construct_UClass_UMassActorEditorSubsystem_Statics;
MASSGAMEPLAYEDITOR_API UClass* Z_Construct_UClass_UMassActorEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassActorEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassActorEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSGAMEPLAYEDITOR_API UClass* ::Z_Construct_UClass_UMassActorEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassActorEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassGameplayEditor"), Z_Construct_UClass_UMassActorEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassActorEditorSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSGAMEPLAYEDITOR_API UMassActorEditorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassActorEditorSubsystem(UMassActorEditorSubsystem&&) = delete; \
	UMassActorEditorSubsystem(const UMassActorEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSGAMEPLAYEDITOR_API, UMassActorEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActorEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassActorEditorSubsystem) \
	MASSGAMEPLAYEDITOR_API virtual ~UMassActorEditorSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassActorEditorSubsystem;

// ********** End Class UMassActorEditorSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
