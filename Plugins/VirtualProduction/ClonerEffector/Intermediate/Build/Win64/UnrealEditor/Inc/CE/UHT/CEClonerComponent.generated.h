// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/CEClonerComponent.h"

#ifdef CLONEREFFECTOR_CEClonerComponent_generated_h
#error "CEClonerComponent.generated.h already included, missing '#pragma once' in CEClonerComponent.h"
#endif
#define CLONEREFFECTOR_CEClonerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEClonerExtensionBase;
class UCEClonerLayoutBase;
class UClass;
struct FLinearColor;

// ********** Begin Class UCEClonerComponent *******************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetClonerTreeBehaviorNames); \
	DECLARE_FUNCTION(execGetClonerLayoutNames); \
	DECLARE_FUNCTION(execGetActiveExtensions); \
	DECLARE_FUNCTION(execGetExtension); \
	DECLARE_FUNCTION(execGetAttachmentCount); \
	DECLARE_FUNCTION(execGetMeshCount); \
	DECLARE_FUNCTION(execGetActiveLayout); \
	DECLARE_FUNCTION(execGetLayoutClass); \
	DECLARE_FUNCTION(execSetLayoutClass); \
	DECLARE_FUNCTION(execGetLayoutName); \
	DECLARE_FUNCTION(execSetLayoutName); \
	DECLARE_FUNCTION(execGetGlobalRotation); \
	DECLARE_FUNCTION(execSetGlobalRotation); \
	DECLARE_FUNCTION(execGetGlobalScale); \
	DECLARE_FUNCTION(execSetGlobalScale); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetEnabled);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execConvertToInstancedStaticMeshes); \
	DECLARE_FUNCTION(execConvertToDynamicMeshes); \
	DECLARE_FUNCTION(execConvertToStaticMeshes); \
	DECLARE_FUNCTION(execConvertToDynamicMesh); \
	DECLARE_FUNCTION(execConvertToStaticMesh); \
	DECLARE_FUNCTION(execCreateDefaultActorAttached); \
	DECLARE_FUNCTION(execOpenClonerSettings); \
	DECLARE_FUNCTION(execForceUpdateCloner); \
	DECLARE_FUNCTION(execGetVisualizerSpriteVisible); \
	DECLARE_FUNCTION(execSetVisualizerSpriteVisible); \
	DECLARE_FUNCTION(execGetTreeBehaviorName); \
	DECLARE_FUNCTION(execSetTreeBehaviorName);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_ACCESSORS \
static void GetbEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetSeed_WrapperImpl(const void* Object, void* OutValue); \
static void SetSeed_WrapperImpl(void* Object, const void* InValue); \
static void GetColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetColor_WrapperImpl(void* Object, const void* InValue); \
static void GetGlobalScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetGlobalScale_WrapperImpl(void* Object, const void* InValue); \
static void GetGlobalRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetGlobalRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetLayoutName_WrapperImpl(const void* Object, void* OutValue); \
static void SetLayoutName_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerComponent_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerComponent(); \
	friend struct ::Z_Construct_UClass_UCEClonerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerComponent, UNiagaraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerComponent_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerComponent)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerComponent(UCEClonerComponent&&) = delete; \
	UCEClonerComponent(const UCEClonerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerComponent) \
	CLONEREFFECTOR_API virtual ~UCEClonerComponent();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerComponent;

// ********** End Class UCEClonerComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
