// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposurePlayerCompositingTarget.h"

#ifdef COMPOSURE_ComposurePlayerCompositingTarget_generated_h
#error "ComposurePlayerCompositingTarget.generated.h already included, missing '#pragma once' in ComposurePlayerCompositingTarget.h"
#endif
#define COMPOSURE_ComposurePlayerCompositingTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerCameraManager;
class UTexture;
class UTextureRenderTarget2D;

// ********** Begin Class UComposurePlayerCompositingTarget ****************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetRenderTarget); \
	DECLARE_FUNCTION(execSetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerCameraManager);


struct Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingTarget_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUComposurePlayerCompositingTarget(); \
	friend struct ::Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposurePlayerCompositingTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposurePlayerCompositingTarget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposurePlayerCompositingTarget_NoRegister) \
	DECLARE_SERIALIZER(UComposurePlayerCompositingTarget) \
	virtual UObject* _getUObject() const override { return const_cast<UComposurePlayerCompositingTarget*>(this); }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePlayerCompositingTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePlayerCompositingTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePlayerCompositingTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePlayerCompositingTarget); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposurePlayerCompositingTarget(UComposurePlayerCompositingTarget&&) = delete; \
	UComposurePlayerCompositingTarget(const UComposurePlayerCompositingTarget&) = delete;


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_35_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposurePlayerCompositingTarget;

// ********** End Class UComposurePlayerCompositingTarget ******************************************

// ********** Begin Class UComposureCompositingTargetComponent *************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDisplayTexture); \
	DECLARE_FUNCTION(execSetDisplayTexture);


struct Z_Construct_UClass_UComposureCompositingTargetComponent_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposureCompositingTargetComponent_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUComposureCompositingTargetComponent(); \
	friend struct ::Z_Construct_UClass_UComposureCompositingTargetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposureCompositingTargetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposureCompositingTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposureCompositingTargetComponent_NoRegister) \
	DECLARE_SERIALIZER(UComposureCompositingTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UComposureCompositingTargetComponent*>(this); }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureCompositingTargetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureCompositingTargetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureCompositingTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureCompositingTargetComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposureCompositingTargetComponent(UComposureCompositingTargetComponent&&) = delete; \
	UComposureCompositingTargetComponent(const UComposureCompositingTargetComponent&) = delete; \
	NO_API virtual ~UComposureCompositingTargetComponent();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_99_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposureCompositingTargetComponent;

// ********** End Class UComposureCompositingTargetComponent ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
