// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeGen/SchedulingPolicies/PCGSchedulingPolicyBase.h"

#ifdef PCG_PCGSchedulingPolicyBase_generated_h
#error "PCGSchedulingPolicyBase.generated.h already included, missing '#pragma once' in PCGSchedulingPolicyBase.h"
#endif
#define PCG_PCGSchedulingPolicyBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSchedulingPolicyBase *************************************************
struct Z_Construct_UClass_UPCGSchedulingPolicyBase_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSchedulingPolicyBase_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSchedulingPolicyBase(); \
	friend struct ::Z_Construct_UClass_UPCGSchedulingPolicyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSchedulingPolicyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSchedulingPolicyBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSchedulingPolicyBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGSchedulingPolicyBase)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyBase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSchedulingPolicyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSchedulingPolicyBase(UPCGSchedulingPolicyBase&&) = delete; \
	UPCGSchedulingPolicyBase(const UPCGSchedulingPolicyBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSchedulingPolicyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSchedulingPolicyBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSchedulingPolicyBase) \
	PCG_API virtual ~UPCGSchedulingPolicyBase();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyBase_h_30_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyBase_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSchedulingPolicyBase;

// ********** End Class UPCGSchedulingPolicyBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_SchedulingPolicies_PCGSchedulingPolicyBase_h

// ********** Begin Enum EPCGGridStreamingDependencyMode *******************************************
#define FOREACH_ENUM_EPCGGRIDSTREAMINGDEPENDENCYMODE(op) \
	op(EPCGGridStreamingDependencyMode::AllGridsExceptUnbounded) \
	op(EPCGGridStreamingDependencyMode::AllGrids) \
	op(EPCGGridStreamingDependencyMode::SpecificGrids) \
	op(EPCGGridStreamingDependencyMode::NoGrids) 

enum class EPCGGridStreamingDependencyMode;
template<> struct TIsUEnumClass<EPCGGridStreamingDependencyMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGGridStreamingDependencyMode>();
// ********** End Enum EPCGGridStreamingDependencyMode *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
