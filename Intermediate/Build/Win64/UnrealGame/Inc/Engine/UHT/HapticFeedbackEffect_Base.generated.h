// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Haptics/HapticFeedbackEffect_Base.h"

#ifdef ENGINE_HapticFeedbackEffect_Base_generated_h
#error "HapticFeedbackEffect_Base.generated.h already included, missing '#pragma once' in HapticFeedbackEffect_Base.h"
#endif
#define ENGINE_HapticFeedbackEffect_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHapticFeedbackEffect_Base ***********************************************
struct Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHapticFeedbackEffect_Base(); \
	friend struct ::Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(UHapticFeedbackEffect_Base, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister) \
	DECLARE_SERIALIZER(UHapticFeedbackEffect_Base)


#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHapticFeedbackEffect_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHapticFeedbackEffect_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHapticFeedbackEffect_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHapticFeedbackEffect_Base); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHapticFeedbackEffect_Base(UHapticFeedbackEffect_Base&&) = delete; \
	UHapticFeedbackEffect_Base(const UHapticFeedbackEffect_Base&) = delete; \
	ENGINE_API virtual ~UHapticFeedbackEffect_Base();


#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHapticFeedbackEffect_Base;

// ********** End Class UHapticFeedbackEffect_Base *************************************************

// ********** Begin ScriptStruct FActiveHapticFeedbackEffect ***************************************
struct Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FActiveHapticFeedbackEffect;
// ********** End ScriptStruct FActiveHapticFeedbackEffect *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
