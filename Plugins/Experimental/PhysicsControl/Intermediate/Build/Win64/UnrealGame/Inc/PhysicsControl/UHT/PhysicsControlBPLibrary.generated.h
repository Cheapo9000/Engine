// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsControlBPLibrary.h"

#ifdef PHYSICSCONTROL_PhysicsControlBPLibrary_generated_h
#error "PhysicsControlBPLibrary.generated.h already included, missing '#pragma once' in PhysicsControlBPLibrary.h"
#endif
#define PHYSICSCONTROL_PhysicsControlBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsAsset;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FPhysicsControlControlAndModifierParameters;
struct FPhysicsControlModifierSparseData;
struct FPhysicsControlNamedControlParameters;
struct FPhysicsControlNamedModifierParameters;
struct FPhysicsControlSparseData;
struct FRigidBodyWithControlReference;

// ********** Begin ScriptStruct FRigidBodyWithControlReference ************************************
struct Z_Construct_UScriptStruct_FRigidBodyWithControlReference_Statics;
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigidBodyWithControlReference_Statics; \
	PHYSICSCONTROL_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FRigidBodyWithControlReference;
// ********** End ScriptStruct FRigidBodyWithControlReference **************************************

// ********** Begin Class UPhysicsControlBPLibrary *************************************************
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBodyModifierNamesInSet); \
	DECLARE_FUNCTION(execGetControlNamesInSet); \
	DECLARE_FUNCTION(execSetOverridePhysicsAsset); \
	DECLARE_FUNCTION(execConvertToRigidBodyWithControlPure); \
	DECLARE_FUNCTION(execConvertToRigidBodyWithControl); \
	DECLARE_FUNCTION(execBlendModifierParametersThroughSet); \
	DECLARE_FUNCTION(execBlendControlParametersThroughSet); \
	DECLARE_FUNCTION(execBlendParameters); \
	DECLARE_FUNCTION(execAddMultipleModifierParameters); \
	DECLARE_FUNCTION(execAddModifierParameters); \
	DECLARE_FUNCTION(execAddMultipleControlParameters); \
	DECLARE_FUNCTION(execAddControlParameters);


struct Z_Construct_UClass_UPhysicsControlBPLibrary_Statics;
PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlBPLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsControlBPLibrary(); \
	friend struct ::Z_Construct_UClass_UPhysicsControlBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSCONTROL_API UClass* ::Z_Construct_UClass_UPhysicsControlBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsControlBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsControl"), Z_Construct_UClass_UPhysicsControlBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsControlBPLibrary)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCONTROL_API UPhysicsControlBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsControlBPLibrary(UPhysicsControlBPLibrary&&) = delete; \
	UPhysicsControlBPLibrary(const UPhysicsControlBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCONTROL_API, UPhysicsControlBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsControlBPLibrary) \
	PHYSICSCONTROL_API virtual ~UPhysicsControlBPLibrary();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsControlBPLibrary;

// ********** End Class UPhysicsControlBPLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
