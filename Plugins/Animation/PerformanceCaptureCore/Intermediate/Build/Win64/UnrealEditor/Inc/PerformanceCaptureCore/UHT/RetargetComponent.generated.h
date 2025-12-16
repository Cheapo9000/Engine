// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetComponent.h"

#ifdef PERFORMANCECAPTURECORE_RetargetComponent_generated_h
#error "RetargetComponent.generated.h already included, missing '#pragma once' in RetargetComponent.h"
#endif
#define PERFORMANCECAPTURECORE_RetargetComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACapturePerformer;
class UIKRetargeter;
class USkeletalMeshComponent;
struct FRetargetProfile;

// ********** Begin Class URetargetComponent *******************************************************
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSourcePerformerNull); \
	DECLARE_FUNCTION(execSetSourcePerformer); \
	DECLARE_FUNCTION(execSetForceMeshesFollowLeader); \
	DECLARE_FUNCTION(execGetCustomRetargetProfile); \
	DECLARE_FUNCTION(execSetCustomRetargetProfile); \
	DECLARE_FUNCTION(execSetRetargetAsset); \
	DECLARE_FUNCTION(execSetControlledMesh); \
	DECLARE_FUNCTION(execSetSourcePerformerMesh);


struct Z_Construct_UClass_URetargetComponent_Statics;
PERFORMANCECAPTURECORE_API UClass* Z_Construct_UClass_URetargetComponent_NoRegister();

#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetComponent(); \
	friend struct ::Z_Construct_UClass_URetargetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTURECORE_API UClass* ::Z_Construct_UClass_URetargetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URetargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerformanceCaptureCore"), Z_Construct_UClass_URetargetComponent_NoRegister) \
	DECLARE_SERIALIZER(URetargetComponent)


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URetargetComponent(URetargetComponent&&) = delete; \
	URetargetComponent(const URetargetComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERFORMANCECAPTURECORE_API, URetargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URetargetComponent) \
	PERFORMANCECAPTURECORE_API virtual ~URetargetComponent();


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_16_PROLOG
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URetargetComponent;

// ********** End Class URetargetComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
