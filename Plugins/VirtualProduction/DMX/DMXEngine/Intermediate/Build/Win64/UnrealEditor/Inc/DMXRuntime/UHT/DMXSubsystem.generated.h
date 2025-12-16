// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXSubsystem.h"

#ifdef DMXRUNTIME_DMXSubsystem_generated_h
#error "DMXSubsystem.generated.h already included, missing '#pragma once' in DMXSubsystem.h"
#endif
#define DMXRUNTIME_DMXSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityController;
class UDMXEntityFixturePatch;
class UDMXEntityFixtureType;
class UDMXLibrary;
class UDMXSubsystem;
enum class EDMXFixtureSignalFormat : uint8;
enum class EDMXPixelMappingDistribution : uint8;
enum class EDMXSendResult : uint8;
struct FDMXAttributeName;
struct FDMXCell;
struct FDMXEntityFixturePatchRef;
struct FDMXEntityFixtureTypeRef;
struct FDMXFixtureCategory;
struct FDMXFixtureMatrix;
struct FDMXInputPortReference;
struct FDMXOutputPortReference;
struct FDMXProtocolName;

// ********** Begin Delegate FProtocolReceivedDelegate *********************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_23_DELEGATE \
DMXRUNTIME_API void FProtocolReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ProtocolReceivedDelegate, FDMXProtocolName Protocol, int32 RemoteUniverse, TArray<uint8> const& DMXBuffer);


// ********** End Delegate FProtocolReceivedDelegate ***********************************************

// ********** Begin Class UDMXSubsystem ************************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPixelMappingDistributionSort); \
	DECLARE_FUNCTION(execGetAllMatrixCells); \
	DECLARE_FUNCTION(execGetMatrixCell); \
	DECLARE_FUNCTION(execGetCellAttributes); \
	DECLARE_FUNCTION(execGetMatrixProperties); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsAbsolute); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsRelative); \
	DECLARE_FUNCTION(execGetMatrixCellValue); \
	DECLARE_FUNCTION(execSetMatrixCellValue); \
	DECLARE_FUNCTION(execGetAttributeLabel); \
	DECLARE_FUNCTION(execGetDMXSubsystem_Callable); \
	DECLARE_FUNCTION(execGetDMXSubsystem_Pure); \
	DECLARE_FUNCTION(execPatchIsOfSelectedType); \
	DECLARE_FUNCTION(execGetFunctionsValue); \
	DECLARE_FUNCTION(execGetFunctionsMapForPatch); \
	DECLARE_FUNCTION(execGetFunctionsMap); \
	DECLARE_FUNCTION(execGetFixturePatch); \
	DECLARE_FUNCTION(execGetFixtureType); \
	DECLARE_FUNCTION(execGetNormalizedAttributeValue); \
	DECLARE_FUNCTION(execIntToNormalizedValue); \
	DECLARE_FUNCTION(execIntValueToBytes); \
	DECLARE_FUNCTION(execNormalizedValueToBytes); \
	DECLARE_FUNCTION(execBytesToNormalizedValue); \
	DECLARE_FUNCTION(execBytesToInt); \
	DECLARE_FUNCTION(execGetDMXLibraries); \
	DECLARE_FUNCTION(execLoadDMXLibrariesSynchronous); \
	DECLARE_FUNCTION(execGetControllerByName); \
	DECLARE_FUNCTION(execGetAllControllersInLibrary); \
	DECLARE_FUNCTION(execGetAllUniversesInController); \
	DECLARE_FUNCTION(execGetFixtureTypeByName); \
	DECLARE_FUNCTION(execGetAllFixtureTypesInLibrary); \
	DECLARE_FUNCTION(execGetFixtureByName); \
	DECLARE_FUNCTION(execGetAllFixturesInLibrary); \
	DECLARE_FUNCTION(execGetAllFixturesWithTag); \
	DECLARE_FUNCTION(execGetFixtureAttributes); \
	DECLARE_FUNCTION(execGetAllFixturesInUniverse); \
	DECLARE_FUNCTION(execGetAllFixturesOfCategory); \
	DECLARE_FUNCTION(execGetAllFixturesOfType); \
	DECLARE_FUNCTION(execGetDMXDataFromOutputPort); \
	DECLARE_FUNCTION(execGetDMXDataFromInputPort); \
	DECLARE_FUNCTION(execGetRawBuffer); \
	DECLARE_FUNCTION(execSendDMXToOutputPort); \
	DECLARE_FUNCTION(execSendDMXRaw); \
	DECLARE_FUNCTION(execSendDMX); \
	DECLARE_FUNCTION(execClearDMXBuffers);


struct Z_Construct_UClass_UDMXSubsystem_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXSubsystem(); \
	friend struct ::Z_Construct_UClass_UDMXSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDMXSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXSubsystem(UDMXSubsystem&&) = delete; \
	UDMXSubsystem(const UDMXSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXSubsystem) \
	NO_API virtual ~UDMXSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXSubsystem;

// ********** End Class UDMXSubsystem **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
