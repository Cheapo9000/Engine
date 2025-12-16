// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/DMXEntityFixtureType.h"

#ifdef DMXRUNTIME_DMXEntityFixtureType_generated_h
#error "DMXEntityFixtureType.generated.h already included, missing '#pragma once' in DMXEntityFixtureType.h"
#endif
#define DMXRUNTIME_DMXEntityFixtureType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityFixtureType;
class UDMXImport;
struct FDMXEntityFixtureTypeConstructionParams;
struct FDMXEntityFixtureTypeRef;

// ********** Begin ScriptStruct FDMXFixtureFunction ***********************************************
struct Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXFixtureFunction;
// ********** End ScriptStruct FDMXFixtureFunction *************************************************

// ********** Begin ScriptStruct FDMXFixtureCellAttribute ******************************************
struct Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_191_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXFixtureCellAttribute;
// ********** End ScriptStruct FDMXFixtureCellAttribute ********************************************

// ********** Begin ScriptStruct FDMXFixtureMatrix *************************************************
struct Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_246_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXFixtureMatrix;
// ********** End ScriptStruct FDMXFixtureMatrix ***************************************************

// ********** Begin ScriptStruct FDMXCell **********************************************************
struct Z_Construct_UScriptStruct_FDMXCell_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_276_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXCell_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXCell;
// ********** End ScriptStruct FDMXCell ************************************************************

// ********** Begin ScriptStruct FDMXFixtureMode ***************************************************
struct Z_Construct_UScriptStruct_FDMXFixtureMode_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_295_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXFixtureMode_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXFixtureMode;
// ********** End ScriptStruct FDMXFixtureMode *****************************************************

// ********** Begin ScriptStruct FDMXEntityFixtureTypeConstructionParams ***************************
struct Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_333_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXEntityFixtureTypeConstructionParams;
// ********** End ScriptStruct FDMXEntityFixtureTypeConstructionParams *****************************

// ********** Begin Class UDMXEntityFixtureType ****************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveFixtureTypeFromLibrary); \
	DECLARE_FUNCTION(execCreateFixtureTypeInLibrary);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetModesFromDMXImport);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXEntityFixtureType, NO_API)


struct Z_Construct_UClass_UDMXEntityFixtureType_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixtureType_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXEntityFixtureType(); \
	friend struct ::Z_Construct_UClass_UDMXEntityFixtureType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXEntityFixtureType_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXEntityFixtureType, UDMXEntity, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXEntityFixtureType_NoRegister) \
	DECLARE_SERIALIZER(UDMXEntityFixtureType) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXEntityFixtureType(UDMXEntityFixtureType&&) = delete; \
	UDMXEntityFixtureType(const UDMXEntityFixtureType&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEntityFixtureType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEntityFixtureType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXEntityFixtureType) \
	NO_API virtual ~UDMXEntityFixtureType();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_359_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_363_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXEntityFixtureType;

// ********** End Class UDMXEntityFixtureType ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h

// ********** Begin Enum EDMXPixelMappingDistribution **********************************************
#define FOREACH_ENUM_EDMXPIXELMAPPINGDISTRIBUTION(op) \
	op(EDMXPixelMappingDistribution::TopLeftToRight) \
	op(EDMXPixelMappingDistribution::TopLeftToBottom) \
	op(EDMXPixelMappingDistribution::TopLeftToClockwise) \
	op(EDMXPixelMappingDistribution::TopLeftToAntiClockwise) \
	op(EDMXPixelMappingDistribution::TopRightToLeft) \
	op(EDMXPixelMappingDistribution::BottomLeftToTop) \
	op(EDMXPixelMappingDistribution::TopRightToAntiClockwise) \
	op(EDMXPixelMappingDistribution::BottomLeftToClockwise) \
	op(EDMXPixelMappingDistribution::BottomLeftToRight) \
	op(EDMXPixelMappingDistribution::TopRightToBottom) \
	op(EDMXPixelMappingDistribution::BottomLeftAntiClockwise) \
	op(EDMXPixelMappingDistribution::TopRightToClockwise) \
	op(EDMXPixelMappingDistribution::BottomRightToLeft) \
	op(EDMXPixelMappingDistribution::BottomRightToTop) \
	op(EDMXPixelMappingDistribution::BottomRightToClockwise) \
	op(EDMXPixelMappingDistribution::BottomRightToAntiClockwise) 

enum class EDMXPixelMappingDistribution : uint8;
template<> struct TIsUEnumClass<EDMXPixelMappingDistribution> { enum { Value = true }; };
template<> DMXRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXPixelMappingDistribution>();
// ********** End Enum EDMXPixelMappingDistribution ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
