// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposurePostProcessPass.h"

#ifdef COMPOSURE_ComposurePostProcessPass_generated_h
#error "ComposurePostProcessPass.generated.h already included, missing '#pragma once' in ComposurePostProcessPass.h"
#endif
#define COMPOSURE_ComposurePostProcessPass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTextureRenderTarget2D;

// ********** Begin Class UComposurePostProcessPass ************************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetOutputRenderTarget); \
	DECLARE_FUNCTION(execGetOutputRenderTarget); \
	DECLARE_FUNCTION(execGetSetupMaterial); \
	DECLARE_FUNCTION(execSetSetupMaterial);


struct Z_Construct_UClass_UComposurePostProcessPass_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPass_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUComposurePostProcessPass(); \
	friend struct ::Z_Construct_UClass_UComposurePostProcessPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposurePostProcessPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposurePostProcessPass, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposurePostProcessPass_NoRegister) \
	DECLARE_SERIALIZER(UComposurePostProcessPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePostProcessPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePostProcessPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePostProcessPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePostProcessPass); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposurePostProcessPass(UComposurePostProcessPass&&) = delete; \
	UComposurePostProcessPass(const UComposurePostProcessPass&) = delete; \
	NO_API virtual ~UComposurePostProcessPass();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_23_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposurePostProcessPass;

// ********** End Class UComposurePostProcessPass **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
