// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetAnimInstance.h"

#ifdef PERFORMANCECAPTURECORE_RetargetAnimInstance_generated_h
#error "RetargetAnimInstance.generated.h already included, missing '#pragma once' in RetargetAnimInstance.h"
#endif
#define PERFORMANCECAPTURECORE_RetargetAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URetargetAnimInstance ****************************************************
struct Z_Construct_UClass_URetargetAnimInstance_Statics;
PERFORMANCECAPTURECORE_API UClass* Z_Construct_UClass_URetargetAnimInstance_NoRegister();

#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetAnimInstance(); \
	friend struct ::Z_Construct_UClass_URetargetAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTURECORE_API UClass* ::Z_Construct_UClass_URetargetAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(URetargetAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PerformanceCaptureCore"), Z_Construct_UClass_URetargetAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(URetargetAnimInstance)


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERFORMANCECAPTURECORE_API URetargetAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URetargetAnimInstance(URetargetAnimInstance&&) = delete; \
	URetargetAnimInstance(const URetargetAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERFORMANCECAPTURECORE_API, URetargetAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetargetAnimInstance) \
	PERFORMANCECAPTURECORE_API virtual ~URetargetAnimInstance();


#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetAnimInstance_h_20_PROLOG
#define FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetAnimInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URetargetAnimInstance;

// ********** End Class URetargetAnimInstance ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PerformanceCaptureCore_Source_PerformanceCaptureCore_Public_RetargetAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
