// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSequenceSubsystem.h"

#ifdef AVALANCHESEQUENCE_AvaSequenceSubsystem_generated_h
#error "AvaSequenceSubsystem.generated.h already included, missing '#pragma once' in AvaSequenceSubsystem.h"
#endif
#define AVALANCHESEQUENCE_AvaSequenceSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaSequenceSubsystem ****************************************************
struct Z_Construct_UClass_UAvaSequenceSubsystem_Statics;
AVALANCHESEQUENCE_API UClass* Z_Construct_UClass_UAvaSequenceSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSequenceSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaSequenceSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESEQUENCE_API UClass* ::Z_Construct_UClass_UAvaSequenceSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSequenceSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheSequence"), Z_Construct_UClass_UAvaSequenceSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaSequenceSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSequenceSubsystem(UAvaSequenceSubsystem&&) = delete; \
	UAvaSequenceSubsystem(const UAvaSequenceSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESEQUENCE_API, UAvaSequenceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequenceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSequenceSubsystem) \
	AVALANCHESEQUENCE_API virtual ~UAvaSequenceSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceSubsystem_h_19_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSequenceSubsystem;

// ********** End Class UAvaSequenceSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
