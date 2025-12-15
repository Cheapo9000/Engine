// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimSequence.h"

#ifdef ENGINE_AnimSequence_generated_h
#error "AnimSequence.generated.h already included, missing '#pragma once' in AnimSequence.h"
#endif
#define ENGINE_AnimSequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;

// ********** Begin ScriptStruct FAnimSequenceTrackContainer ***************************************
struct Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimSequenceTrackContainer;
// ********** End ScriptStruct FAnimSequenceTrackContainer *****************************************

// ********** Begin ScriptStruct FTranslationTrack *************************************************
struct Z_Construct_UScriptStruct_FTranslationTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTranslationTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTranslationTrack;
// ********** End ScriptStruct FTranslationTrack ***************************************************

// ********** Begin ScriptStruct FRotationTrack ****************************************************
struct Z_Construct_UScriptStruct_FRotationTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRotationTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRotationTrack;
// ********** End ScriptStruct FRotationTrack ******************************************************

// ********** Begin ScriptStruct FScaleTrack *******************************************************
struct Z_Construct_UScriptStruct_FScaleTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_122_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScaleTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FScaleTrack;
// ********** End ScriptStruct FScaleTrack *********************************************************

// ********** Begin ScriptStruct FCurveTrack *******************************************************
struct Z_Construct_UScriptStruct_FCurveTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCurveTrack;
// ********** End ScriptStruct FCurveTrack *********************************************************

// ********** Begin ScriptStruct FCompressedTrack **************************************************
struct Z_Construct_UScriptStruct_FCompressedTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_160_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompressedTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCompressedTrack;
// ********** End ScriptStruct FCompressedTrack ****************************************************

// ********** Begin Class UAnimSequence ************************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execUpdateRetargetSourceAssetData); \
	DECLARE_FUNCTION(execGetRetargetSourceAsset); \
	DECLARE_FUNCTION(execClearRetargetSourceAsset); \
	DECLARE_FUNCTION(execSetRetargetSourceAsset);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequence, ENGINE_API)


struct Z_Construct_UClass_UAnimSequence_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend struct ::Z_Construct_UClass_UAnimSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimSequence_NoRegister) \
	DECLARE_SERIALIZER(UAnimSequence) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSequence(UAnimSequence&&) = delete; \
	UAnimSequence(const UAnimSequence&) = delete; \
	ENGINE_API virtual ~UAnimSequence();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_201_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSequence;

// ********** End Class UAnimSequence **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h

// ********** Begin Enum EStripAnimDataOnDedicatedServerSettings ***********************************
#define FOREACH_ENUM_ESTRIPANIMDATAONDEDICATEDSERVERSETTINGS(op) \
	op(EStripAnimDataOnDedicatedServerSettings::UseProjectSetting) \
	op(EStripAnimDataOnDedicatedServerSettings::StripAnimDataOnDedicatedServer) \
	op(EStripAnimDataOnDedicatedServerSettings::DoNotStripAnimDataOnDedicatedServer) 

enum class EStripAnimDataOnDedicatedServerSettings : uint8;
template<> struct TIsUEnumClass<EStripAnimDataOnDedicatedServerSettings> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStripAnimDataOnDedicatedServerSettings>();
// ********** End Enum EStripAnimDataOnDedicatedServerSettings *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
