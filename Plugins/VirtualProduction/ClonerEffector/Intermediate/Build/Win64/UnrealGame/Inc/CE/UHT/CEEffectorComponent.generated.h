// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/CEEffectorComponent.h"

#ifdef CLONEREFFECTOR_CEEffectorComponent_generated_h
#error "CEEffectorComponent.generated.h already included, missing '#pragma once' in CEEffectorComponent.h"
#endif
#define CLONEREFFECTOR_CEEffectorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEEffectorEffectBase;
class UCEEffectorExtensionBase;
class UCEEffectorModeBase;
class UCEEffectorTypeBase;
class UClass;
struct FLinearColor;

// ********** Begin Class UCEEffectorComponent *****************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffectorModeNames); \
	DECLARE_FUNCTION(execGetEffectorTypeNames); \
	DECLARE_FUNCTION(execGetExtension); \
	DECLARE_FUNCTION(execGetActiveEffects); \
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
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execForceRefreshLinkedCloners); \
	DECLARE_FUNCTION(execGetVisualizerSpriteVisible); \
	DECLARE_FUNCTION(execSetVisualizerSpriteVisible); \
	DECLARE_FUNCTION(execGetVisualizerComponentVisible); \
	DECLARE_FUNCTION(execSetVisualizerComponentVisible);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_ACCESSORS \
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


struct Z_Construct_UClass_UCEEffectorComponent_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorComponent(); \
	friend struct ::Z_Construct_UClass_UCEEffectorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorComponent_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorComponent)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorComponent(UCEEffectorComponent&&) = delete; \
	UCEEffectorComponent(const UCEEffectorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorComponent) \
	CLONEREFFECTOR_API virtual ~UCEEffectorComponent();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorComponent;

// ********** End Class UCEEffectorComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
