// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeGen/SchedulingPolicies/PCGSchedulingPolicyDistanceAndDirection.h"

#ifdef PCG_PCGSchedulingPolicyDistanceAndDirection_generated_h
#error "PCGSchedulingPolicyDistanceAndDirection.generated.h already included, missing '#pragma once' in PCGSchedulingPolicyDistanceAndDirection.h"
#endif
#define PCG_PCGSchedulingPolicyDistanceAndDirection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSchedulingPolicyDistanceAndDirection *********************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDistanceWeight_DEPRECATED); \
	DECLARE_FUNCTION(execGetDistanceWeight_DEPRECATED);


struct Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSchedulingPolicyDistanceAndDirection(); \
	friend struct ::Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSchedulingPolicyDistanceAndDirection, UPCGSchedulingPolicyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSchedulingPolicyDistanceAndDirection_NoRegister) \
	DECLARE_SERIALIZER(UPCGSchedulingPolicyDistanceAndDirection)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSchedulingPolicyDistanceAndDirection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSchedulingPolicyDistanceAndDirection(UPCGSchedulingPolicyDistanceAndDirection&&) = delete; \
	UPCGSchedulingPolicyDistanceAndDirection(const UPCGSchedulingPolicyDistanceAndDirection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSchedulingPolicyDistanceAndDirection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSchedulingPolicyDistanceAndDirection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSchedulingPolicyDistanceAndDirection) \
	PCG_API virtual ~UPCGSchedulingPolicyDistanceAndDirection();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h_25_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSchedulingPolicyDistanceAndDirection;

// ********** End Class UPCGSchedulingPolicyDistanceAndDirection ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyDistanceAndDirection_h

// ********** Begin Enum EPCGSchedulingPolicyNetworkMode *******************************************
#define FOREACH_ENUM_EPCGSCHEDULINGPOLICYNETWORKMODE(op) \
	op(EPCGSchedulingPolicyNetworkMode::Client) \
	op(EPCGSchedulingPolicyNetworkMode::Server) \
	op(EPCGSchedulingPolicyNetworkMode::All) 

enum class EPCGSchedulingPolicyNetworkMode : uint8;
template<> struct TIsUEnumClass<EPCGSchedulingPolicyNetworkMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSchedulingPolicyNetworkMode>();
// ********** End Enum EPCGSchedulingPolicyNetworkMode *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
