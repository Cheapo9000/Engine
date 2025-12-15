// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TriggerVolume.h"

#ifdef ENGINE_TriggerVolume_generated_h
#error "TriggerVolume.generated.h already included, missing '#pragma once' in TriggerVolume.h"
#endif
#define ENGINE_TriggerVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATriggerVolume ***********************************************************
struct Z_Construct_UClass_ATriggerVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATriggerVolume(); \
	friend struct ::Z_Construct_UClass_ATriggerVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ATriggerVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ATriggerVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ATriggerVolume_NoRegister) \
	DECLARE_SERIALIZER(ATriggerVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATriggerVolume(ATriggerVolume&&) = delete; \
	ATriggerVolume(const ATriggerVolume&) = delete; \
	ENGINE_API virtual ~ATriggerVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATriggerVolume;

// ********** End Class ATriggerVolume *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
