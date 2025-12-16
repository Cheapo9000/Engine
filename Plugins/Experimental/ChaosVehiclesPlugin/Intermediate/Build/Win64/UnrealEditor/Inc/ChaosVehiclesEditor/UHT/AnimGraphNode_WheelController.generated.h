// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_WheelController.h"

#ifdef CHAOSVEHICLESEDITOR_AnimGraphNode_WheelController_generated_h
#error "AnimGraphNode_WheelController.generated.h already included, missing '#pragma once' in AnimGraphNode_WheelController.h"
#endif
#define CHAOSVEHICLESEDITOR_AnimGraphNode_WheelController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_WheelController *******************************************
struct Z_Construct_UClass_UAnimGraphNode_WheelController_Statics;
CHAOSVEHICLESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_WheelController_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_WheelController(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_WheelController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVEHICLESEDITOR_API UClass* ::Z_Construct_UClass_UAnimGraphNode_WheelController_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_WheelController, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosVehiclesEditor"), Z_Construct_UClass_UAnimGraphNode_WheelController_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_WheelController)


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSVEHICLESEDITOR_API UAnimGraphNode_WheelController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_WheelController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVEHICLESEDITOR_API, UAnimGraphNode_WheelController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_WheelController); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_WheelController(UAnimGraphNode_WheelController&&) = delete; \
	UAnimGraphNode_WheelController(const UAnimGraphNode_WheelController&) = delete; \
	CHAOSVEHICLESEDITOR_API virtual ~UAnimGraphNode_WheelController();


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_WheelController;

// ********** End Class UAnimGraphNode_WheelController *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
