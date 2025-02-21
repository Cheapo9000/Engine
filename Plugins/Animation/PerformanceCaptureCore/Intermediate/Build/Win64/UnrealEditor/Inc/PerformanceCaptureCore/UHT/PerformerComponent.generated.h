// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PerformerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkSubjectName;
#ifdef PERFORMANCECAPTURECORE_PerformerComponent_generated_h
#error "PerformerComponent.generated.h already included, missing '#pragma once' in PerformerComponent.h"
#endif
#define PERFORMANCECAPTURECORE_PerformerComponent_generated_h

#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEvaluateLiveLinkData); \
	DECLARE_FUNCTION(execSetEvaluateLiveLinkData); \
	DECLARE_FUNCTION(execGetLiveLinkSubject); \
	DECLARE_FUNCTION(execSetLiveLinkSubject);


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerformerComponent(); \
	friend struct Z_Construct_UClass_UPerformerComponent_Statics; \
public: \
	DECLARE_CLASS(UPerformerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerformanceCaptureCore"), NO_API) \
	DECLARE_SERIALIZER(UPerformerComponent)


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPerformerComponent(UPerformerComponent&&); \
	UPerformerComponent(const UPerformerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerformerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerformerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerformerComponent) \
	NO_API virtual ~UPerformerComponent();


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_13_PROLOG
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERFORMANCECAPTURECORE_API UClass* StaticClass<class UPerformerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_PerformerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
