// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/DMXEntityFixturePatch.h"

#ifdef DMXRUNTIME_DMXEntityFixturePatch_generated_h
#error "DMXEntityFixturePatch.generated.h already included, missing '#pragma once' in DMXEntityFixturePatch.h"
#endif
#define DMXRUNTIME_DMXEntityFixturePatch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityController;
class UDMXEntityFixturePatch;
class UDMXEntityFixtureType;
enum class EDMXFixtureSignalFormat : uint8;
struct FDMXAttributeName;
struct FDMXCell;
struct FDMXEntityFixturePatchConstructionParams;
struct FDMXEntityFixturePatchRef;
struct FDMXFixtureFunction;
struct FDMXFixtureMatrix;
struct FDMXNormalizedAttributeValueMap;

// ********** Begin ScriptStruct FDMXEntityFixturePatchConstructionParams **************************
struct Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXEntityFixturePatchConstructionParams;
// ********** End ScriptStruct FDMXEntityFixturePatchConstructionParams ****************************

// ********** Begin Delegate FDMXOnFixturePatchReceivedDMXDelegate *********************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_79_DELEGATE \
static void FDMXOnFixturePatchReceivedDMXDelegate_DelegateWrapper(const FMulticastScriptDelegate& DMXOnFixturePatchReceivedDMXDelegate, UDMXEntityFixturePatch* FixturePatch, FDMXNormalizedAttributeValueMap const& ValuePerAttribute);


// ********** End Delegate FDMXOnFixturePatchReceivedDMXDelegate ***********************************

// ********** Begin Class UDMXEntityFixturePatch ***************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllMatrixCells); \
	DECLARE_FUNCTION(execGetMatrixCell); \
	DECLARE_FUNCTION(execGetCellAttributes); \
	DECLARE_FUNCTION(execGetMatrixProperties); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsAbsoluteWithValidation); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsAbsolute); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsRelative); \
	DECLARE_FUNCTION(execGetNormalizedMatrixCellValues); \
	DECLARE_FUNCTION(execGetMatrixCellValues); \
	DECLARE_FUNCTION(execSendNormalizedMatrixCellValue); \
	DECLARE_FUNCTION(execSendMatrixCellValueWithAttributeMap); \
	DECLARE_FUNCTION(execSendMatrixCellValue); \
	DECLARE_FUNCTION(execGetNormalizedAttributeValues); \
	DECLARE_FUNCTION(execGetAttributeValues); \
	DECLARE_FUNCTION(execGetNormalizedAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execIsInControllersRange); \
	DECLARE_FUNCTION(execIsInControllerRange); \
	DECLARE_FUNCTION(execGetRelevantControllers); \
	DECLARE_FUNCTION(execConvertToValidMap); \
	DECLARE_FUNCTION(execContainsAttribute); \
	DECLARE_FUNCTION(execIsMapValid); \
	DECLARE_FUNCTION(execConvertAttributeMapToRawMap); \
	DECLARE_FUNCTION(execConvertRawMapToAttributeMap); \
	DECLARE_FUNCTION(execGetAttributeSignalFormats); \
	DECLARE_FUNCTION(execGetAttributeChannelAssignments); \
	DECLARE_FUNCTION(execGetAttributeDefaultMap); \
	DECLARE_FUNCTION(execGetAttributeFunctionsMap); \
	DECLARE_FUNCTION(execGetAllAttributesInActiveMode); \
	DECLARE_FUNCTION(execGetEndingChannel); \
	DECLARE_FUNCTION(execGetChannelSpan); \
	DECLARE_FUNCTION(execGetStartingChannel); \
	DECLARE_FUNCTION(execSetStartingChannel); \
	DECLARE_FUNCTION(execSetUniverseID); \
	DECLARE_FUNCTION(execSetFixtureType); \
	DECLARE_FUNCTION(execSendZeroValues); \
	DECLARE_FUNCTION(execSendDefaultValues); \
	DECLARE_FUNCTION(execSendDMX); \
	DECLARE_FUNCTION(execRemoveFixturePatchFromLibrary); \
	DECLARE_FUNCTION(execCreateFixturePatchInLibrary);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetRemoteUniverse);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXEntityFixturePatch, NO_API)


struct Z_Construct_UClass_UDMXEntityFixturePatch_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXEntityFixturePatch(); \
	friend struct ::Z_Construct_UClass_UDMXEntityFixturePatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXEntityFixturePatch, UDMXEntity, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister) \
	DECLARE_SERIALIZER(UDMXEntityFixturePatch) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXEntityFixturePatch(UDMXEntityFixturePatch&&) = delete; \
	UDMXEntityFixturePatch(const UDMXEntityFixturePatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEntityFixturePatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEntityFixturePatch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXEntityFixturePatch) \
	NO_API virtual ~UDMXEntityFixturePatch();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_72_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXEntityFixturePatch;

// ********** End Class UDMXEntityFixturePatch *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
