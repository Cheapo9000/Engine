// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/CEEffectorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEEffectorExtensionBase;
class UCEEffectorModeBase;
class UCEEffectorTypeBase;
struct FLinearColor;
#ifdef CLONEREFFECTOR_CEEffectorComponent_generated_h
#error "CEEffectorComponent.generated.h already included, missing '#pragma once' in CEEffectorComponent.h"
#endif
#define CLONEREFFECTOR_CEEffectorComponent_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffectorModeNames); \
	DECLARE_FUNCTION(execGetEffectorTypeNames); \
	DECLARE_FUNCTION(execGetExtension); \
	DECLARE_FUNCTION(execGetActiveExtensions); \
	DECLARE_FUNCTION(execGetActiveMode); \
	DECLARE_FUNCTION(execGetActiveType); \
	DECLARE_FUNCTION(execGetChannelIdentifier); \
	DECLARE_FUNCTION(execGetModeClass); \
	DECLARE_FUNCTION(execSetModeClass); \
	DECLARE_FUNCTION(execGetModeName); \
	DECLARE_FUNCTION(execSetModeName); \
	DECLARE_FUNCTION(execGetTypeClass); \
	DECLARE_FUNCTION(execSetTypeClass); \
	DECLARE_FUNCTION(execGetTypeName); \
	DECLARE_FUNCTION(execSetTypeName); \
	DECLARE_FUNCTION(execGetMagnitude); \
	DECLARE_FUNCTION(execSetMagnitude); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetEnabled);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execForceRefreshLinkedCloners); \
	DECLARE_FUNCTION(execGetVisualizerSpriteVisible); \
	DECLARE_FUNCTION(execSetVisualizerSpriteVisible); \
	DECLARE_FUNCTION(execGetVisualizerComponentVisible); \
	DECLARE_FUNCTION(execSetVisualizerComponentVisible);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_ACCESSORS \
static void GetbEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetMagnitude_WrapperImpl(const void* Object, void* OutValue); \
static void SetMagnitude_WrapperImpl(void* Object, const void* InValue); \
static void GetColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetColor_WrapperImpl(void* Object, const void* InValue); \
static void GetTypeName_WrapperImpl(const void* Object, void* OutValue); \
static void SetTypeName_WrapperImpl(void* Object, const void* InValue); \
static void GetModeName_WrapperImpl(const void* Object, void* OutValue); \
static void SetModeName_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorComponent(); \
	friend struct Z_Construct_UClass_UCEEffectorComponent_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorComponent)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorComponent(UCEEffectorComponent&&); \
	UCEEffectorComponent(const UCEEffectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorComponent) \
	CLONEREFFECTOR_API virtual ~UCEEffectorComponent();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
