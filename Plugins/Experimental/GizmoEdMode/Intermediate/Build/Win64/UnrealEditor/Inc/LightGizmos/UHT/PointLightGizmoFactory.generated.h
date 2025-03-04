// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointLightGizmoFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIGHTGIZMOS_PointLightGizmoFactory_generated_h
#error "PointLightGizmoFactory.generated.h already included, missing '#pragma once' in PointLightGizmoFactory.h"
#endif
#define LIGHTGIZMOS_PointLightGizmoFactory_generated_h

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointLightGizmoFactory(); \
	friend struct Z_Construct_UClass_UPointLightGizmoFactory_Statics; \
public: \
	DECLARE_CLASS(UPointLightGizmoFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightGizmos"), NO_API) \
	DECLARE_SERIALIZER(UPointLightGizmoFactory) \
	virtual UObject* _getUObject() const override { return const_cast<UPointLightGizmoFactory*>(this); }


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointLightGizmoFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPointLightGizmoFactory(UPointLightGizmoFactory&&); \
	UPointLightGizmoFactory(const UPointLightGizmoFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointLightGizmoFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointLightGizmoFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointLightGizmoFactory) \
	NO_API virtual ~UPointLightGizmoFactory();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTGIZMOS_API UClass* StaticClass<class UPointLightGizmoFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
