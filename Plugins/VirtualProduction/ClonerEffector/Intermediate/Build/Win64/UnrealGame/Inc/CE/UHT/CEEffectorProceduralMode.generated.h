// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Modes/CEEffectorProceduralMode.h"

#ifdef CLONEREFFECTOR_CEEffectorProceduralMode_generated_h
#error "CEEffectorProceduralMode.generated.h already included, missing '#pragma once' in CEEffectorProceduralMode.h"
#endif
#define CLONEREFFECTOR_CEEffectorProceduralMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerEffectorProceduralPattern : uint8;

// ********** Begin Class UCEEffectorProceduralMode ************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFrequency); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execGetPan); \
	DECLARE_FUNCTION(execSetPan); \
	DECLARE_FUNCTION(execGetScaleStrength); \
	DECLARE_FUNCTION(execSetScaleStrength); \
	DECLARE_FUNCTION(execGetRotationStrength); \
	DECLARE_FUNCTION(execSetRotationStrength); \
	DECLARE_FUNCTION(execGetLocationStrength); \
	DECLARE_FUNCTION(execSetLocationStrength); \
	DECLARE_FUNCTION(execGetPattern); \
	DECLARE_FUNCTION(execSetPattern);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_15_ACCESSORS \
static void GetPattern_WrapperImpl(const void* Object, void* OutValue); \
static void SetPattern_WrapperImpl(void* Object, const void* InValue); \
static void GetLocationStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetLocationStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetRotationStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotationStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetScaleStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetScaleStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetPan_WrapperImpl(const void* Object, void* OutValue); \
static void SetPan_WrapperImpl(void* Object, const void* InValue); \
static void GetFrequency_WrapperImpl(const void* Object, void* OutValue); \
static void SetFrequency_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEEffectorProceduralMode_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorProceduralMode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorProceduralMode(); \
	friend struct ::Z_Construct_UClass_UCEEffectorProceduralMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorProceduralMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorProceduralMode, UCEEffectorModeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorProceduralMode_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorProceduralMode)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorProceduralMode(UCEEffectorProceduralMode&&) = delete; \
	UCEEffectorProceduralMode(const UCEEffectorProceduralMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorProceduralMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorProceduralMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorProceduralMode) \
	CLONEREFFECTOR_API virtual ~UCEEffectorProceduralMode();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorProceduralMode;

// ********** End Class UCEEffectorProceduralMode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorProceduralMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
