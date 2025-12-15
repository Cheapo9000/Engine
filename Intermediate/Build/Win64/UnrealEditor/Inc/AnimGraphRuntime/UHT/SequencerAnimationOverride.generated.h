// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerAnimationOverride.h"

#ifdef ANIMGRAPHRUNTIME_SequencerAnimationOverride_generated_h
#error "SequencerAnimationOverride.generated.h already included, missing '#pragma once' in SequencerAnimationOverride.h"
#endif
#define ANIMGRAPHRUNTIME_SequencerAnimationOverride_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USequencerAnimationOverride ******************************************
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<FName> GetSequencerAnimSlotNames_Implementation() const { return TArray<FName>(); }; \
	DECLARE_FUNCTION(execGetSequencerAnimSlotNames); \
	DECLARE_FUNCTION(execAllowsCinematicOverride);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USequencerAnimationOverride_Statics;
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationOverride_NoRegister();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API USequencerAnimationOverride(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencerAnimationOverride(USequencerAnimationOverride&&) = delete; \
	USequencerAnimationOverride(const USequencerAnimationOverride&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, USequencerAnimationOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerAnimationOverride); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerAnimationOverride) \
	virtual ~USequencerAnimationOverride() = default;


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSequencerAnimationOverride(); \
	friend struct ::Z_Construct_UClass_USequencerAnimationOverride_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPHRUNTIME_API UClass* ::Z_Construct_UClass_USequencerAnimationOverride_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencerAnimationOverride, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), Z_Construct_UClass_USequencerAnimationOverride_NoRegister) \
	DECLARE_SERIALIZER(USequencerAnimationOverride)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISequencerAnimationOverride() {} \
public: \
	typedef USequencerAnimationOverride UClassType; \
	typedef ISequencerAnimationOverride ThisClass; \
	ANIMGRAPHRUNTIME_API static bool Execute_AllowsCinematicOverride(const UObject* O); \
	ANIMGRAPHRUNTIME_API static TArray<FName> Execute_GetSequencerAnimSlotNames(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_20_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencerAnimationOverride;

// ********** End Interface USequencerAnimationOverride ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationOverride_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
