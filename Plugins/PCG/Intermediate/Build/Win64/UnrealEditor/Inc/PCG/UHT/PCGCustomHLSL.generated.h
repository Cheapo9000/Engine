// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/Elements/PCGCustomHLSL.h"

#ifdef PCG_PCGCustomHLSL_generated_h
#error "PCGCustomHLSL.generated.h already included, missing '#pragma once' in PCGCustomHLSL.h"
#endif
#define PCG_PCGCustomHLSL_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPCGDataTypeIdentifier;

// ********** Begin Class UPCGCustomHLSLSettings ***************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h_45_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetInputPinNamesAndNone); \
	DECLARE_FUNCTION(execGetInputPinNames); \
	DECLARE_FUNCTION(execGetAllowedOutputTypes); \
	DECLARE_FUNCTION(execGetAllowedInputTypes); \
	DECLARE_FUNCTION(execSupportsComposition);
#else // WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h_45_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGCustomHLSLSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCustomHLSLSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCustomHLSLSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCustomHLSLSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCustomHLSLSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCustomHLSLSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCustomHLSLSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCustomHLSLSettings) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGCustomHLSLSettings*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCustomHLSLSettings(UPCGCustomHLSLSettings&&) = delete; \
	UPCGCustomHLSLSettings(const UPCGCustomHLSLSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCustomHLSLSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCustomHLSLSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCustomHLSLSettings) \
	PCG_API virtual ~UPCGCustomHLSLSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h_40_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h_45_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCustomHLSLSettings;

// ********** End Class UPCGCustomHLSLSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_Elements_PCGCustomHLSL_h

// ********** Begin Enum EPCGKernelType ************************************************************
#define FOREACH_ENUM_EPCGKERNELTYPE(op) \
	op(EPCGKernelType::PointProcessor) \
	op(EPCGKernelType::PointGenerator) \
	op(EPCGKernelType::TextureProcessor) \
	op(EPCGKernelType::TextureGenerator) \
	op(EPCGKernelType::Custom) \
	op(EPCGKernelType::AttributeSetProcessor) 

enum class EPCGKernelType : uint8;
template<> struct TIsUEnumClass<EPCGKernelType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGKernelType>();
// ********** End Enum EPCGKernelType **************************************************************

// ********** Begin Enum EPCGDispatchThreadCount ***************************************************
#define FOREACH_ENUM_EPCGDISPATCHTHREADCOUNT(op) \
	op(EPCGDispatchThreadCount::FromFirstOutputPin) \
	op(EPCGDispatchThreadCount::Fixed) \
	op(EPCGDispatchThreadCount::FromProductOfInputPins) 

enum class EPCGDispatchThreadCount : uint8;
template<> struct TIsUEnumClass<EPCGDispatchThreadCount> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGDispatchThreadCount>();
// ********** End Enum EPCGDispatchThreadCount *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
