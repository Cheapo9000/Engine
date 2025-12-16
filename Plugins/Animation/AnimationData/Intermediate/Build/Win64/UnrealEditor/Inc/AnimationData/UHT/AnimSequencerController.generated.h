// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequencerController.h"

#ifdef ANIMATIONDATA_AnimSequencerController_generated_h
#error "AnimSequencerController.generated.h already included, missing '#pragma once' in AnimSequencerController.h"
#endif
#define ANIMATIONDATA_AnimSequencerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimSequencerController *************************************************
struct Z_Construct_UClass_UAnimSequencerController_Statics;
ANIMATIONDATA_API UClass* Z_Construct_UClass_UAnimSequencerController_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSequencerController(); \
	friend struct ::Z_Construct_UClass_UAnimSequencerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONDATA_API UClass* ::Z_Construct_UClass_UAnimSequencerController_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSequencerController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationData"), Z_Construct_UClass_UAnimSequencerController_NoRegister) \
	DECLARE_SERIALIZER(UAnimSequencerController) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimSequencerController*>(this); }


#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSequencerController(UAnimSequencerController&&) = delete; \
	UAnimSequencerController(const UAnimSequencerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequencerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequencerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimSequencerController) \
	NO_API virtual ~UAnimSequencerController();


#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_12_PROLOG
#define FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSequencerController;

// ********** End Class UAnimSequencerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
