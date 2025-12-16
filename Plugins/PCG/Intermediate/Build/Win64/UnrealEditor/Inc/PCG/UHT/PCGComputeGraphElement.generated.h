// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/Elements/PCGComputeGraphElement.h"

#ifdef PCG_PCGComputeGraphElement_generated_h
#error "PCGComputeGraphElement.generated.h already included, missing '#pragma once' in PCGComputeGraphElement.h"
#endif
#define PCG_PCGComputeGraphElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGComputeGraphSettings *************************************************
struct Z_Construct_UClass_UPCGComputeGraphSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGComputeGraphSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGComputeGraphElement_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComputeGraphSettings(); \
	friend struct ::Z_Construct_UClass_UPCGComputeGraphSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGComputeGraphSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGComputeGraphSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGComputeGraphSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGComputeGraphSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGComputeGraphElement_h_144_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGComputeGraphSettings(UPCGComputeGraphSettings&&) = delete; \
	UPCGComputeGraphSettings(const UPCGComputeGraphSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGComputeGraphSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComputeGraphSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGComputeGraphSettings) \
	NO_API virtual ~UPCGComputeGraphSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGComputeGraphElement_h_141_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGComputeGraphElement_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGComputeGraphElement_h_144_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGComputeGraphElement_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGComputeGraphSettings;

// ********** End Class UPCGComputeGraphSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGComputeGraphElement_h

// ********** Begin Enum EPCGComputeGraphExecutionPhase ********************************************
#define FOREACH_ENUM_EPCGCOMPUTEGRAPHEXECUTIONPHASE(op) \
	op(EPCGComputeGraphExecutionPhase::None) \
	op(EPCGComputeGraphExecutionPhase::GetComputeGraph) \
	op(EPCGComputeGraphExecutionPhase::InitializeDataBindingAndComputeGraph) \
	op(EPCGComputeGraphExecutionPhase::InitializeKernelParams) \
	op(EPCGComputeGraphExecutionPhase::PreExecuteReadbacks) \
	op(EPCGComputeGraphExecutionPhase::PrimeDataDescriptionsAndValidateData) \
	op(EPCGComputeGraphExecutionPhase::PrepareForExecute) \
	op(EPCGComputeGraphExecutionPhase::ValidateComputeGraphCompilation) \
	op(EPCGComputeGraphExecutionPhase::ScheduleComputeGraph) \
	op(EPCGComputeGraphExecutionPhase::WaitForExecutionComplete) \
	op(EPCGComputeGraphExecutionPhase::PostExecute) \
	op(EPCGComputeGraphExecutionPhase::DebugAndInspection) \
	op(EPCGComputeGraphExecutionPhase::Done) 

enum class EPCGComputeGraphExecutionPhase : uint8;
template<> struct TIsUEnumClass<EPCGComputeGraphExecutionPhase> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGComputeGraphExecutionPhase>();
// ********** End Enum EPCGComputeGraphExecutionPhase **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
