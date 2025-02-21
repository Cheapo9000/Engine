// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Types/CEEffectorRadialType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEEffectorRadialType_generated_h
#error "CEEffectorRadialType.generated.h already included, missing '#pragma once' in CEEffectorRadialType.h"
#endif
#define CLONEREFFECTOR_CEEffectorRadialType_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRadialMaxRadius); \
	DECLARE_FUNCTION(execSetRadialMaxRadius); \
	DECLARE_FUNCTION(execGetRadialMinRadius); \
	DECLARE_FUNCTION(execSetRadialMinRadius); \
	DECLARE_FUNCTION(execGetRadialAngle); \
	DECLARE_FUNCTION(execSetRadialAngle);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_ACCESSORS \
static void GetRadialAngle_WrapperImpl(const void* Object, void* OutValue); \
static void SetRadialAngle_WrapperImpl(void* Object, const void* InValue); \
static void GetRadialMinRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetRadialMinRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetRadialMaxRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetRadialMaxRadius_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorRadialType(); \
	friend struct Z_Construct_UClass_UCEEffectorRadialType_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorRadialType, UCEEffectorBoundType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorRadialType)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorRadialType(UCEEffectorRadialType&&); \
	UCEEffectorRadialType(const UCEEffectorRadialType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorRadialType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorRadialType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorRadialType) \
	CLONEREFFECTOR_API virtual ~UCEEffectorRadialType();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorRadialType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
