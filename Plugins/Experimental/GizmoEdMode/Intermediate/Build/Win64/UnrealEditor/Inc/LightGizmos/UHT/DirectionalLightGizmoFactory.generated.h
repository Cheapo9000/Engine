// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DirectionalLightGizmoFactory.h"

#ifdef LIGHTGIZMOS_DirectionalLightGizmoFactory_generated_h
#error "DirectionalLightGizmoFactory.generated.h already included, missing '#pragma once' in DirectionalLightGizmoFactory.h"
#endif
#define LIGHTGIZMOS_DirectionalLightGizmoFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDirectionalLightGizmoFactory ********************************************
struct Z_Construct_UClass_UDirectionalLightGizmoFactory_Statics;
LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmoFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_DirectionalLightGizmoFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectionalLightGizmoFactory(); \
	friend struct ::Z_Construct_UClass_UDirectionalLightGizmoFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTGIZMOS_API UClass* ::Z_Construct_UClass_UDirectionalLightGizmoFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDirectionalLightGizmoFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightGizmos"), Z_Construct_UClass_UDirectionalLightGizmoFactory_NoRegister) \
	DECLARE_SERIALIZER(UDirectionalLightGizmoFactory) \
	virtual UObject* _getUObject() const override { return const_cast<UDirectionalLightGizmoFactory*>(this); }


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_DirectionalLightGizmoFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIGHTGIZMOS_API UDirectionalLightGizmoFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDirectionalLightGizmoFactory(UDirectionalLightGizmoFactory&&) = delete; \
	UDirectionalLightGizmoFactory(const UDirectionalLightGizmoFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTGIZMOS_API, UDirectionalLightGizmoFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectionalLightGizmoFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectionalLightGizmoFactory) \
	LIGHTGIZMOS_API virtual ~UDirectionalLightGizmoFactory();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_DirectionalLightGizmoFactory_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_DirectionalLightGizmoFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_DirectionalLightGizmoFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_DirectionalLightGizmoFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDirectionalLightGizmoFactory;

// ********** End Class UDirectionalLightGizmoFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_DirectionalLightGizmoFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
