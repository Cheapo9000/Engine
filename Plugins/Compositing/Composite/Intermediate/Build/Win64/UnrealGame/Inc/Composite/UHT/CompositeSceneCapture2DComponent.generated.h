// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CompositeSceneCapture2DComponent.h"

#ifdef COMPOSITE_CompositeSceneCapture2DComponent_generated_h
#error "CompositeSceneCapture2DComponent.generated.h already included, missing '#pragma once' in CompositeSceneCapture2DComponent.h"
#endif
#define COMPOSITE_CompositeSceneCapture2DComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeSceneCapture2DComponent ****************************************
struct Z_Construct_UClass_UCompositeSceneCapture2DComponent_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositeSceneCapture2DComponent_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeSceneCapture2DComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeSceneCapture2DComponent(); \
	friend struct ::Z_Construct_UClass_UCompositeSceneCapture2DComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositeSceneCapture2DComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeSceneCapture2DComponent, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositeSceneCapture2DComponent_NoRegister) \
	DECLARE_SERIALIZER(UCompositeSceneCapture2DComponent)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeSceneCapture2DComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSITE_API UCompositeSceneCapture2DComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeSceneCapture2DComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositeSceneCapture2DComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeSceneCapture2DComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeSceneCapture2DComponent(UCompositeSceneCapture2DComponent&&) = delete; \
	UCompositeSceneCapture2DComponent(const UCompositeSceneCapture2DComponent&) = delete; \
	COMPOSITE_API virtual ~UCompositeSceneCapture2DComponent();


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeSceneCapture2DComponent_h_12_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeSceneCapture2DComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeSceneCapture2DComponent_h_15_INCLASS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeSceneCapture2DComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeSceneCapture2DComponent;

// ********** End Class UCompositeSceneCapture2DComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeSceneCapture2DComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
