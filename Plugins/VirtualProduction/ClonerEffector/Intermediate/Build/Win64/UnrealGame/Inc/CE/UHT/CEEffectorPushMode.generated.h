// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Modes/CEEffectorPushMode.h"

#ifdef CLONEREFFECTOR_CEEffectorPushMode_generated_h
#error "CEEffectorPushMode.generated.h already included, missing '#pragma once' in CEEffectorPushMode.h"
#endif
#define CLONEREFFECTOR_CEEffectorPushMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerEffectorPushDirection : uint8;

// ********** Begin Class UCEEffectorPushMode ******************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPushStrength); \
	DECLARE_FUNCTION(execSetPushStrength); \
	DECLARE_FUNCTION(execGetPushDirection); \
	DECLARE_FUNCTION(execSetPushDirection);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_15_ACCESSORS \
static void GetPushStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetPushStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetPushDirection_WrapperImpl(const void* Object, void* OutValue); \
static void SetPushDirection_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEEffectorPushMode_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorPushMode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorPushMode(); \
	friend struct ::Z_Construct_UClass_UCEEffectorPushMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorPushMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorPushMode, UCEEffectorModeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorPushMode_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorPushMode)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorPushMode(UCEEffectorPushMode&&) = delete; \
	UCEEffectorPushMode(const UCEEffectorPushMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorPushMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorPushMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorPushMode) \
	CLONEREFFECTOR_API virtual ~UCEEffectorPushMode();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorPushMode;

// ********** End Class UCEEffectorPushMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorPushMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
