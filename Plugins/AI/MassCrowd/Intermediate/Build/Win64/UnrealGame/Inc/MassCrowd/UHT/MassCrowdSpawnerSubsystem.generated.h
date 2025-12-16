// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdSpawnerSubsystem.h"

#ifdef MASSCROWD_MassCrowdSpawnerSubsystem_generated_h
#error "MassCrowdSpawnerSubsystem.generated.h already included, missing '#pragma once' in MassCrowdSpawnerSubsystem.h"
#endif
#define MASSCROWD_MassCrowdSpawnerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassCrowdSpawnerSubsystem ***********************************************
struct Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics;
MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSpawnerSubsystem_NoRegister();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCrowdSpawnerSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCROWD_API UClass* ::Z_Construct_UClass_UMassCrowdSpawnerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCrowdSpawnerSubsystem, UMassActorSpawnerSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassCrowd"), Z_Construct_UClass_UMassCrowdSpawnerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassCrowdSpawnerSubsystem)


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSCROWD_API UMassCrowdSpawnerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCrowdSpawnerSubsystem(UMassCrowdSpawnerSubsystem&&) = delete; \
	UMassCrowdSpawnerSubsystem(const UMassCrowdSpawnerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSCROWD_API, UMassCrowdSpawnerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCrowdSpawnerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCrowdSpawnerSubsystem) \
	MASSCROWD_API virtual ~UMassCrowdSpawnerSubsystem();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_11_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCrowdSpawnerSubsystem;

// ********** End Class UMassCrowdSpawnerSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
