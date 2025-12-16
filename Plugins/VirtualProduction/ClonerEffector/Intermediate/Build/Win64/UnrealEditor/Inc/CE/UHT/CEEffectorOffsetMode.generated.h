// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Modes/CEEffectorOffsetMode.h"

#ifdef CLONEREFFECTOR_CEEffectorOffsetMode_generated_h
#error "CEEffectorOffsetMode.generated.h already included, missing '#pragma once' in CEEffectorOffsetMode.h"
#endif
#define CLONEREFFECTOR_CEEffectorOffsetMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEEffectorOffsetMode ****************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetOffset); \
	DECLARE_FUNCTION(execSetOffset);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_15_ACCESSORS \
static void GetOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetScale_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEEffectorOffsetMode_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorOffsetMode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorOffsetMode(); \
	friend struct ::Z_Construct_UClass_UCEEffectorOffsetMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorOffsetMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorOffsetMode, UCEEffectorModeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorOffsetMode_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorOffsetMode)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorOffsetMode(UCEEffectorOffsetMode&&) = delete; \
	UCEEffectorOffsetMode(const UCEEffectorOffsetMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorOffsetMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorOffsetMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorOffsetMode) \
	CLONEREFFECTOR_API virtual ~UCEEffectorOffsetMode();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorOffsetMode;

// ********** End Class UCEEffectorOffsetMode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorOffsetMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
