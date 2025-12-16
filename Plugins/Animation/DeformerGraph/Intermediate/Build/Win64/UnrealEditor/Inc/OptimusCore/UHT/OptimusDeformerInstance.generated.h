// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDeformerInstance.h"

#ifdef OPTIMUSCORE_OptimusDeformerInstance_generated_h
#error "OptimusDeformerInstance.generated.h already included, missing '#pragma once' in OptimusDeformerInstance.h"
#endif
#define OPTIMUSCORE_OptimusDeformerInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin ScriptStruct FOptimusDeformerInstanceExecInfo **********************************
struct Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusDeformerInstanceExecInfo;
// ********** End ScriptStruct FOptimusDeformerInstanceExecInfo ************************************

// ********** Begin ScriptStruct FOptimusDeformerInstanceComponentBinding **************************
struct Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_119_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusDeformerInstanceComponentBinding;
// ********** End ScriptStruct FOptimusDeformerInstanceComponentBinding ****************************

// ********** Begin Class UOptimusDeformerInstanceSettings *****************************************
struct Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceSettings_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusDeformerInstanceSettings(); \
	friend struct ::Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusDeformerInstanceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusDeformerInstanceSettings, UMeshDeformerInstanceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusDeformerInstanceSettings_NoRegister) \
	DECLARE_SERIALIZER(UOptimusDeformerInstanceSettings)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusDeformerInstanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusDeformerInstanceSettings(UOptimusDeformerInstanceSettings&&) = delete; \
	UOptimusDeformerInstanceSettings(const UOptimusDeformerInstanceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusDeformerInstanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerInstanceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeformerInstanceSettings) \
	OPTIMUSCORE_API virtual ~UOptimusDeformerInstanceSettings();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_140_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_144_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusDeformerInstanceSettings;

// ********** End Class UOptimusDeformerInstanceSettings *******************************************

// ********** Begin Class UOptimusDeformerInstance *************************************************
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_176_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnqueueTriggerGraph); \
	DECLARE_FUNCTION(execSetNameArrayVariable); \
	DECLARE_FUNCTION(execSetNameVariable); \
	DECLARE_FUNCTION(execSetTransformArrayVariable); \
	DECLARE_FUNCTION(execSetTransformVariable); \
	DECLARE_FUNCTION(execSetRotatorArrayVariable); \
	DECLARE_FUNCTION(execSetRotatorVariable); \
	DECLARE_FUNCTION(execSetQuatArrayVariable); \
	DECLARE_FUNCTION(execSetQuatVariable); \
	DECLARE_FUNCTION(execSetLinearColorArrayVariable); \
	DECLARE_FUNCTION(execSetLinearColorVariable); \
	DECLARE_FUNCTION(execSetVector4ArrayVariable); \
	DECLARE_FUNCTION(execSetVector4Variable); \
	DECLARE_FUNCTION(execSetVectorArrayVariable); \
	DECLARE_FUNCTION(execSetVectorVariable); \
	DECLARE_FUNCTION(execSetVector2ArrayVariable); \
	DECLARE_FUNCTION(execSetVector2Variable); \
	DECLARE_FUNCTION(execSetFloatArrayVariable); \
	DECLARE_FUNCTION(execSetFloatVariable); \
	DECLARE_FUNCTION(execSetInt4ArrayVariable); \
	DECLARE_FUNCTION(execSetInt4Variable); \
	DECLARE_FUNCTION(execSetInt3ArrayVariable); \
	DECLARE_FUNCTION(execSetInt3Variable); \
	DECLARE_FUNCTION(execSetInt2ArrayVariable); \
	DECLARE_FUNCTION(execSetInt2Variable); \
	DECLARE_FUNCTION(execSetIntArrayVariable); \
	DECLARE_FUNCTION(execSetIntVariable); \
	DECLARE_FUNCTION(execSetBoolArrayVariable); \
	DECLARE_FUNCTION(execSetBoolVariable);


struct Z_Construct_UClass_UOptimusDeformerInstance_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_176_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusDeformerInstance(); \
	friend struct ::Z_Construct_UClass_UOptimusDeformerInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusDeformerInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusDeformerInstance, UMeshDeformerInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusDeformerInstance_NoRegister) \
	DECLARE_SERIALIZER(UOptimusDeformerInstance)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_176_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusDeformerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusDeformerInstance(UOptimusDeformerInstance&&) = delete; \
	UOptimusDeformerInstance(const UOptimusDeformerInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusDeformerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDeformerInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDeformerInstance) \
	OPTIMUSCORE_API virtual ~UOptimusDeformerInstance();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_173_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_176_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_176_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_176_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_176_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusDeformerInstance;

// ********** End Class UOptimusDeformerInstance ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
