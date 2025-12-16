// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineCameraSceneCaptureComponent.h"

#ifdef CINECAMERASCENECAPTURE_CineCameraSceneCaptureComponent_generated_h
#error "CineCameraSceneCaptureComponent.generated.h already included, missing '#pragma once' in CineCameraSceneCaptureComponent.h"
#endif
#define CINECAMERASCENECAPTURE_CineCameraSceneCaptureComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCineCaptureComponent2D **************************************************
struct Z_Construct_UClass_UCineCaptureComponent2D_Statics;
CINECAMERASCENECAPTURE_API UClass* Z_Construct_UClass_UCineCaptureComponent2D_NoRegister();

#define FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCineCaptureComponent2D(); \
	friend struct ::Z_Construct_UClass_UCineCaptureComponent2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINECAMERASCENECAPTURE_API UClass* ::Z_Construct_UClass_UCineCaptureComponent2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UCineCaptureComponent2D, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineCameraSceneCapture"), Z_Construct_UClass_UCineCaptureComponent2D_NoRegister) \
	DECLARE_SERIALIZER(UCineCaptureComponent2D)


#define FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCineCaptureComponent2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineCaptureComponent2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineCaptureComponent2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCaptureComponent2D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCineCaptureComponent2D(UCineCaptureComponent2D&&) = delete; \
	UCineCaptureComponent2D(const UCineCaptureComponent2D&) = delete; \
	NO_API virtual ~UCineCaptureComponent2D();


#define FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCineCaptureComponent2D;

// ********** End Class UCineCaptureComponent2D ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CineCameraSceneCapture_Source_CineCameraSceneCapture_Public_CineCameraSceneCaptureComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
