// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolTargets/PrimitiveComponentToolTarget.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_PrimitiveComponentToolTarget_generated_h
#error "PrimitiveComponentToolTarget.generated.h already included, missing '#pragma once' in PrimitiveComponentToolTarget.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_PrimitiveComponentToolTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPrimitiveComponentToolTarget ********************************************
struct Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveComponentToolTarget(); \
	friend struct ::Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UPrimitiveComponentToolTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UPrimitiveComponentToolTarget, UToolTarget, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UPrimitiveComponentToolTarget_NoRegister) \
	DECLARE_SERIALIZER(UPrimitiveComponentToolTarget) \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponentToolTarget*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UPrimitiveComponentToolTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPrimitiveComponentToolTarget(UPrimitiveComponentToolTarget&&) = delete; \
	UPrimitiveComponentToolTarget(const UPrimitiveComponentToolTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UPrimitiveComponentToolTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponentToolTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponentToolTarget) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UPrimitiveComponentToolTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_16_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPrimitiveComponentToolTarget;

// ********** End Class UPrimitiveComponentToolTarget **********************************************

// ********** Begin Class UPrimitiveComponentToolTargetFactory *************************************
struct Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveComponentToolTargetFactory(); \
	friend struct ::Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPrimitiveComponentToolTargetFactory, UToolTargetFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_NoRegister) \
	DECLARE_SERIALIZER(UPrimitiveComponentToolTargetFactory)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UPrimitiveComponentToolTargetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPrimitiveComponentToolTargetFactory(UPrimitiveComponentToolTargetFactory&&) = delete; \
	UPrimitiveComponentToolTargetFactory(const UPrimitiveComponentToolTargetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UPrimitiveComponentToolTargetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponentToolTargetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponentToolTargetFactory) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UPrimitiveComponentToolTargetFactory();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_52_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPrimitiveComponentToolTargetFactory;

// ********** End Class UPrimitiveComponentToolTargetFactory ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
