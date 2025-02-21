// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACapturePerformer;
class UIKRetargeter;
struct FRetargetProfile;
#ifdef PERFORMANCECAPTURECORE_CaptureCharacter_generated_h
#error "CaptureCharacter.generated.h already included, missing '#pragma once' in CaptureCharacter.h"
#endif
#define PERFORMANCECAPTURECORE_CaptureCharacter_generated_h

#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CaptureCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetForceAllSkeletalMeshesToFollowLeader); \
	DECLARE_FUNCTION(execSetRetargetAsset); \
	DECLARE_FUNCTION(execSetSourcePerformer); \
	DECLARE_FUNCTION(execGetCustomRetargetProfile); \
	DECLARE_FUNCTION(execSetCustomRetargetProfile);


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CaptureCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptureCharacter(); \
	friend struct Z_Construct_UClass_ACaptureCharacter_Statics; \
public: \
	DECLARE_CLASS(ACaptureCharacter, ASkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerformanceCaptureCore"), NO_API) \
	DECLARE_SERIALIZER(ACaptureCharacter)


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CaptureCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACaptureCharacter(ACaptureCharacter&&); \
	ACaptureCharacter(const ACaptureCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptureCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptureCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaptureCharacter) \
	NO_API virtual ~ACaptureCharacter();


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CaptureCharacter_h_14_PROLOG
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CaptureCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CaptureCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CaptureCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CaptureCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERFORMANCECAPTURECORE_API UClass* StaticClass<class ACaptureCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_CaptureCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
