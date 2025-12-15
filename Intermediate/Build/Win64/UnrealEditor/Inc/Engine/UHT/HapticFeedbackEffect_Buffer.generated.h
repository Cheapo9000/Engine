// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Haptics/HapticFeedbackEffect_Buffer.h"

#ifdef ENGINE_HapticFeedbackEffect_Buffer_generated_h
#error "HapticFeedbackEffect_Buffer.generated.h already included, missing '#pragma once' in HapticFeedbackEffect_Buffer.h"
#endif
#define ENGINE_HapticFeedbackEffect_Buffer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHapticFeedbackEffect_Buffer *********************************************
struct Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHapticFeedbackEffect_Buffer(); \
	friend struct ::Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister(); \
public: \
	DECLARE_CLASS2(UHapticFeedbackEffect_Buffer, UHapticFeedbackEffect_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister) \
	DECLARE_SERIALIZER(UHapticFeedbackEffect_Buffer)


#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHapticFeedbackEffect_Buffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHapticFeedbackEffect_Buffer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHapticFeedbackEffect_Buffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHapticFeedbackEffect_Buffer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHapticFeedbackEffect_Buffer(UHapticFeedbackEffect_Buffer&&) = delete; \
	UHapticFeedbackEffect_Buffer(const UHapticFeedbackEffect_Buffer&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHapticFeedbackEffect_Buffer;

// ********** End Class UHapticFeedbackEffect_Buffer ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
