// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PerformerComponent.h"

#ifdef PERFORMANCECAPTURECORE_PerformerComponent_generated_h
#error "PerformerComponent.generated.h already included, missing '#pragma once' in PerformerComponent.h"
#endif
#define PERFORMANCECAPTURECORE_PerformerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FLiveLinkSubjectName;

// ********** Begin Class UPerformerComponent ******************************************************
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetForceMeshesFollowLeader); \
	DECLARE_FUNCTION(execSetControlledMesh); \
	DECLARE_FUNCTION(execGetEvaluateLiveLinkData); \
	DECLARE_FUNCTION(execSetEvaluateLiveLinkData); \
	DECLARE_FUNCTION(execGetLiveLinkSubject); \
	DECLARE_FUNCTION(execSetLiveLinkSubject);


struct Z_Construct_UClass_UPerformerComponent_Statics;
PERFORMANCECAPTURECORE_API UClass* Z_Construct_UClass_UPerformerComponent_NoRegister();

#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerformerComponent(); \
	friend struct ::Z_Construct_UClass_UPerformerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTURECORE_API UClass* ::Z_Construct_UClass_UPerformerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPerformerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerformanceCaptureCore"), Z_Construct_UClass_UPerformerComponent_NoRegister) \
	DECLARE_SERIALIZER(UPerformerComponent)


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPerformerComponent(UPerformerComponent&&) = delete; \
	UPerformerComponent(const UPerformerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERFORMANCECAPTURECORE_API, UPerformerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerformerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerformerComponent) \
	PERFORMANCECAPTURECORE_API virtual ~UPerformerComponent();


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_15_PROLOG
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPerformerComponent;

// ********** End Class UPerformerComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
