// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposurePostProcessingPassProxy.h"

#ifdef COMPOSURE_ComposurePostProcessingPassProxy_generated_h
#error "ComposurePostProcessingPassProxy.generated.h already included, missing '#pragma once' in ComposurePostProcessingPassProxy.h"
#endif
#define COMPOSURE_ComposurePostProcessingPassProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UComposurePostProcessPassPolicy;
class UMaterialInterface;
class USceneCaptureComponent2D;
class UTexture;

// ********** Begin Class UComposurePostProcessPassPolicy ******************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupPostProcess_Implementation(USceneCaptureComponent2D* SceneCapture, UMaterialInterface*& TonemapperOverride); \
	DECLARE_FUNCTION(execSetupPostProcess);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPassPolicy_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposurePostProcessPassPolicy(); \
	friend struct ::Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposurePostProcessPassPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposurePostProcessPassPolicy, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposurePostProcessPassPolicy_NoRegister) \
	DECLARE_SERIALIZER(UComposurePostProcessPassPolicy)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposurePostProcessPassPolicy(UComposurePostProcessPassPolicy&&) = delete; \
	UComposurePostProcessPassPolicy(const UComposurePostProcessPassPolicy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePostProcessPassPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePostProcessPassPolicy); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UComposurePostProcessPassPolicy) \
	NO_API virtual ~UComposurePostProcessPassPolicy();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_17_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposurePostProcessPassPolicy;

// ********** End Class UComposurePostProcessPassPolicy ********************************************

// ********** Begin Class UComposurePostProcessingPassProxy ****************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_RPC_WRAPPERS \
	DECLARE_FUNCTION(execExecute);


struct Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUComposurePostProcessingPassProxy(); \
	friend struct ::Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposurePostProcessingPassProxy, UComposurePostProcessPass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister) \
	DECLARE_SERIALIZER(UComposurePostProcessingPassProxy)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePostProcessingPassProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePostProcessingPassProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePostProcessingPassProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePostProcessingPassProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposurePostProcessingPassProxy(UComposurePostProcessingPassProxy&&) = delete; \
	UComposurePostProcessingPassProxy(const UComposurePostProcessingPassProxy&) = delete; \
	NO_API virtual ~UComposurePostProcessingPassProxy();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_34_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposurePostProcessingPassProxy;

// ********** End Class UComposurePostProcessingPassProxy ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
