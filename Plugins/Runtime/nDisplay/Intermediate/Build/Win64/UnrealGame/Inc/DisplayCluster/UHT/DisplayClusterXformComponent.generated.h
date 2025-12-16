// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DisplayClusterXformComponent.h"

#ifdef DISPLAYCLUSTER_DisplayClusterXformComponent_generated_h
#error "DisplayClusterXformComponent.generated.h already included, missing '#pragma once' in DisplayClusterXformComponent.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterXformComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDisplayClusterXformComponent ********************************************
struct Z_Construct_UClass_UDisplayClusterXformComponent_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterXformComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterXformComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterXformComponent(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterXformComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterXformComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterXformComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterXformComponent_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterXformComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDisplayClusterXformComponent*>(this); }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterXformComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterXformComponent(UDisplayClusterXformComponent&&) = delete; \
	UDisplayClusterXformComponent(const UDisplayClusterXformComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterXformComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterXformComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterXformComponent) \
	NO_API virtual ~UDisplayClusterXformComponent();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterXformComponent_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterXformComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterXformComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterXformComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterXformComponent;

// ********** End Class UDisplayClusterXformComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterXformComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
