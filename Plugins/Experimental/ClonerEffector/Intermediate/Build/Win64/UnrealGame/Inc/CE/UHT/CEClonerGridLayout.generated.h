// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Layouts/CEClonerGridLayout.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerAxis : uint8;
#ifdef CLONEREFFECTOR_CEClonerGridLayout_generated_h
#error "CEClonerGridLayout.generated.h already included, missing '#pragma once' in CEClonerGridLayout.h"
#endif
#define CLONEREFFECTOR_CEClonerGridLayout_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTwistAxis); \
	DECLARE_FUNCTION(execSetTwistAxis); \
	DECLARE_FUNCTION(execGetTwistFactor); \
	DECLARE_FUNCTION(execSetTwistFactor); \
	DECLARE_FUNCTION(execGetSpacingZ); \
	DECLARE_FUNCTION(execSetSpacingZ); \
	DECLARE_FUNCTION(execGetSpacingY); \
	DECLARE_FUNCTION(execSetSpacingY); \
	DECLARE_FUNCTION(execGetSpacingX); \
	DECLARE_FUNCTION(execSetSpacingX); \
	DECLARE_FUNCTION(execGetCountZ); \
	DECLARE_FUNCTION(execSetCountZ); \
	DECLARE_FUNCTION(execGetCountY); \
	DECLARE_FUNCTION(execSetCountY); \
	DECLARE_FUNCTION(execGetCountX); \
	DECLARE_FUNCTION(execSetCountX);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_13_ACCESSORS \
static void GetCountX_WrapperImpl(const void* Object, void* OutValue); \
static void SetCountX_WrapperImpl(void* Object, const void* InValue); \
static void GetCountY_WrapperImpl(const void* Object, void* OutValue); \
static void SetCountY_WrapperImpl(void* Object, const void* InValue); \
static void GetCountZ_WrapperImpl(const void* Object, void* OutValue); \
static void SetCountZ_WrapperImpl(void* Object, const void* InValue); \
static void GetSpacingX_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpacingX_WrapperImpl(void* Object, const void* InValue); \
static void GetSpacingY_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpacingY_WrapperImpl(void* Object, const void* InValue); \
static void GetSpacingZ_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpacingZ_WrapperImpl(void* Object, const void* InValue); \
static void GetTwistFactor_WrapperImpl(const void* Object, void* OutValue); \
static void SetTwistFactor_WrapperImpl(void* Object, const void* InValue); \
static void GetTwistAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetTwistAxis_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerGridLayout(); \
	friend struct Z_Construct_UClass_UCEClonerGridLayout_Statics; \
public: \
	DECLARE_CLASS(UCEClonerGridLayout, UCEClonerLayoutBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerGridLayout)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerGridLayout(UCEClonerGridLayout&&); \
	UCEClonerGridLayout(const UCEClonerGridLayout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerGridLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerGridLayout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerGridLayout) \
	CLONEREFFECTOR_API virtual ~UCEClonerGridLayout();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerGridLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Layouts_CEClonerGridLayout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
