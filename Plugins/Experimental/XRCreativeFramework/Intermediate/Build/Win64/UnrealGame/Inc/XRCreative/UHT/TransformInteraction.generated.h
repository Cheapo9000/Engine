// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ITF/TransformInteraction.h"

#ifdef XRCREATIVE_TransformInteraction_generated_h
#error "TransformInteraction.generated.h already included, missing '#pragma once' in TransformInteraction.h"
#endif
#define XRCREATIVE_TransformInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UXRCreativeTransformInteraction ******************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForceUpdateGizmoState); \
	DECLARE_FUNCTION(execSetEnableNonUniformScaling); \
	DECLARE_FUNCTION(execSetEnableScaling);


struct Z_Construct_UClass_UXRCreativeTransformInteraction_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeTransformInteraction_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeTransformInteraction(); \
	friend struct ::Z_Construct_UClass_UXRCreativeTransformInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_UXRCreativeTransformInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativeTransformInteraction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_UXRCreativeTransformInteraction_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativeTransformInteraction)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRCreativeTransformInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativeTransformInteraction(UXRCreativeTransformInteraction&&) = delete; \
	UXRCreativeTransformInteraction(const UXRCreativeTransformInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeTransformInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeTransformInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRCreativeTransformInteraction) \
	NO_API virtual ~UXRCreativeTransformInteraction();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativeTransformInteraction;

// ********** End Class UXRCreativeTransformInteraction ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
