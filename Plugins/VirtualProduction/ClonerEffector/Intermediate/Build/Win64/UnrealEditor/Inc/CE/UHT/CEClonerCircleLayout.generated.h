// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerCircleLayout.h"

#ifdef CLONEREFFECTOR_CEClonerCircleLayout_generated_h
#error "CEClonerCircleLayout.generated.h already included, missing '#pragma once' in CEClonerCircleLayout.h"
#endif
#define CLONEREFFECTOR_CEClonerCircleLayout_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerPlane : uint8;

// ********** Begin Class UCEClonerCircleLayout ****************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execGetRingCount); \
	DECLARE_FUNCTION(execSetRingCount); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execSetCount);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_ACCESSORS \
static void GetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetRingCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetRingCount_WrapperImpl(void* Object, const void* InValue); \
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


struct Z_Construct_UClass_UCEClonerCircleLayout_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerCircleLayout_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerCircleLayout(); \
	friend struct ::Z_Construct_UClass_UCEClonerCircleLayout_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerCircleLayout_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerCircleLayout, UCEClonerLayoutBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerCircleLayout_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerCircleLayout)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerCircleLayout(UCEClonerCircleLayout&&) = delete; \
	UCEClonerCircleLayout(const UCEClonerCircleLayout&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerCircleLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerCircleLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerCircleLayout) \
	CLONEREFFECTOR_API virtual ~UCEClonerCircleLayout();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerCircleLayout;

// ********** End Class UCEClonerCircleLayout ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerCircleLayout_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
