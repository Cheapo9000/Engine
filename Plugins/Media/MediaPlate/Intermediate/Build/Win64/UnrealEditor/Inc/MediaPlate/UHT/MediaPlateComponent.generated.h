// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlateComponent.h"

#ifdef MEDIAPLATE_MediaPlateComponent_generated_h
#error "MediaPlateComponent.generated.h already included, missing '#pragma once' in MediaPlateComponent.h"
#endif
#define MEDIAPLATE_MediaPlateComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
class UMediaPlaylist;
class UMediaSource;
class UMediaTexture;
class UObject;
enum class EMediaPlateEventState : uint8;
struct FLatentActionInfo;
struct FTimespan;

// ********** Begin ScriptStruct FMediaTextureResourceSettings *************************************
struct Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics;
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics; \
	MEDIAPLATE_API static class UScriptStruct* StaticStruct();


struct FMediaTextureResourceSettings;
// ********** End ScriptStruct FMediaTextureResourceSettings ***************************************

// ********** Begin Class UMediaPlateComponent *****************************************************
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_80_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnMediaSuspended); \
	DECLARE_FUNCTION(execOnMediaResumed); \
	DECLARE_FUNCTION(execOnMediaEnd); \
	DECLARE_FUNCTION(execOnMediaOpened); \
	DECLARE_FUNCTION(execSetLetterboxAspectRatio); \
	DECLARE_FUNCTION(execGetLetterboxAspectRatio); \
	DECLARE_FUNCTION(execSetIsAspectRatioAuto); \
	DECLARE_FUNCTION(execGetIsAspectRatioAuto); \
	DECLARE_FUNCTION(execSetPlayOnlyWhenVisible); \
	DECLARE_FUNCTION(execGetMeshRange); \
	DECLARE_FUNCTION(execSetMeshRange); \
	DECLARE_FUNCTION(execSetEnableAudio); \
	DECLARE_FUNCTION(execSelectMediaPlaylistAsset); \
	DECLARE_FUNCTION(execSelectMediaSourceAsset); \
	DECLARE_FUNCTION(execSelectExternalMedia); \
	DECLARE_FUNCTION(execGetSelectedMediaSource); \
	DECLARE_FUNCTION(execGetMediaPlaylist); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execIsMediaPlatePlaying); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execOpenLatent); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsEventStateChangeAllowed); \
	DECLARE_FUNCTION(execGetMediaTexture); \
	DECLARE_FUNCTION(execGetMediaPlayer);


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_80_ACCESSORS \
static void SetMediaPlateResource_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UMediaPlateComponent_Statics;
MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateComponent_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlateComponent(); \
	friend struct ::Z_Construct_UClass_UMediaPlateComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLATE_API UClass* ::Z_Construct_UClass_UMediaPlateComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaPlate"), Z_Construct_UClass_UMediaPlateComponent_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMediaPlateComponent*>(this); }


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAPLATE_API UMediaPlateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAPLATE_API, UMediaPlateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlateComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlateComponent(UMediaPlateComponent&&) = delete; \
	UMediaPlateComponent(const UMediaPlateComponent&) = delete; \
	MEDIAPLATE_API virtual ~UMediaPlateComponent();


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_76_PROLOG
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_80_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_80_ACCESSORS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_80_INCLASS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlateComponent;

// ********** End Class UMediaPlateComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h

// ********** Begin Enum EMediaPlateEventState *****************************************************
#define FOREACH_ENUM_EMEDIAPLATEEVENTSTATE(op) \
	op(EMediaPlateEventState::Play) \
	op(EMediaPlateEventState::Open) \
	op(EMediaPlateEventState::Close) \
	op(EMediaPlateEventState::Pause) \
	op(EMediaPlateEventState::Reverse) \
	op(EMediaPlateEventState::Forward) \
	op(EMediaPlateEventState::Rewind) \
	op(EMediaPlateEventState::Next) \
	op(EMediaPlateEventState::Previous) 

enum class EMediaPlateEventState : uint8;
template<> struct TIsUEnumClass<EMediaPlateEventState> { enum { Value = true }; };
template<> MEDIAPLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaPlateEventState>();
// ********** End Enum EMediaPlateEventState *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
