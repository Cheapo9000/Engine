// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPRolesSubsystem.h"

#ifdef VPROLES_VPRolesSubsystem_generated_h
#error "VPRolesSubsystem.generated.h already included, missing '#pragma once' in VPRolesSubsystem.h"
#endif
#define VPROLES_VPRolesSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnRolesChanged *******************************************************
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_25_DELEGATE \
static void FOnRolesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRolesChanged, TArray<FString> const& EnabledRoles);


// ********** End Delegate FOnRolesChanged *********************************************************

// ********** Begin Class UVirtualProductionRolesSubsystem *****************************************
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllRoles); \
	DECLARE_FUNCTION(execSetActiveRoles); \
	DECLARE_FUNCTION(execGetActiveRolesString); \
	DECLARE_FUNCTION(execHasActiveRole); \
	DECLARE_FUNCTION(execGetActiveRoles);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRemoveRole); \
	DECLARE_FUNCTION(execAddRole);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics;
VPROLES_API UClass* Z_Construct_UClass_UVirtualProductionRolesSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualProductionRolesSubsystem(); \
	friend struct ::Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPROLES_API UClass* ::Z_Construct_UClass_UVirtualProductionRolesSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualProductionRolesSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPRoles"), Z_Construct_UClass_UVirtualProductionRolesSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UVirtualProductionRolesSubsystem)


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualProductionRolesSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualProductionRolesSubsystem(UVirtualProductionRolesSubsystem&&) = delete; \
	UVirtualProductionRolesSubsystem(const UVirtualProductionRolesSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualProductionRolesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualProductionRolesSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVirtualProductionRolesSubsystem) \
	NO_API virtual ~UVirtualProductionRolesSubsystem();


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualProductionRolesSubsystem;

// ********** End Class UVirtualProductionRolesSubsystem *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
