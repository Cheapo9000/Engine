// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerSplineLayout.h"

#ifdef CLONEREFFECTOR_CEClonerSplineLayout_generated_h
#error "CEClonerSplineLayout.generated.h already included, missing '#pragma once' in CEClonerSplineLayout.h"
#endif
#define CLONEREFFECTOR_CEClonerSplineLayout_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UCEClonerSplineLayout ****************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSampleSplineDestroyed); \
	DECLARE_FUNCTION(execGetOrientMesh); \
	DECLARE_FUNCTION(execSetOrientMesh); \
	DECLARE_FUNCTION(execGetSplineActor); \
	DECLARE_FUNCTION(execSetSplineActor); \
	DECLARE_FUNCTION(execSetSplineActorWeak); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execSetCount);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSpawnLinkedSplineActor);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_ACCESSORS \
static void GetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetSplineActorWeak_WrapperImpl(const void* Object, void* OutValue); \
static void SetSplineActorWeak_WrapperImpl(void* Object, const void* InValue); \
static void GetbOrientMesh_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOrientMesh_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerSplineLayout_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerSplineLayout_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerSplineLayout(); \
	friend struct ::Z_Construct_UClass_UCEClonerSplineLayout_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerSplineLayout_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerSplineLayout, UCEClonerLayoutBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerSplineLayout_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerSplineLayout)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerSplineLayout(UCEClonerSplineLayout&&) = delete; \
	UCEClonerSplineLayout(const UCEClonerSplineLayout&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerSplineLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerSplineLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerSplineLayout) \
	CLONEREFFECTOR_API virtual ~UCEClonerSplineLayout();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerSplineLayout;

// ********** End Class UCEClonerSplineLayout ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerSplineLayout_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
