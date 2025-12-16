// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/PCGComputeKernel.h"

#ifdef PCG_PCGComputeKernel_generated_h
#error "PCGComputeKernel.generated.h already included, missing '#pragma once' in PCGComputeKernel.h"
#endif
#define PCG_PCGComputeKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGKernelLogEntry ************************************************
struct Z_Construct_UScriptStruct_FPCGKernelLogEntry_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeKernel_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGKernelLogEntry_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGKernelLogEntry;
// ********** End ScriptStruct FPCGKernelLogEntry **************************************************

// ********** Begin ScriptStruct FPCGKernelOverridableParam ****************************************
struct Z_Construct_UScriptStruct_FPCGKernelOverridableParam_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeKernel_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGKernelOverridableParam_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGKernelOverridableParam;
// ********** End ScriptStruct FPCGKernelOverridableParam ******************************************

// ********** Begin Class UPCGComputeKernel ********************************************************
struct Z_Construct_UClass_UPCGComputeKernel_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGComputeKernel_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeKernel_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComputeKernel(); \
	friend struct ::Z_Construct_UClass_UPCGComputeKernel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGComputeKernel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGComputeKernel, UComputeKernel, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGComputeKernel_NoRegister) \
	DECLARE_SERIALIZER(UPCGComputeKernel)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeKernel_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGComputeKernel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGComputeKernel(UPCGComputeKernel&&) = delete; \
	UPCGComputeKernel(const UPCGComputeKernel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGComputeKernel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComputeKernel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGComputeKernel) \
	PCG_API virtual ~UPCGComputeKernel();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeKernel_h_93_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeKernel_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeKernel_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeKernel_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGComputeKernel;

// ********** End Class UPCGComputeKernel **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_PCGComputeKernel_h

// ********** Begin Enum EPCGComputeKernelFlags ****************************************************
#define FOREACH_ENUM_EPCGCOMPUTEKERNELFLAGS(op) \
	op(EPCGComputeKernelFlags::None) \
	op(EPCGComputeKernelFlags::HasStaticValidationErrors) \
	op(EPCGComputeKernelFlags::LogDataDescriptions) \
	op(EPCGComputeKernelFlags::RepeatDispatchForProfiling) 

enum class EPCGComputeKernelFlags : uint32;
template<> struct TIsUEnumClass<EPCGComputeKernelFlags> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGComputeKernelFlags>();
// ********** End Enum EPCGComputeKernelFlags ******************************************************

// ********** Begin Enum EPCGKernelLogVerbosity ****************************************************
#define FOREACH_ENUM_EPCGKERNELLOGVERBOSITY(op) \
	op(EPCGKernelLogVerbosity::Verbose) \
	op(EPCGKernelLogVerbosity::Warning) \
	op(EPCGKernelLogVerbosity::Error) 

enum class EPCGKernelLogVerbosity;
template<> struct TIsUEnumClass<EPCGKernelLogVerbosity> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGKernelLogVerbosity>();
// ********** End Enum EPCGKernelLogVerbosity ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
