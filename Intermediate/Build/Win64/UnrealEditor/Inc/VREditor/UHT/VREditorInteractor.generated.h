// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorInteractor.h"

#ifdef VREDITOR_VREditorInteractor_generated_h
#error "VREditorInteractor.generated.h already included, missing '#pragma once' in VREditorInteractor.h"
#endif
#define VREDITOR_VREditorInteractor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AVREditorTeleporter;
class UMotionControllerComponent;
class UStaticMesh;
class UVREditorMode;
enum class EControllerHand : uint8;
enum class EControllerType : uint8;
struct FLinearColor;

// ********** Begin Class UVREditorInteractor ******************************************************
#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	VREDITOR_API virtual void UpdateHandMeshRelativeTransform_Implementation(); \
	VREDITOR_API virtual float GetSlideDelta_Implementation() const; \
	VREDITOR_API virtual void SetupComponent_Implementation(AActor* OwningActor); \
	VREDITOR_API virtual void Init_Implementation(UVREditorMode* InVRMode); \
	DECLARE_FUNCTION(execUpdateHandMeshRelativeTransform); \
	DECLARE_FUNCTION(execReplaceHandMeshComponent); \
	DECLARE_FUNCTION(execGetSelectAndMoveTriggerValue); \
	DECLARE_FUNCTION(execIsClickingOnUI); \
	DECLARE_FUNCTION(execIsHoveringOverUI); \
	DECLARE_FUNCTION(execTryOverrideControllerType); \
	DECLARE_FUNCTION(execSetControllerType); \
	DECLARE_FUNCTION(execGetControllerType); \
	DECLARE_FUNCTION(execGetControllerSide); \
	DECLARE_FUNCTION(execGetTeleportActor); \
	DECLARE_FUNCTION(execSetForceLaserColor); \
	DECLARE_FUNCTION(execGetLaserEnd); \
	DECLARE_FUNCTION(execGetLaserStart); \
	DECLARE_FUNCTION(execGetLastTrackpadPosition); \
	DECLARE_FUNCTION(execGetTrackpadPosition); \
	DECLARE_FUNCTION(execIsTouchingTrackpad); \
	DECLARE_FUNCTION(execSetForceShowLaser); \
	DECLARE_FUNCTION(execGetSlideDelta); \
	DECLARE_FUNCTION(execGetControllerHandSide); \
	DECLARE_FUNCTION(execSetControllerHandSide); \
	DECLARE_FUNCTION(execGetMotionControllerComponent); \
	DECLARE_FUNCTION(execGetHMDDeviceType); \
	DECLARE_FUNCTION(execSetupComponent); \
	DECLARE_FUNCTION(execInit);


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_49_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UVREditorInteractor_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorInteractor(); \
	friend struct ::Z_Construct_UClass_UVREditorInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UVREditorInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(UVREditorInteractor, UViewportInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UVREditorInteractor_NoRegister) \
	DECLARE_SERIALIZER(UVREditorInteractor)


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_49_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVREditorInteractor(UVREditorInteractor&&) = delete; \
	UVREditorInteractor(const UVREditorInteractor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VREDITOR_API, UVREditorInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorInteractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorInteractor) \
	VREDITOR_API virtual ~UVREditorInteractor();


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_46_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_49_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVREditorInteractor;

// ********** End Class UVREditorInteractor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h

// ********** Begin Enum EControllerType ***********************************************************
#define FOREACH_ENUM_ECONTROLLERTYPE(op) \
	op(EControllerType::Laser) \
	op(EControllerType::AssistingLaser) \
	op(EControllerType::UI) \
	op(EControllerType::Navigation) \
	op(EControllerType::Unknown) 

enum class EControllerType : uint8;
template<> struct TIsUEnumClass<EControllerType> { enum { Value = true }; };
template<> VREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EControllerType>();
// ********** End Enum EControllerType *************************************************************

// ********** Begin Enum ETouchSwipeDirection ******************************************************
#define FOREACH_ENUM_ETOUCHSWIPEDIRECTION(op) \
	op(ETouchSwipeDirection::None) \
	op(ETouchSwipeDirection::Left) \
	op(ETouchSwipeDirection::Right) \
	op(ETouchSwipeDirection::Up) \
	op(ETouchSwipeDirection::Down) 

enum class ETouchSwipeDirection : uint8;
template<> struct TIsUEnumClass<ETouchSwipeDirection> { enum { Value = true }; };
template<> VREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETouchSwipeDirection>();
// ********** End Enum ETouchSwipeDirection ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
