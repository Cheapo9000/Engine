// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimMontage.h"

#ifdef ENGINE_AnimMontage_generated_h
#error "AnimMontage.generated.h already included, missing '#pragma once' in AnimMontage.h"
#endif
#define ENGINE_AnimMontage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UAnimSequenceBase;
struct FAlphaBlendArgs;
struct FMontageBlendSettings;

// ********** Begin ScriptStruct FCompositeSection *************************************************
struct Z_Construct_UScriptStruct_FCompositeSection_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositeSection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


struct FCompositeSection;
// ********** End ScriptStruct FCompositeSection ***************************************************

// ********** Begin ScriptStruct FSlotAnimationTrack ***********************************************
struct Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSlotAnimationTrack;
// ********** End ScriptStruct FSlotAnimationTrack *************************************************

// ********** Begin ScriptStruct FBranchingPoint ***************************************************
struct Z_Construct_UScriptStruct_FBranchingPoint_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBranchingPoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


struct FBranchingPoint;
// ********** End ScriptStruct FBranchingPoint *****************************************************

// ********** Begin ScriptStruct FBranchingPointMarker *********************************************
struct Z_Construct_UScriptStruct_FBranchingPointMarker_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBranchingPointMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBranchingPointMarker;
// ********** End ScriptStruct FBranchingPointMarker ***********************************************

// ********** Begin ScriptStruct FMontageBlendSettings *********************************************
struct Z_Construct_UScriptStruct_FMontageBlendSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_314_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMontageBlendSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMontageBlendSettings;
// ********** End ScriptStruct FMontageBlendSettings ***********************************************

// ********** Begin ScriptStruct FAnimMontageInstance **********************************************
struct Z_Construct_UScriptStruct_FAnimMontageInstance_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_336_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimMontageInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimMontageInstance;
// ********** End ScriptStruct FAnimMontageInstance ************************************************

// ********** Begin Class UAnimMontage *************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateSlotAnimationAsDynamicMontage_WithBlendSettings); \
	DECLARE_FUNCTION(execGetGroupName); \
	DECLARE_FUNCTION(execIsValidSectionName); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetSectionName); \
	DECLARE_FUNCTION(execGetSectionIndex); \
	DECLARE_FUNCTION(execIsValidAdditiveSlot); \
	DECLARE_FUNCTION(execGetFirstAnimReference); \
	DECLARE_FUNCTION(execIsDynamicMontage); \
	DECLARE_FUNCTION(execGetDefaultBlendOutTime); \
	DECLARE_FUNCTION(execGetDefaultBlendInTime); \
	DECLARE_FUNCTION(execGetBlendOutArgs); \
	DECLARE_FUNCTION(execGetBlendInArgs);


#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimMontage, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UAnimMontage_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_INCLASS \
private: \
	static void StaticRegisterNativesUAnimMontage(); \
	friend struct ::Z_Construct_UClass_UAnimMontage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimMontage_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimMontage, UAnimCompositeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimMontage_NoRegister) \
	DECLARE_SERIALIZER(UAnimMontage) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMontage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimMontage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMontage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimMontage(UAnimMontage&&) = delete; \
	UAnimMontage(const UAnimMontage&) = delete; \
	ENGINE_API virtual ~UAnimMontage();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_621_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_624_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimMontage;

// ********** End Class UAnimMontage ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h

// ********** Begin Enum EAnimNotifyEventType ******************************************************
#define FOREACH_ENUM_EANIMNOTIFYEVENTTYPE(op) \
	op(EAnimNotifyEventType::Begin) \
	op(EAnimNotifyEventType::End) 

namespace EAnimNotifyEventType { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimNotifyEventType::Type>();
// ********** End Enum EAnimNotifyEventType ********************************************************

// ********** Begin Enum EMontageBlendMode *********************************************************
#define FOREACH_ENUM_EMONTAGEBLENDMODE(op) \
	op(EMontageBlendMode::Standard) \
	op(EMontageBlendMode::Inertialization) 

enum class EMontageBlendMode : uint8;
template<> struct TIsUEnumClass<EMontageBlendMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMontageBlendMode>();
// ********** End Enum EMontageBlendMode ***********************************************************

// ********** Begin Enum EMontageSubStepResult *****************************************************
#define FOREACH_ENUM_EMONTAGESUBSTEPRESULT(op) \
	op(EMontageSubStepResult::Moved) \
	op(EMontageSubStepResult::NotMoved) \
	op(EMontageSubStepResult::InvalidSection) \
	op(EMontageSubStepResult::InvalidMontage) 

enum class EMontageSubStepResult : uint8;
template<> struct TIsUEnumClass<EMontageSubStepResult> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMontageSubStepResult>();
// ********** End Enum EMontageSubStepResult *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
