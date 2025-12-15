// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolTargets/ToolTarget.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_ToolTarget_generated_h
#error "ToolTarget.generated.h already included, missing '#pragma once' in ToolTarget.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_ToolTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToolTarget **************************************************************
struct Z_Construct_UClass_UToolTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolTarget(); \
	friend struct ::Z_Construct_UClass_UToolTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UToolTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolTarget, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UToolTarget_NoRegister) \
	DECLARE_SERIALIZER(UToolTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UToolTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolTarget(UToolTarget&&) = delete; \
	UToolTarget(const UToolTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UToolTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolTarget) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UToolTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_38_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolTarget;

// ********** End Class UToolTarget ****************************************************************

// ********** Begin Class UToolTargetFactory *******************************************************
struct Z_Construct_UClass_UToolTargetFactory_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolTargetFactory(); \
	friend struct ::Z_Construct_UClass_UToolTargetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UToolTargetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolTargetFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UToolTargetFactory_NoRegister) \
	DECLARE_SERIALIZER(UToolTargetFactory)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UToolTargetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolTargetFactory(UToolTargetFactory&&) = delete; \
	UToolTargetFactory(const UToolTargetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UToolTargetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolTargetFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolTargetFactory) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UToolTargetFactory();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_90_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolTargetFactory;

// ********** End Class UToolTargetFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_ToolTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
