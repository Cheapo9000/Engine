// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanPerformanceViewportSettings.h"

#ifdef METAHUMANPERFORMANCE_MetaHumanPerformanceViewportSettings_generated_h
#error "MetaHumanPerformanceViewportSettings.generated.h already included, missing '#pragma once' in MetaHumanPerformanceViewportSettings.h"
#endif
#define METAHUMANPERFORMANCE_MetaHumanPerformanceViewportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EABImageViewMode : int32;

// ********** Begin ScriptStruct FMetaHumanPerformanceViewportState ********************************
struct Z_Construct_UScriptStruct_FMetaHumanPerformanceViewportState_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanPerformanceViewportState_Statics; \
	METAHUMANPERFORMANCE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanPerformanceViewportState;
// ********** End ScriptStruct FMetaHumanPerformanceViewportState **********************************

// ********** Begin Class UMetaHumanPerformanceViewportSettings ************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleControlRigVisibility); \
	DECLARE_FUNCTION(execIsControlRigVisible);


struct Z_Construct_UClass_UMetaHumanPerformanceViewportSettings_Statics;
METAHUMANPERFORMANCE_API UClass* Z_Construct_UClass_UMetaHumanPerformanceViewportSettings_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanPerformanceViewportSettings(); \
	friend struct ::Z_Construct_UClass_UMetaHumanPerformanceViewportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANPERFORMANCE_API UClass* ::Z_Construct_UClass_UMetaHumanPerformanceViewportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanPerformanceViewportSettings, UMetaHumanViewportSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanPerformance"), Z_Construct_UClass_UMetaHumanPerformanceViewportSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanPerformanceViewportSettings)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanPerformanceViewportSettings(UMetaHumanPerformanceViewportSettings&&) = delete; \
	UMetaHumanPerformanceViewportSettings(const UMetaHumanPerformanceViewportSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanPerformanceViewportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanPerformanceViewportSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanPerformanceViewportSettings) \
	NO_API virtual ~UMetaHumanPerformanceViewportSettings();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h_23_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanPerformanceViewportSettings;

// ********** End Class UMetaHumanPerformanceViewportSettings **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanPerformance_Private_MetaHumanPerformanceViewportSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
