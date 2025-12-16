// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerMeshRendererExtension.h"

#ifdef CLONEREFFECTOR_CEClonerMeshRendererExtension_generated_h
#error "CEClonerMeshRendererExtension.generated.h already included, missing '#pragma once' in CEClonerMeshRendererExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerMeshRendererExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UStaticMesh;
enum class ECEClonerMeshRenderMode : uint8;
enum class ENiagaraMeshFacingMode : uint8;

// ********** Begin Class UCEClonerMeshRendererExtension *******************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSortTranslucentParticles); \
	DECLARE_FUNCTION(execSetSortTranslucentParticles); \
	DECLARE_FUNCTION(execGetOverrideMaterial); \
	DECLARE_FUNCTION(execSetOverrideMaterial); \
	DECLARE_FUNCTION(execGetUseOverrideMaterial); \
	DECLARE_FUNCTION(execSetUseOverrideMaterial); \
	DECLARE_FUNCTION(execGetVisualizeEffectors); \
	DECLARE_FUNCTION(execSetVisualizeEffectors); \
	DECLARE_FUNCTION(execGetDefaultMeshes); \
	DECLARE_FUNCTION(execSetDefaultMeshes); \
	DECLARE_FUNCTION(execGetMeshCastShadows); \
	DECLARE_FUNCTION(execSetMeshCastShadows); \
	DECLARE_FUNCTION(execGetMeshFacingMode); \
	DECLARE_FUNCTION(execSetMeshFacingMode); \
	DECLARE_FUNCTION(execGetMeshRenderMode); \
	DECLARE_FUNCTION(execSetMeshRenderMode);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_15_ACCESSORS \
static void GetMeshRenderMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetMeshRenderMode_WrapperImpl(void* Object, const void* InValue); \
static void GetMeshFacingMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetMeshFacingMode_WrapperImpl(void* Object, const void* InValue); \
static void GetbMeshCastShadows_WrapperImpl(const void* Object, void* OutValue); \
static void SetbMeshCastShadows_WrapperImpl(void* Object, const void* InValue); \
static void GetDefaultMeshes_WrapperImpl(const void* Object, void* OutValue); \
static void SetDefaultMeshes_WrapperImpl(void* Object, const void* InValue); \
static void GetbVisualizeEffectors_WrapperImpl(const void* Object, void* OutValue); \
static void SetbVisualizeEffectors_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseOverrideMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseOverrideMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetOverrideMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetOverrideMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetbSortTranslucentParticles_WrapperImpl(const void* Object, void* OutValue); \
static void SetbSortTranslucentParticles_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerMeshRendererExtension_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerMeshRendererExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerMeshRendererExtension(); \
	friend struct ::Z_Construct_UClass_UCEClonerMeshRendererExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerMeshRendererExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerMeshRendererExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerMeshRendererExtension_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerMeshRendererExtension)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerMeshRendererExtension(UCEClonerMeshRendererExtension&&) = delete; \
	UCEClonerMeshRendererExtension(const UCEClonerMeshRendererExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerMeshRendererExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerMeshRendererExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerMeshRendererExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerMeshRendererExtension();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerMeshRendererExtension;

// ********** End Class UCEClonerMeshRendererExtension *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerMeshRendererExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
