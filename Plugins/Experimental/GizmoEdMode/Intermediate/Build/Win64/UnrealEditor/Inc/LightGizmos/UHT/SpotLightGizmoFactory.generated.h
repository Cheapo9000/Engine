// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpotLightGizmoFactory.h"

#ifdef LIGHTGIZMOS_SpotLightGizmoFactory_generated_h
#error "SpotLightGizmoFactory.generated.h already included, missing '#pragma once' in SpotLightGizmoFactory.h"
#endif
#define LIGHTGIZMOS_SpotLightGizmoFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpotLightGizmoFactory ***************************************************
struct Z_Construct_UClass_USpotLightGizmoFactory_Statics;
LIGHTGIZMOS_API UClass* Z_Construct_UClass_USpotLightGizmoFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpotLightGizmoFactory(); \
	friend struct ::Z_Construct_UClass_USpotLightGizmoFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTGIZMOS_API UClass* ::Z_Construct_UClass_USpotLightGizmoFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USpotLightGizmoFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightGizmos"), Z_Construct_UClass_USpotLightGizmoFactory_NoRegister) \
	DECLARE_SERIALIZER(USpotLightGizmoFactory) \
	virtual UObject* _getUObject() const override { return const_cast<USpotLightGizmoFactory*>(this); }


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIGHTGIZMOS_API USpotLightGizmoFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpotLightGizmoFactory(USpotLightGizmoFactory&&) = delete; \
	USpotLightGizmoFactory(const USpotLightGizmoFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIGHTGIZMOS_API, USpotLightGizmoFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpotLightGizmoFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpotLightGizmoFactory) \
	LIGHTGIZMOS_API virtual ~USpotLightGizmoFactory();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpotLightGizmoFactory;

// ********** End Class USpotLightGizmoFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
