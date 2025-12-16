// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/DisplayClusterProjectionBlueprintAPIImpl.h"

#ifdef DISPLAYCLUSTERPROJECTION_DisplayClusterProjectionBlueprintAPIImpl_generated_h
#error "DisplayClusterProjectionBlueprintAPIImpl.generated.h already included, missing '#pragma once' in DisplayClusterProjectionBlueprintAPIImpl.h"
#endif
#define DISPLAYCLUSTERPROJECTION_DisplayClusterProjectionBlueprintAPIImpl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;

// ********** Begin Class UDisplayClusterProjectionBlueprintAPIImpl ********************************
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Private_Blueprints_DisplayClusterProjectionBlueprintAPIImpl_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCameraPolicySetCamera);


struct Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPIImpl_Statics;
DISPLAYCLUSTERPROJECTION_API UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPIImpl_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Private_Blueprints_DisplayClusterProjectionBlueprintAPIImpl_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterProjectionBlueprintAPIImpl(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPIImpl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTERPROJECTION_API UClass* ::Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPIImpl_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterProjectionBlueprintAPIImpl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DisplayClusterProjection"), Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPIImpl_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterProjectionBlueprintAPIImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UDisplayClusterProjectionBlueprintAPIImpl*>(this); }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Private_Blueprints_DisplayClusterProjectionBlueprintAPIImpl_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterProjectionBlueprintAPIImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterProjectionBlueprintAPIImpl(UDisplayClusterProjectionBlueprintAPIImpl&&) = delete; \
	UDisplayClusterProjectionBlueprintAPIImpl(const UDisplayClusterProjectionBlueprintAPIImpl&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterProjectionBlueprintAPIImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterProjectionBlueprintAPIImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterProjectionBlueprintAPIImpl) \
	NO_API virtual ~UDisplayClusterProjectionBlueprintAPIImpl();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Private_Blueprints_DisplayClusterProjectionBlueprintAPIImpl_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Private_Blueprints_DisplayClusterProjectionBlueprintAPIImpl_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Private_Blueprints_DisplayClusterProjectionBlueprintAPIImpl_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Private_Blueprints_DisplayClusterProjectionBlueprintAPIImpl_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Private_Blueprints_DisplayClusterProjectionBlueprintAPIImpl_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterProjectionBlueprintAPIImpl;

// ********** End Class UDisplayClusterProjectionBlueprintAPIImpl **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Private_Blueprints_DisplayClusterProjectionBlueprintAPIImpl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
