// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractor.h"

#ifdef VIEWPORTINTERACTION_ViewportInteractor_generated_h
#error "ViewportInteractor.generated.h already included, missing '#pragma once' in ViewportInteractor.h"
#endif
#define VIEWPORTINTERACTION_ViewportInteractor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UViewportInteractor;
class UViewportWorldInteraction;
enum class EHitResultGizmoFilterMode : uint8;
enum class EViewportInteractionDraggingMode : uint8;
struct FKey;
struct FViewportActionKeyInput;

// ********** Begin Class UViewportInteractor ******************************************************
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	VIEWPORTINTERACTION_API virtual void Tick_Implementation(const float DeltaTime); \
	VIEWPORTINTERACTION_API virtual void Shutdown_Implementation(); \
	DECLARE_FUNCTION(execCanCarry); \
	DECLARE_FUNCTION(execSetCanCarry); \
	DECLARE_FUNCTION(execGetHitResultGizmoFilterMode); \
	DECLARE_FUNCTION(execSetHitResultGizmoFilterMode); \
	DECLARE_FUNCTION(execSetDraggingMode); \
	DECLARE_FUNCTION(execIsHoveringOverGizmo); \
	DECLARE_FUNCTION(execGetHoverLocation); \
	DECLARE_FUNCTION(execGetTransformAndForwardVector); \
	DECLARE_FUNCTION(execGetLaserPointer); \
	DECLARE_FUNCTION(execGetDraggingMode); \
	DECLARE_FUNCTION(execGetLastRoomSpaceTransform); \
	DECLARE_FUNCTION(execGetLastTransform); \
	DECLARE_FUNCTION(execGetRoomSpaceTransform); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execGetOtherInteractor); \
	DECLARE_FUNCTION(execGetWorldInteraction);


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_37_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UViewportInteractor_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportInteractor(); \
	friend struct ::Z_Construct_UClass_UViewportInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UViewportInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UViewportInteractor_NoRegister) \
	DECLARE_SERIALIZER(UViewportInteractor)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportInteractor(UViewportInteractor&&) = delete; \
	UViewportInteractor(const UViewportInteractor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UViewportInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UViewportInteractor) \
	VIEWPORTINTERACTION_API virtual ~UViewportInteractor();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_34_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_37_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportInteractor;

// ********** End Class UViewportInteractor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h

// ********** Begin Enum EHitResultGizmoFilterMode *************************************************
#define FOREACH_ENUM_EHITRESULTGIZMOFILTERMODE(op) \
	op(EHitResultGizmoFilterMode::All) \
	op(EHitResultGizmoFilterMode::NoGizmos) \
	op(EHitResultGizmoFilterMode::GizmosOnly) 

enum class EHitResultGizmoFilterMode : uint8;
template<> struct TIsUEnumClass<EHitResultGizmoFilterMode> { enum { Value = true }; };
template<> VIEWPORTINTERACTION_NON_ATTRIBUTED_API UEnum* StaticEnum<EHitResultGizmoFilterMode>();
// ********** End Enum EHitResultGizmoFilterMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
