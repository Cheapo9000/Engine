// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointLightGizmoFactory.h"

#ifdef LIGHTGIZMOS_PointLightGizmoFactory_generated_h
#error "PointLightGizmoFactory.generated.h already included, missing '#pragma once' in PointLightGizmoFactory.h"
#endif
#define LIGHTGIZMOS_PointLightGizmoFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPointLightGizmoFactory **************************************************
struct Z_Construct_UClass_UPointLightGizmoFactory_Statics;
LIGHTGIZMOS_API UClass* Z_Construct_UClass_UPointLightGizmoFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointLightGizmoFactory(); \
	friend struct ::Z_Construct_UClass_UPointLightGizmoFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTGIZMOS_API UClass* ::Z_Construct_UClass_UPointLightGizmoFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPointLightGizmoFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightGizmos"), Z_Construct_UClass_UPointLightGizmoFactory_NoRegister) \
	DECLARE_SERIALIZER(UPointLightGizmoFactory) \
	virtual UObject* _getUObject() const override { return const_cast<UPointLightGizmoFactory*>(this); }


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIGHTGIZMOS_API UPointLightGizmoFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPointLightGizmoFactory(UPointLightGizmoFactory&&) = delete; \
	UPointLightGizmoFactory(const UPointLightGizmoFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTGIZMOS_API, UPointLightGizmoFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointLightGizmoFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointLightGizmoFactory) \
	LIGHTGIZMOS_API virtual ~UPointLightGizmoFactory();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPointLightGizmoFactory;

// ********** End Class UPointLightGizmoFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_PointLightGizmoFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
