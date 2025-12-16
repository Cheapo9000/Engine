// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CapturePerformer.h"

#ifdef PERFORMANCECAPTURECORE_CapturePerformer_generated_h
#error "CapturePerformer.generated.h already included, missing '#pragma once' in CapturePerformer.h"
#endif
#define PERFORMANCECAPTURECORE_CapturePerformer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
struct FLiveLinkSubjectName;

// ********** Begin Class ACapturePerformer ********************************************************
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CapturePerformer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMocapMesh); \
	DECLARE_FUNCTION(execGetEvaluateLiveLinkData); \
	DECLARE_FUNCTION(execSetEvaluateLiveLinkData); \
	DECLARE_FUNCTION(execGetLiveLinkSubject); \
	DECLARE_FUNCTION(execSetLiveLinkSubject);


struct Z_Construct_UClass_ACapturePerformer_Statics;
PERFORMANCECAPTURECORE_API UClass* Z_Construct_UClass_ACapturePerformer_NoRegister();

#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CapturePerformer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapturePerformer(); \
	friend struct ::Z_Construct_UClass_ACapturePerformer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTURECORE_API UClass* ::Z_Construct_UClass_ACapturePerformer_NoRegister(); \
public: \
	DECLARE_CLASS2(ACapturePerformer, ASkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerformanceCaptureCore"), Z_Construct_UClass_ACapturePerformer_NoRegister) \
	DECLARE_SERIALIZER(ACapturePerformer)


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CapturePerformer_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACapturePerformer(ACapturePerformer&&) = delete; \
	ACapturePerformer(const ACapturePerformer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERFORMANCECAPTURECORE_API, ACapturePerformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapturePerformer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapturePerformer) \
	PERFORMANCECAPTURECORE_API virtual ~ACapturePerformer();


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CapturePerformer_h_16_PROLOG
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CapturePerformer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CapturePerformer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CapturePerformer_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CapturePerformer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACapturePerformer;

// ********** End Class ACapturePerformer **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CapturePerformer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
