// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Types/CEEffectorRadialType.h"

#ifdef CLONEREFFECTOR_CEEffectorRadialType_generated_h
#error "CEEffectorRadialType.generated.h already included, missing '#pragma once' in CEEffectorRadialType.h"
#endif
#define CLONEREFFECTOR_CEEffectorRadialType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEEffectorRadialType ****************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRadialMaxRadius); \
	DECLARE_FUNCTION(execSetRadialMaxRadius); \
	DECLARE_FUNCTION(execGetRadialMinRadius); \
	DECLARE_FUNCTION(execSetRadialMinRadius); \
	DECLARE_FUNCTION(execGetRadialAngle); \
	DECLARE_FUNCTION(execSetRadialAngle);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_ACCESSORS \
static void GetRadialAngle_WrapperImpl(const void* Object, void* OutValue); \
static void SetRadialAngle_WrapperImpl(void* Object, const void* InValue); \
static void GetRadialMinRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetRadialMinRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetRadialMaxRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetRadialMaxRadius_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEEffectorRadialType_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorRadialType_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorRadialType(); \
	friend struct ::Z_Construct_UClass_UCEEffectorRadialType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorRadialType_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorRadialType, UCEEffectorBoundType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorRadialType_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorRadialType)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorRadialType(UCEEffectorRadialType&&) = delete; \
	UCEEffectorRadialType(const UCEEffectorRadialType&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorRadialType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorRadialType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorRadialType) \
	CLONEREFFECTOR_API virtual ~UCEEffectorRadialType();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorRadialType;

// ********** End Class UCEEffectorRadialType ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Types_CEEffectorRadialType_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
