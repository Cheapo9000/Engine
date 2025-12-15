// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifies/AnimNotifyState_Trail.h"

#ifdef ENGINE_AnimNotifyState_Trail_generated_h
#error "AnimNotifyState_Trail.generated.h already included, missing '#pragma once' in AnimNotifyState_Trail.h"
#endif
#define ENGINE_AnimNotifyState_Trail_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UParticleSystem;
class USkeletalMeshComponent;

// ********** Begin Class UAnimNotifyState_Trail ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAnimNotifyState_Trail_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_Trail(); \
	friend struct ::Z_Construct_UClass_UAnimNotifyState_Trail_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNotifyState_Trail, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister) \
	DECLARE_SERIALIZER(UAnimNotifyState_Trail)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimNotifyState_Trail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState_Trail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimNotifyState_Trail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_Trail); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNotifyState_Trail(UAnimNotifyState_Trail&&) = delete; \
	UAnimNotifyState_Trail(const UAnimNotifyState_Trail&) = delete; \
	ENGINE_API virtual ~UAnimNotifyState_Trail();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNotifyState_Trail;

// ********** End Class UAnimNotifyState_Trail *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
