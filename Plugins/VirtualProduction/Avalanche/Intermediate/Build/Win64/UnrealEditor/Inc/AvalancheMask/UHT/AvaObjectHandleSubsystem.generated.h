// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Handling/AvaObjectHandleSubsystem.h"

#ifdef AVALANCHEMASK_AvaObjectHandleSubsystem_generated_h
#error "AvaObjectHandleSubsystem.generated.h already included, missing '#pragma once' in AvaObjectHandleSubsystem.h"
#endif
#define AVALANCHEMASK_AvaObjectHandleSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaObjectHandleSubsystem ************************************************
struct Z_Construct_UClass_UAvaObjectHandleSubsystem_Statics;
AVALANCHEMASK_API UClass* Z_Construct_UClass_UAvaObjectHandleSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_Handling_AvaObjectHandleSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaObjectHandleSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaObjectHandleSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMASK_API UClass* ::Z_Construct_UClass_UAvaObjectHandleSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaObjectHandleSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMask"), Z_Construct_UClass_UAvaObjectHandleSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaObjectHandleSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_Handling_AvaObjectHandleSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaObjectHandleSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaObjectHandleSubsystem(UAvaObjectHandleSubsystem&&) = delete; \
	UAvaObjectHandleSubsystem(const UAvaObjectHandleSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaObjectHandleSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaObjectHandleSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaObjectHandleSubsystem) \
	NO_API virtual ~UAvaObjectHandleSubsystem();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_Handling_AvaObjectHandleSubsystem_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_Handling_AvaObjectHandleSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_Handling_AvaObjectHandleSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_Handling_AvaObjectHandleSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaObjectHandleSubsystem;

// ********** End Class UAvaObjectHandleSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_Handling_AvaObjectHandleSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
