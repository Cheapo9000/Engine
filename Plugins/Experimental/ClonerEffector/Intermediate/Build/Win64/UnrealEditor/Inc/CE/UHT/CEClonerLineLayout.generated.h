// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerLineLayout.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerAxis : uint8;
#ifdef CLONEREFFECTOR_CEClonerLineLayout_generated_h
#error "CEClonerLineLayout.generated.h already included, missing '#pragma once' in CEClonerLineLayout.h"
#endif
#define CLONEREFFECTOR_CEClonerLineLayout_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_ACCESSORS \
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


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerLineLayout(); \
	friend struct Z_Construct_UClass_UCEClonerLineLayout_Statics; \
public: \
	DECLARE_CLASS(UCEClonerLineLayout, UCEClonerLayoutBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerLineLayout)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerLineLayout(UCEClonerLineLayout&&); \
	UCEClonerLineLayout(const UCEClonerLineLayout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerLineLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerLineLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerLineLayout) \
	CLONEREFFECTOR_API virtual ~UCEClonerLineLayout();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerLineLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerLineLayout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
