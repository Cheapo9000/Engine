// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerHoneycombLayout.h"

#ifdef CLONEREFFECTOR_CEClonerHoneycombLayout_generated_h
#error "CEClonerHoneycombLayout.generated.h already included, missing '#pragma once' in CEClonerHoneycombLayout.h"
#endif
#define CLONEREFFECTOR_CEClonerHoneycombLayout_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerAxis : uint8;
enum class ECEClonerPlane : uint8;

// ********** Begin Class UCEClonerHoneycombLayout *************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTwistAxis); \
	DECLARE_FUNCTION(execSetTwistAxis); \
	DECLARE_FUNCTION(execGetTwistFactor); \
	DECLARE_FUNCTION(execSetTwistFactor); \
	DECLARE_FUNCTION(execGetWidthSpacing); \
	DECLARE_FUNCTION(execSetWidthSpacing); \
	DECLARE_FUNCTION(execGetHeightSpacing); \
	DECLARE_FUNCTION(execSetHeightSpacing); \
	DECLARE_FUNCTION(execGetHeightOffset); \
	DECLARE_FUNCTION(execSetHeightOffset); \
	DECLARE_FUNCTION(execGetWidthOffset); \
	DECLARE_FUNCTION(execSetWidthOffset); \
	DECLARE_FUNCTION(execGetHeightCount); \
	DECLARE_FUNCTION(execSetHeightCount); \
	DECLARE_FUNCTION(execGetWidthCount); \
	DECLARE_FUNCTION(execSetWidthCount); \
	DECLARE_FUNCTION(execGetPlane); \
	DECLARE_FUNCTION(execSetPlane);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_13_ACCESSORS \
static void GetPlane_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlane_WrapperImpl(void* Object, const void* InValue); \
static void GetWidthCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidthCount_WrapperImpl(void* Object, const void* InValue); \
static void GetHeightCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetHeightCount_WrapperImpl(void* Object, const void* InValue); \
static void GetWidthOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidthOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetHeightOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetHeightOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetWidthSpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidthSpacing_WrapperImpl(void* Object, const void* InValue); \
static void GetHeightSpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetHeightSpacing_WrapperImpl(void* Object, const void* InValue); \
static void GetTwistFactor_WrapperImpl(const void* Object, void* OutValue); \
static void SetTwistFactor_WrapperImpl(void* Object, const void* InValue); \
static void GetTwistAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetTwistAxis_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerHoneycombLayout_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerHoneycombLayout_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerHoneycombLayout(); \
	friend struct ::Z_Construct_UClass_UCEClonerHoneycombLayout_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerHoneycombLayout_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerHoneycombLayout, UCEClonerLayoutBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerHoneycombLayout_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerHoneycombLayout)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerHoneycombLayout(UCEClonerHoneycombLayout&&) = delete; \
	UCEClonerHoneycombLayout(const UCEClonerHoneycombLayout&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerHoneycombLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerHoneycombLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerHoneycombLayout) \
	CLONEREFFECTOR_API virtual ~UCEClonerHoneycombLayout();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerHoneycombLayout;

// ********** End Class UCEClonerHoneycombLayout ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerHoneycombLayout_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
