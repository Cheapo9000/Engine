// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsControlAsset.h"

#ifdef PHYSICSCONTROL_PhysicsControlAsset_generated_h
#error "PhysicsControlAsset.generated.h already included, missing '#pragma once' in PhysicsControlAsset.h"
#endif
#define PHYSICSCONTROL_PhysicsControlAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsControlAsset *****************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h_29_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execIsSetupDirty); \
	DECLARE_FUNCTION(execGetDirtyProfiles); \
	DECLARE_FUNCTION(execIsCompilationNeeded); \
	DECLARE_FUNCTION(execCompile); \
	DECLARE_FUNCTION(execShowCompiledData);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h_29_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPhysicsControlAsset_Statics;
PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsControlAsset(); \
	friend struct ::Z_Construct_UClass_UPhysicsControlAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSCONTROL_API UClass* ::Z_Construct_UClass_UPhysicsControlAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsControlAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsControl"), Z_Construct_UClass_UPhysicsControlAsset_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsControlAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsControlAsset*>(this); }


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsControlAsset(UPhysicsControlAsset&&) = delete; \
	UPhysicsControlAsset(const UPhysicsControlAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCONTROL_API, UPhysicsControlAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsControlAsset) \
	PHYSICSCONTROL_API virtual ~UPhysicsControlAsset();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h_29_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsControlAsset;

// ********** End Class UPhysicsControlAsset *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
