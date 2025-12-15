// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/ComponentBoundTransformProxy.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_ComponentBoundTransformProxy_generated_h
#error "ComponentBoundTransformProxy.generated.h already included, missing '#pragma once' in ComponentBoundTransformProxy.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_ComponentBoundTransformProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComponentBoundTransformProxy ********************************************
struct Z_Construct_UClass_UComponentBoundTransformProxy_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UComponentBoundTransformProxy_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentBoundTransformProxy(); \
	friend struct ::Z_Construct_UClass_UComponentBoundTransformProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UComponentBoundTransformProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UComponentBoundTransformProxy, UTransformProxy, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UComponentBoundTransformProxy_NoRegister) \
	DECLARE_SERIALIZER(UComponentBoundTransformProxy)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UComponentBoundTransformProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComponentBoundTransformProxy(UComponentBoundTransformProxy&&) = delete; \
	UComponentBoundTransformProxy(const UComponentBoundTransformProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UComponentBoundTransformProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentBoundTransformProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentBoundTransformProxy) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UComponentBoundTransformProxy();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_23_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComponentBoundTransformProxy;

// ********** End Class UComponentBoundTransformProxy **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ComponentBoundTransformProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
