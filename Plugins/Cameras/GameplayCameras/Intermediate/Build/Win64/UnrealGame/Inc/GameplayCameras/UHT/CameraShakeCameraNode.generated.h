// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Shakes/CameraShakeCameraNode.h"

#ifdef GAMEPLAYCAMERAS_CameraShakeCameraNode_generated_h
#error "CameraShakeCameraNode.generated.h already included, missing '#pragma once' in CameraShakeCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_CameraShakeCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraShakeCameraNode ***************************************************
struct Z_Construct_UClass_UCameraShakeCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraShakeCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeCameraNode(); \
	friend struct ::Z_Construct_UClass_UCameraShakeCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraShakeCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraShakeCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraShakeCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UCameraShakeCameraNode) \
	virtual UObject* _getUObject() const override { return const_cast<UCameraShakeCameraNode*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraShakeCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraShakeCameraNode(UCameraShakeCameraNode&&) = delete; \
	UCameraShakeCameraNode(const UCameraShakeCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraShakeCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UCameraShakeCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h_22_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraShakeCameraNode;

// ********** End Class UCameraShakeCameraNode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h

// ********** Begin Enum ECameraShakeEvaluationMode ************************************************
#define FOREACH_ENUM_ECAMERASHAKEEVALUATIONMODE(op) \
	op(ECameraShakeEvaluationMode::Inline) \
	op(ECameraShakeEvaluationMode::VisualLayer) 

enum class ECameraShakeEvaluationMode : uint8;
template<> struct TIsUEnumClass<ECameraShakeEvaluationMode> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraShakeEvaluationMode>();
// ********** End Enum ECameraShakeEvaluationMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
