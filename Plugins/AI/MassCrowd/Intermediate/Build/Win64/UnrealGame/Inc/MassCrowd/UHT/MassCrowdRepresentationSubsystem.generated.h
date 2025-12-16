// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdRepresentationSubsystem.h"

#ifdef MASSCROWD_MassCrowdRepresentationSubsystem_generated_h
#error "MassCrowdRepresentationSubsystem.generated.h already included, missing '#pragma once' in MassCrowdRepresentationSubsystem.h"
#endif
#define MASSCROWD_MassCrowdRepresentationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassCrowdRepresentationSubsystem ****************************************
struct Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics;
MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdRepresentationSubsystem_NoRegister();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCrowdRepresentationSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassCrowdRepresentationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCROWD_API UClass* ::Z_Construct_UClass_UMassCrowdRepresentationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCrowdRepresentationSubsystem, UMassRepresentationSubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassCrowd"), Z_Construct_UClass_UMassCrowdRepresentationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassCrowdRepresentationSubsystem)


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSCROWD_API UMassCrowdRepresentationSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCrowdRepresentationSubsystem(UMassCrowdRepresentationSubsystem&&) = delete; \
	UMassCrowdRepresentationSubsystem(const UMassCrowdRepresentationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSCROWD_API, UMassCrowdRepresentationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCrowdRepresentationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCrowdRepresentationSubsystem) \
	MASSCROWD_API virtual ~UMassCrowdRepresentationSubsystem();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_13_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCrowdRepresentationSubsystem;

// ********** End Class UMassCrowdRepresentationSubsystem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdRepresentationSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
