// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGPin.h"

#ifdef PCG_PCGPin_generated_h
#error "PCGPin.generated.h already included, missing '#pragma once' in PCGPin.h"
#endif
#define PCG_PCGPin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPCGExclusiveDataType : uint8;
struct FPCGPinProperties;

// ********** Begin ScriptStruct FPCGPinProperties *************************************************
struct Z_Construct_UScriptStruct_FPCGPinProperties_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPinProperties_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPinProperties;
// ********** End ScriptStruct FPCGPinProperties ***************************************************

// ********** Begin Class UPCGBlueprintPinHelpers **************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsExactlySameType); \
	DECLARE_FUNCTION(execIsOfType); \
	DECLARE_FUNCTION(execMakePinProperty); \
	DECLARE_FUNCTION(execBreakPinProperty); \
	DECLARE_FUNCTION(execGetCorrespondingDataType);


struct Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBlueprintPinHelpers_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintPinHelpers(); \
	friend struct ::Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBlueprintPinHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBlueprintPinHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBlueprintPinHelpers_NoRegister) \
	DECLARE_SERIALIZER(UPCGBlueprintPinHelpers)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_155_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBlueprintPinHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBlueprintPinHelpers(UPCGBlueprintPinHelpers&&) = delete; \
	UPCGBlueprintPinHelpers(const UPCGBlueprintPinHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBlueprintPinHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintPinHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintPinHelpers) \
	PCG_API virtual ~UPCGBlueprintPinHelpers();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_152_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBlueprintPinHelpers;

// ********** End Class UPCGBlueprintPinHelpers ****************************************************

// ********** Begin Class UPCGPin ******************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsOutputPin); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execSetTooltip); \
	DECLARE_FUNCTION(execGetTooltip);


struct Z_Construct_UClass_UPCGPin_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPin_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_251_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPin(); \
	friend struct ::Z_Construct_UClass_UPCGPin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPin_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPin_NoRegister) \
	DECLARE_SERIALIZER(UPCGPin)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_251_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPin(UPCGPin&&) = delete; \
	UPCGPin(const UPCGPin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPin) \
	PCG_API virtual ~UPCGPin();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_248_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_251_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_251_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_251_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPin;

// ********** End Class UPCGPin ********************************************************************

// ********** Begin Class UPCGPinPropertiesBlueprintHelpers ****************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_341_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNormalPin); \
	DECLARE_FUNCTION(execIsNormalPin); \
	DECLARE_FUNCTION(execSetRequiredPin); \
	DECLARE_FUNCTION(execIsRequiredPin); \
	DECLARE_FUNCTION(execSetAdvancedPin); \
	DECLARE_FUNCTION(execIsAdvancedPin); \
	DECLARE_FUNCTION(execSetAllowMultipleConnections); \
	DECLARE_FUNCTION(execAllowsMultipleConnections);


struct Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_341_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPinPropertiesBlueprintHelpers(); \
	friend struct ::Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPinPropertiesBlueprintHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers_NoRegister) \
	DECLARE_SERIALIZER(UPCGPinPropertiesBlueprintHelpers)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_341_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGPinPropertiesBlueprintHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPinPropertiesBlueprintHelpers(UPCGPinPropertiesBlueprintHelpers&&) = delete; \
	UPCGPinPropertiesBlueprintHelpers(const UPCGPinPropertiesBlueprintHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPinPropertiesBlueprintHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPinPropertiesBlueprintHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPinPropertiesBlueprintHelpers) \
	PCG_API virtual ~UPCGPinPropertiesBlueprintHelpers();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_338_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_341_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_341_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_341_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h_341_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPinPropertiesBlueprintHelpers;

// ********** End Class UPCGPinPropertiesBlueprintHelpers ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGPin_h

// ********** Begin Enum EPCGPinUsage **************************************************************
#define FOREACH_ENUM_EPCGPINUSAGE(op) \
	op(EPCGPinUsage::Normal) \
	op(EPCGPinUsage::Loop) \
	op(EPCGPinUsage::Feedback) \
	op(EPCGPinUsage::DependencyOnly) 

enum class EPCGPinUsage : uint8;
template<> struct TIsUEnumClass<EPCGPinUsage> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPinUsage>();
// ********** End Enum EPCGPinUsage ****************************************************************

// ********** Begin Enum EPCGPinStatus *************************************************************
#define FOREACH_ENUM_EPCGPINSTATUS(op) \
	op(EPCGPinStatus::Normal) \
	op(EPCGPinStatus::Required) \
	op(EPCGPinStatus::Advanced) \
	op(EPCGPinStatus::OverrideOrUserParam) 

enum class EPCGPinStatus : uint8;
template<> struct TIsUEnumClass<EPCGPinStatus> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGPinStatus>();
// ********** End Enum EPCGPinStatus ***************************************************************

// ********** Begin Enum EPCGTypeConversion ********************************************************
#define FOREACH_ENUM_EPCGTYPECONVERSION(op) \
	op(EPCGTypeConversion::NoConversionRequired) \
	op(EPCGTypeConversion::CollapseToPoint) \
	op(EPCGTypeConversion::Filter) \
	op(EPCGTypeConversion::MakeConcrete) \
	op(EPCGTypeConversion::SplineToSurface) \
	op(EPCGTypeConversion::Failed) 

enum class EPCGTypeConversion : uint8;
template<> struct TIsUEnumClass<EPCGTypeConversion> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGTypeConversion>();
// ********** End Enum EPCGTypeConversion **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
