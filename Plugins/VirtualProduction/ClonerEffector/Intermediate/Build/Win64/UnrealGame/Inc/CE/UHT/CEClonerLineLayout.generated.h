// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerLineLayout.h"

#ifdef CLONEREFFECTOR_CEClonerLineLayout_generated_h
#error "CEClonerLineLayout.generated.h already included, missing '#pragma once' in CEClonerLineLayout.h"
#endif
#define CLONEREFFECTOR_CEClonerLineLayout_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerAxis : uint8;

// ********** Begin Class UCEClonerLineLayout ******************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execSetDirection); \
	DECLARE_FUNCTION(execGetAxis); \
	DECLARE_FUNCTION(execSetAxis); \
	DECLARE_FUNCTION(execGetSpacing); \
	DECLARE_FUNCTION(execSetSpacing); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execSetCount);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_ACCESSORS \
static void GetCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCount_WrapperImpl(void* Object, const void* InValue); \
static void GetSpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpacing_WrapperImpl(void* Object, const void* InValue); \
static void GetAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetAxis_WrapperImpl(void* Object, const void* InValue); \
static void GetDirection_WrapperImpl(const void* Object, void* OutValue); \
static void SetDirection_WrapperImpl(void* Object, const void* InValue); \
static void GetRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotation_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerLineLayout_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerLineLayout_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerLineLayout(); \
	friend struct ::Z_Construct_UClass_UCEClonerLineLayout_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerLineLayout_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerLineLayout, UCEClonerLayoutBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerLineLayout_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerLineLayout)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerLineLayout(UCEClonerLineLayout&&) = delete; \
	UCEClonerLineLayout(const UCEClonerLineLayout&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerLineLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerLineLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerLineLayout) \
	CLONEREFFECTOR_API virtual ~UCEClonerLineLayout();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerLineLayout;

// ********** End Class UCEClonerLineLayout ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
