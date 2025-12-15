// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportWorldInteraction.h"

#ifdef VIEWPORTINTERACTION_ViewportWorldInteraction_generated_h
#error "ViewportWorldInteraction.generated.h already included, missing '#pragma once' in ViewportWorldInteraction.h"
#endif
#define VIEWPORTINTERACTION_ViewportWorldInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABaseTransformGizmo;
class UViewportInteractor;

// ********** Begin Class UViewportWorldInteraction ************************************************
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInteractors); \
	DECLARE_FUNCTION(execGetTransformGizmoActor); \
	DECLARE_FUNCTION(execSetWorldToMetersScale); \
	DECLARE_FUNCTION(execGetWorldScaleFactor); \
	DECLARE_FUNCTION(execSetRoomTransformForNextFrame); \
	DECLARE_FUNCTION(execSetHeadTransform); \
	DECLARE_FUNCTION(execGetHeadTransform); \
	DECLARE_FUNCTION(execGetRoomSpaceHeadTransform); \
	DECLARE_FUNCTION(execGetRoomTransform); \
	DECLARE_FUNCTION(execAddActorToExcludeFromHitTests); \
	DECLARE_FUNCTION(execRemoveInteractor); \
	DECLARE_FUNCTION(execAddInteractor);


struct Z_Construct_UClass_UViewportWorldInteraction_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportWorldInteraction(); \
	friend struct ::Z_Construct_UClass_UViewportWorldInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UViewportWorldInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportWorldInteraction, UEditorWorldExtension, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UViewportWorldInteraction_NoRegister) \
	DECLARE_SERIALIZER(UViewportWorldInteraction)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportWorldInteraction(UViewportWorldInteraction&&) = delete; \
	UViewportWorldInteraction(const UViewportWorldInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UViewportWorldInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportWorldInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportWorldInteraction) \
	VIEWPORTINTERACTION_API virtual ~UViewportWorldInteraction();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_51_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportWorldInteraction;

// ********** End Class UViewportWorldInteraction **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h

// ********** Begin Enum EViewportWorldInteractionType *********************************************
#define FOREACH_ENUM_EVIEWPORTWORLDINTERACTIONTYPE(op) \
	op(EViewportWorldInteractionType::VR) \
	op(EViewportWorldInteractionType::Legacy) 

enum class EViewportWorldInteractionType : uint8;
template<> struct TIsUEnumClass<EViewportWorldInteractionType> { enum { Value = true }; };
template<> VIEWPORTINTERACTION_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewportWorldInteractionType>();
// ********** End Enum EViewportWorldInteractionType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
