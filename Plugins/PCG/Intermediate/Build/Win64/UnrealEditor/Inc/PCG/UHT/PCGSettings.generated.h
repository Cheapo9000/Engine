// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGSettings.h"

#ifdef PCG_PCGSettings_generated_h
#error "PCGSettings.generated.h already included, missing '#pragma once' in PCGSettings.h"
#endif
#define PCG_PCGSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPCGDataTypeIdentifier;

// ********** Begin ScriptStruct FPCGPropertyAliases ***********************************************
struct Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGPropertyAliases;
// ********** End ScriptStruct FPCGPropertyAliases *************************************************

// ********** Begin ScriptStruct FPCGSettingsOverridableParam **************************************
struct Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSettingsOverridableParam;
// ********** End ScriptStruct FPCGSettingsOverridableParam ****************************************

// ********** Begin ScriptStruct FPCGDataTypeInfoSettings ******************************************
struct Z_Construct_UScriptStruct_FPCGDataTypeInfoSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGDataTypeInfoSettings_Statics; \
	PCG_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGDataTypeInfo Super;


struct FPCGDataTypeInfoSettings;
// ********** End ScriptStruct FPCGDataTypeInfoSettings ********************************************

// ********** Begin Class UPCGSettingsInterface ****************************************************
struct Z_Construct_UClass_UPCGSettingsInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSettingsInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_164_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSettingsInterface(); \
	friend struct ::Z_Construct_UClass_UPCGSettingsInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSettingsInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSettingsInterface, UPCGData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSettingsInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGSettingsInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_164_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSettingsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSettingsInterface(UPCGSettingsInterface&&) = delete; \
	UPCGSettingsInterface(const UPCGSettingsInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSettingsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSettingsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSettingsInterface) \
	PCG_API virtual ~UPCGSettingsInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_161_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_164_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_164_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_164_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSettingsInterface;

// ********** End Class UPCGSettingsInterface ******************************************************

// ********** Begin Class UPCGSettings *************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetTypeUnionOfIncidentEdges); \
	DECLARE_FUNCTION(execUseSeed); \
	DECLARE_FUNCTION(execGetTypeUnionIDOfIncidentEdges);


#if WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execDisplayExecuteOnGPUSetting); \
	DECLARE_FUNCTION(execCanUseExecutionDependencyPinForCulling);
#else // WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGSettings, PCG_API)


struct Z_Construct_UClass_UPCGSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSettings, UPCGSettingsInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSettings) \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_ARCHIVESERIALIZER


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSettings(UPCGSettings&&) = delete; \
	UPCGSettings(const UPCGSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSettings) \
	PCG_API virtual ~UPCGSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_214_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_217_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSettings;

// ********** End Class UPCGSettings ***************************************************************

// ********** Begin Class UPCGSettingsInstance *****************************************************
struct Z_Construct_UClass_UPCGSettingsInstance_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSettingsInstance_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_670_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSettingsInstance(); \
	friend struct ::Z_Construct_UClass_UPCGSettingsInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSettingsInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSettingsInstance, UPCGSettingsInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSettingsInstance_NoRegister) \
	DECLARE_SERIALIZER(UPCGSettingsInstance)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_670_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSettingsInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSettingsInstance(UPCGSettingsInstance&&) = delete; \
	UPCGSettingsInstance(const UPCGSettingsInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSettingsInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSettingsInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSettingsInstance) \
	PCG_API virtual ~UPCGSettingsInstance();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_667_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_670_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_670_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_670_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSettingsInstance;

// ********** End Class UPCGSettingsInstance *******************************************************

// ********** Begin Class UPCGTrivialSettings ******************************************************
struct Z_Construct_UClass_UPCGTrivialSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGTrivialSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_711_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGTrivialSettings(); \
	friend struct ::Z_Construct_UClass_UPCGTrivialSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGTrivialSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGTrivialSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGTrivialSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGTrivialSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_711_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGTrivialSettings(UPCGTrivialSettings&&) = delete; \
	UPCGTrivialSettings(const UPCGTrivialSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGTrivialSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGTrivialSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGTrivialSettings) \
	PCG_API virtual ~UPCGTrivialSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_708_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_711_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_711_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h_711_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGTrivialSettings;

// ********** End Class UPCGTrivialSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGSettings_h

// ********** Begin Enum EPCGSettingsExecutionMode *************************************************
#define FOREACH_ENUM_EPCGSETTINGSEXECUTIONMODE(op) \
	op(EPCGSettingsExecutionMode::Enabled) \
	op(EPCGSettingsExecutionMode::Debug) \
	op(EPCGSettingsExecutionMode::Isolated) \
	op(EPCGSettingsExecutionMode::Disabled) 

enum class EPCGSettingsExecutionMode : uint8;
template<> struct TIsUEnumClass<EPCGSettingsExecutionMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSettingsExecutionMode>();
// ********** End Enum EPCGSettingsExecutionMode ***************************************************

// ********** Begin Enum EPCGSettingsType **********************************************************
#define FOREACH_ENUM_EPCGSETTINGSTYPE(op) \
	op(EPCGSettingsType::InputOutput) \
	op(EPCGSettingsType::Spatial) \
	op(EPCGSettingsType::Density) \
	op(EPCGSettingsType::Blueprint) \
	op(EPCGSettingsType::Metadata) \
	op(EPCGSettingsType::Filter) \
	op(EPCGSettingsType::Sampler) \
	op(EPCGSettingsType::Spawner) \
	op(EPCGSettingsType::Subgraph) \
	op(EPCGSettingsType::Debug) \
	op(EPCGSettingsType::Generic) \
	op(EPCGSettingsType::Param) \
	op(EPCGSettingsType::HierarchicalGeneration) \
	op(EPCGSettingsType::ControlFlow) \
	op(EPCGSettingsType::PointOps) \
	op(EPCGSettingsType::GraphParameters) \
	op(EPCGSettingsType::Reroute) \
	op(EPCGSettingsType::GPU) \
	op(EPCGSettingsType::DynamicMesh) \
	op(EPCGSettingsType::DataLayers) \
	op(EPCGSettingsType::Resource) 

enum class EPCGSettingsType : uint8;
template<> struct TIsUEnumClass<EPCGSettingsType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSettingsType>();
// ********** End Enum EPCGSettingsType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
