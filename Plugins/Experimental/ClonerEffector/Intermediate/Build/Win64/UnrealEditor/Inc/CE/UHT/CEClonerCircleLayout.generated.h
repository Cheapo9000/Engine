// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerCircleLayout.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerPlane : uint8;
#ifdef CLONEREFFECTOR_CEClonerCircleLayout_generated_h
#error "CEClonerCircleLayout.generated.h already included, missing '#pragma once' in CEClonerCircleLayout.h"
#endif
#define CLONEREFFECTOR_CEClonerCircleLayout_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetPlane); \
	DECLARE_FUNCTION(execSetPlane); \
	DECLARE_FUNCTION(execGetOrientMesh); \
	DECLARE_FUNCTION(execSetOrientMesh); \
	DECLARE_FUNCTION(execGetAngleRatio); \
	DECLARE_FUNCTION(execSetAngleRatio); \
	DECLARE_FUNCTION(execGetAngleStart); \
	DECLARE_FUNCTION(execSetAngleStart); \
	DECLARE_FUNCTION(execGetRadius); \
	DECLARE_FUNCTION(execSetRadius); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execSetCount);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_ACCESSORS \
static void GetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetAngleStart_WrapperImpl(const void* Object, void* OutValue); \
static void SetAngleStart_WrapperImpl(void* Object, const void* InValue); \
static void GetAngleRatio_WrapperImpl(const void* Object, void* OutValue); \
static void SetAngleRatio_WrapperImpl(void* Object, const void* InValue); \
static void GetbOrientMesh_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOrientMesh_WrapperImpl(void* Object, const void* InValue); \
static void GetPlane_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlane_WrapperImpl(void* Object, const void* InValue); \
static void GetRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetScale_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerCircleLayout(); \
	friend struct Z_Construct_UClass_UCEClonerCircleLayout_Statics; \
public: \
	DECLARE_CLASS(UCEClonerCircleLayout, UCEClonerLayoutBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerCircleLayout)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerCircleLayout(UCEClonerCircleLayout&&); \
	UCEClonerCircleLayout(const UCEClonerCircleLayout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerCircleLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerCircleLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerCircleLayout) \
	CLONEREFFECTOR_API virtual ~UCEClonerCircleLayout();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerCircleLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
