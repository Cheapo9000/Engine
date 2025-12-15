// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/ActorEditorContextSubsystem.h"

#ifdef UNREALED_ActorEditorContextSubsystem_generated_h
#error "ActorEditorContextSubsystem.generated.h already included, missing '#pragma once' in ActorEditorContextSubsystem.h"
#endif
#define UNREALED_ActorEditorContextSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorEditorContextSubsystem *********************************************
struct Z_Construct_UClass_UActorEditorContextSubsystem_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorEditorContextSubsystem_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorEditorContextSubsystem(); \
	friend struct ::Z_Construct_UClass_UActorEditorContextSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorEditorContextSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorEditorContextSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorEditorContextSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UActorEditorContextSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorEditorContextSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorEditorContextSubsystem(UActorEditorContextSubsystem&&) = delete; \
	UActorEditorContextSubsystem(const UActorEditorContextSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorEditorContextSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorEditorContextSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorEditorContextSubsystem) \
	UNREALED_API virtual ~UActorEditorContextSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_19_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorEditorContextSubsystem;

// ********** End Class UActorEditorContextSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
