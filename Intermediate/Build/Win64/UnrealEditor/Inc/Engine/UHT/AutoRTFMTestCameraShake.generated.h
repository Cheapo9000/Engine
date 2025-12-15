// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/AutoRTFM/AutoRTFMTestCameraShake.h"

#ifdef ENGINE_AutoRTFMTestCameraShake_generated_h
#error "AutoRTFMTestCameraShake.generated.h already included, missing '#pragma once' in AutoRTFMTestCameraShake.h"
#endif
#define ENGINE_AutoRTFMTestCameraShake_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutoRTFMTestCameraShake *************************************************
struct Z_Construct_UClass_UAutoRTFMTestCameraShake_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestCameraShake_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestCameraShake_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoRTFMTestCameraShake(); \
	friend struct ::Z_Construct_UClass_UAutoRTFMTestCameraShake_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAutoRTFMTestCameraShake_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutoRTFMTestCameraShake, UCameraShakeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAutoRTFMTestCameraShake_NoRegister) \
	DECLARE_SERIALIZER(UAutoRTFMTestCameraShake)


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestCameraShake_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoRTFMTestCameraShake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutoRTFMTestCameraShake(UAutoRTFMTestCameraShake&&) = delete; \
	UAutoRTFMTestCameraShake(const UAutoRTFMTestCameraShake&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoRTFMTestCameraShake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoRTFMTestCameraShake); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoRTFMTestCameraShake) \
	NO_API virtual ~UAutoRTFMTestCameraShake();


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestCameraShake_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestCameraShake_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestCameraShake_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestCameraShake_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutoRTFMTestCameraShake;

// ********** End Class UAutoRTFMTestCameraShake ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestCameraShake_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
