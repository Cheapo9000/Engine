// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRetargeter;
class USkeletalMeshComponent;
struct FRetargetProfile;
#ifdef PERFORMANCECAPTURECORE_RetargetComponent_generated_h
#error "RetargetComponent.generated.h already included, missing '#pragma once' in RetargetComponent.h"
#endif
#define PERFORMANCECAPTURECORE_RetargetComponent_generated_h

#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomRetargetProfile); \
	DECLARE_FUNCTION(execSetCustomRetargetProfile); \
	DECLARE_FUNCTION(execSetRetargetAsset); \
	DECLARE_FUNCTION(execSetControlledMesh); \
	DECLARE_FUNCTION(execSetSourcePerformerMesh);


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetComponent(); \
	friend struct Z_Construct_UClass_URetargetComponent_Statics; \
public: \
	DECLARE_CLASS(URetargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerformanceCaptureCore"), NO_API) \
	DECLARE_SERIALIZER(URetargetComponent)


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URetargetComponent(URetargetComponent&&); \
	URetargetComponent(const URetargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URetargetComponent) \
	NO_API virtual ~URetargetComponent();


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_14_PROLOG
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERFORMANCECAPTURECORE_API UClass* StaticClass<class URetargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
