// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/CEEffectorSubsystem.h"

#ifdef CLONEREFFECTOR_CEEffectorSubsystem_generated_h
#error "CEEffectorSubsystem.generated.h already included, missing '#pragma once' in CEEffectorSubsystem.h"
#endif
#define CLONEREFFECTOR_CEEffectorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEEffectorSubsystem *****************************************************
struct Z_Construct_UClass_UCEEffectorSubsystem_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEEffectorSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorSubsystem(); \
	friend struct ::Z_Construct_UClass_UCEEffectorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorSubsystem)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEEffectorSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCEEffectorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorSubsystem(UCEEffectorSubsystem&&) = delete; \
	UCEEffectorSubsystem(const UCEEffectorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCEEffectorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorSubsystem) \
	NO_API virtual ~UCEEffectorSubsystem();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEEffectorSubsystem_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEEffectorSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEEffectorSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEEffectorSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorSubsystem;

// ********** End Class UCEEffectorSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEEffectorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
