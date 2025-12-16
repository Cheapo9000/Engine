// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigTestData.h"

#ifdef CONTROLRIG_ControlRigTestData_generated_h
#error "ControlRigTestData.generated.h already included, missing '#pragma once' in ControlRigTestData.h"
#endif
#define CONTROLRIG_ControlRigTestData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlRigTestDataFrame ******************************************
struct Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigTestDataFrame;
// ********** End ScriptStruct FControlRigTestDataFrame ********************************************

// ********** Begin Class UControlRigTestData ******************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFrameIndexForTime);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_56_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigTestData, CONTROLRIG_API)


struct Z_Construct_UClass_UControlRigTestData_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigTestData_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigTestData(); \
	friend struct ::Z_Construct_UClass_UControlRigTestData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigTestData_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigTestData, UControlRigReplay, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigTestData_NoRegister) \
	DECLARE_SERIALIZER(UControlRigTestData) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_56_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigTestData(UControlRigTestData&&) = delete; \
	UControlRigTestData(const UControlRigTestData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigTestData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigTestData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigTestData) \
	CONTROLRIG_API virtual ~UControlRigTestData();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_53_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigTestData;

// ********** End Class UControlRigTestData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
