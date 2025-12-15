// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DemoNetDriver.h"

#ifdef ENGINE_DemoNetDriver_generated_h
#error "DemoNetDriver.generated.h already included, missing '#pragma once' in DemoNetDriver.h"
#endif
#define ENGINE_DemoNetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRollbackNetStartupActorInfo **************************************
struct Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRollbackNetStartupActorInfo;
// ********** End ScriptStruct FRollbackNetStartupActorInfo ****************************************

// ********** Begin ScriptStruct FMulticastRecordOptions *******************************************
struct Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_137_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMulticastRecordOptions;
// ********** End ScriptStruct FMulticastRecordOptions *********************************************

// ********** Begin Class UDemoNetDriver ***********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDemoNetDriver, ENGINE_API)


struct Z_Construct_UClass_UDemoNetDriver_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemoNetDriver(); \
	friend struct ::Z_Construct_UClass_UDemoNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDemoNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UDemoNetDriver, UNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDemoNetDriver_NoRegister) \
	DECLARE_SERIALIZER(UDemoNetDriver) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDemoNetDriver(UDemoNetDriver&&) = delete; \
	UDemoNetDriver(const UDemoNetDriver&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoNetDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoNetDriver)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_152_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDemoNetDriver;

// ********** End Class UDemoNetDriver *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
