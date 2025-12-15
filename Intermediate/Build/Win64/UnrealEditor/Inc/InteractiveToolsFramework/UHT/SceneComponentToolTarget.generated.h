// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolTargets/SceneComponentToolTarget.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_SceneComponentToolTarget_generated_h
#error "SceneComponentToolTarget.generated.h already included, missing '#pragma once' in SceneComponentToolTarget.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SceneComponentToolTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneComponentToolTarget ************************************************
struct Z_Construct_UClass_USceneComponentToolTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USceneComponentToolTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneComponentToolTarget(); \
	friend struct ::Z_Construct_UClass_USceneComponentToolTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USceneComponentToolTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneComponentToolTarget, UToolTarget, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USceneComponentToolTarget_NoRegister) \
	DECLARE_SERIALIZER(USceneComponentToolTarget) \
	virtual UObject* _getUObject() const override { return const_cast<USceneComponentToolTarget*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USceneComponentToolTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneComponentToolTarget(USceneComponentToolTarget&&) = delete; \
	USceneComponentToolTarget(const USceneComponentToolTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USceneComponentToolTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponentToolTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneComponentToolTarget) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USceneComponentToolTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_16_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneComponentToolTarget;

// ********** End Class USceneComponentToolTarget **************************************************

// ********** Begin Class USceneComponentToolTargetFactory *****************************************
struct Z_Construct_UClass_USceneComponentToolTargetFactory_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USceneComponentToolTargetFactory_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneComponentToolTargetFactory(); \
	friend struct ::Z_Construct_UClass_USceneComponentToolTargetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USceneComponentToolTargetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneComponentToolTargetFactory, UToolTargetFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USceneComponentToolTargetFactory_NoRegister) \
	DECLARE_SERIALIZER(USceneComponentToolTargetFactory)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USceneComponentToolTargetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneComponentToolTargetFactory(USceneComponentToolTargetFactory&&) = delete; \
	USceneComponentToolTargetFactory(const USceneComponentToolTargetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USceneComponentToolTargetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponentToolTargetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneComponentToolTargetFactory) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USceneComponentToolTargetFactory();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_50_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneComponentToolTargetFactory;

// ********** End Class USceneComponentToolTargetFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_SceneComponentToolTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
