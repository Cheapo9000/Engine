// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DisplayClusterOriginComponent.h"

#ifdef DISPLAYCLUSTER_DisplayClusterOriginComponent_generated_h
#error "DisplayClusterOriginComponent.generated.h already included, missing '#pragma once' in DisplayClusterOriginComponent.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterOriginComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDisplayClusterOriginComponent *******************************************
struct Z_Construct_UClass_UDisplayClusterOriginComponent_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterOriginComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterOriginComponent(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterOriginComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterOriginComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterOriginComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterOriginComponent_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterOriginComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDisplayClusterOriginComponent*>(this); }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterOriginComponent(UDisplayClusterOriginComponent&&) = delete; \
	UDisplayClusterOriginComponent(const UDisplayClusterOriginComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterOriginComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterOriginComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterOriginComponent) \
	NO_API virtual ~UDisplayClusterOriginComponent();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterOriginComponent;

// ********** End Class UDisplayClusterOriginComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterOriginComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
