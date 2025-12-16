// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCaptureSourceSync.h"

#ifdef METAHUMANCAPTURESOURCE_MetaHumanCaptureSourceSync_generated_h
#error "MetaHumanCaptureSourceSync.generated.h already included, missing '#pragma once' in MetaHumanCaptureSourceSync.h"
#endif
#define METAHUMANCAPTURESOURCE_MetaHumanCaptureSourceSync_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMetaHumanTake;
struct FMetaHumanTakeInfo;

// ********** Begin Class UMetaHumanCaptureSourceSync **********************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSourceSync_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTakes); \
	DECLARE_FUNCTION(execGetTakeInfo); \
	DECLARE_FUNCTION(execGetTakeIds); \
	DECLARE_FUNCTION(execGetNumTakes); \
	DECLARE_FUNCTION(execCancelProcessing); \
	DECLARE_FUNCTION(execIsCancelling); \
	DECLARE_FUNCTION(execIsProcessing); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execSetTargetPath); \
	DECLARE_FUNCTION(execRefresh); \
	DECLARE_FUNCTION(execStartup); \
	DECLARE_FUNCTION(execCanCancel); \
	DECLARE_FUNCTION(execCanIngestTakes); \
	DECLARE_FUNCTION(execCanStartup);


struct Z_Construct_UClass_UMetaHumanCaptureSourceSync_Statics;
METAHUMANCAPTURESOURCE_API UClass* Z_Construct_UClass_UMetaHumanCaptureSourceSync_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSourceSync_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCaptureSourceSync(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCaptureSourceSync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCAPTURESOURCE_API UClass* ::Z_Construct_UClass_UMetaHumanCaptureSourceSync_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCaptureSourceSync, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCaptureSource"), Z_Construct_UClass_UMetaHumanCaptureSourceSync_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCaptureSourceSync)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSourceSync_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCaptureSourceSync(UMetaHumanCaptureSourceSync&&) = delete; \
	UMetaHumanCaptureSourceSync(const UMetaHumanCaptureSourceSync&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCaptureSourceSync); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCaptureSourceSync)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSourceSync_h_16_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSourceSync_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSourceSync_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSourceSync_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSourceSync_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCaptureSourceSync;

// ********** End Class UMetaHumanCaptureSourceSync ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanCaptureSource_Public_MetaHumanCaptureSourceSync_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
