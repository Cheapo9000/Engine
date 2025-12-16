// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/CEClonerSubsystem.h"

#ifdef CLONEREFFECTOR_CEClonerSubsystem_generated_h
#error "CEClonerSubsystem.generated.h already included, missing '#pragma once' in CEClonerSubsystem.h"
#endif
#define CLONEREFFECTOR_CEClonerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEClonerSubsystem *******************************************************
struct Z_Construct_UClass_UCEClonerSubsystem_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEClonerSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerSubsystem(); \
	friend struct ::Z_Construct_UClass_UCEClonerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerSubsystem)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEClonerSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLONEREFFECTOR_API UCEClonerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerSubsystem(UCEClonerSubsystem&&) = delete; \
	UCEClonerSubsystem(const UCEClonerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerSubsystem) \
	CLONEREFFECTOR_API virtual ~UCEClonerSubsystem();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEClonerSubsystem_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEClonerSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEClonerSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEClonerSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerSubsystem;

// ********** End Class UCEClonerSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Subsystems_CEClonerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
