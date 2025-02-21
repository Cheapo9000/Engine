// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerMeshLayout.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ECEClonerMeshAsset : uint8;
enum class ECEClonerMeshSampleData : uint8;
#ifdef CLONEREFFECTOR_CEClonerMeshLayout_generated_h
#error "CEClonerMeshLayout.generated.h already included, missing '#pragma once' in CEClonerMeshLayout.h"
#endif
#define CLONEREFFECTOR_CEClonerMeshLayout_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSampleActorDestroyed); \
	DECLARE_FUNCTION(execGetSampleActor); \
	DECLARE_FUNCTION(execSetSampleActor); \
	DECLARE_FUNCTION(execSetSampleActorWeak); \
	DECLARE_FUNCTION(execGetSampleData); \
	DECLARE_FUNCTION(execSetSampleData); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execSetAsset); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execSetCount);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_17_ACCESSORS \
static void GetAsset_WrapperImpl(const void* Object, void* OutValue); \
static void SetAsset_WrapperImpl(void* Object, const void* InValue); \
static void GetSampleActorWeak_WrapperImpl(const void* Object, void* OutValue); \
static void SetSampleActorWeak_WrapperImpl(void* Object, const void* InValue); \
static void GetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetSampleData_WrapperImpl(const void* Object, void* OutValue); \
static void SetSampleData_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerMeshLayout(); \
	friend struct Z_Construct_UClass_UCEClonerMeshLayout_Statics; \
public: \
	DECLARE_CLASS(UCEClonerMeshLayout, UCEClonerLayoutBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerMeshLayout)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerMeshLayout(UCEClonerMeshLayout&&); \
	UCEClonerMeshLayout(const UCEClonerMeshLayout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerMeshLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerMeshLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerMeshLayout) \
	CLONEREFFECTOR_API virtual ~UCEClonerMeshLayout();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerMeshLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerMeshLayout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
