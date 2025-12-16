// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeSubsystem.h"

#ifdef XRCREATIVE_XRCreativeSubsystem_generated_h
#error "XRCreativeSubsystem.generated.h already included, missing '#pragma once' in XRCreativeSubsystem.h"
#endif
#define XRCREATIVE_XRCreativeSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMVVMViewModelCollectionObject;

// ********** Begin Class UXRCreativeSubsystem *****************************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetViewModelCollection);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execExitVRMode); \
	DECLARE_FUNCTION(execEnterVRMode);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UXRCreativeSubsystem_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeSubsystem(); \
	friend struct ::Z_Construct_UClass_UXRCreativeSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_UXRCreativeSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativeSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_UXRCreativeSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativeSubsystem)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRCreativeSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativeSubsystem(UXRCreativeSubsystem&&) = delete; \
	UXRCreativeSubsystem(const UXRCreativeSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXRCreativeSubsystem) \
	NO_API virtual ~UXRCreativeSubsystem();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativeSubsystem;

// ********** End Class UXRCreativeSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
