// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdSubsystem.h"

#ifdef MASSCROWD_MassCrowdSubsystem_generated_h
#error "MassCrowdSubsystem.generated.h already included, missing '#pragma once' in MassCrowdSubsystem.h"
#endif
#define MASSCROWD_MassCrowdSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassCrowdSubsystem ******************************************************
struct Z_Construct_UClass_UMassCrowdSubsystem_Statics;
MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSubsystem_NoRegister();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCrowdSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassCrowdSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCROWD_API UClass* ::Z_Construct_UClass_UMassCrowdSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCrowdSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassCrowd"), Z_Construct_UClass_UMassCrowdSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassCrowdSubsystem)


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSCROWD_API UMassCrowdSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCrowdSubsystem(UMassCrowdSubsystem&&) = delete; \
	UMassCrowdSubsystem(const UMassCrowdSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSCROWD_API, UMassCrowdSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCrowdSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCrowdSubsystem) \
	MASSCROWD_API virtual ~UMassCrowdSubsystem();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_65_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCrowdSubsystem;

// ********** End Class UMassCrowdSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
