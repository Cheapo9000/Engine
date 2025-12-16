// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaMaskSubsystem.h"

#ifdef AVALANCHEMASK_AvaMaskSubsystem_generated_h
#error "AvaMaskSubsystem.generated.h already included, missing '#pragma once' in AvaMaskSubsystem.h"
#endif
#define AVALANCHEMASK_AvaMaskSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaMaskSubsystem ********************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_ACCESSORS \
static void GetLastSpecifiedChannelName_WrapperImpl(const void* Object, void* OutValue); \
static void SetLastSpecifiedChannelName_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaMaskSubsystem_Statics;
AVALANCHEMASK_API UClass* Z_Construct_UClass_UAvaMaskSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMaskSubsystem(); \
	friend struct ::Z_Construct_UClass_UAvaMaskSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMASK_API UClass* ::Z_Construct_UClass_UAvaMaskSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMaskSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMask"), Z_Construct_UClass_UAvaMaskSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAvaMaskSubsystem)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaMaskSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMaskSubsystem(UAvaMaskSubsystem&&) = delete; \
	UAvaMaskSubsystem(const UAvaMaskSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMaskSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMaskSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMaskSubsystem) \
	NO_API virtual ~UAvaMaskSubsystem();


#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_AUTOGETTERSETTER_DECLS_EOD \
	const FName GetLastSpecifiedChannelName() const;
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_AUTOGETTERSETTER_DECLS_EOD
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_AUTOGETTERSETTER_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMaskSubsystem;

// ********** End Class UAvaMaskSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMask_Private_AvaMaskSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
