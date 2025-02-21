// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Modes/CEEffectorStepMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEEffectorStepMode_generated_h
#error "CEEffectorStepMode.generated.h already included, missing '#pragma once' in CEEffectorStepMode.h"
#endif
#define CLONEREFFECTOR_CEEffectorStepMode_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStepScale); \
	DECLARE_FUNCTION(execSetStepScale); \
	DECLARE_FUNCTION(execGetStepRotation); \
	DECLARE_FUNCTION(execSetStepRotation); \
	DECLARE_FUNCTION(execGetStepPosition); \
	DECLARE_FUNCTION(execSetStepPosition);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_15_ACCESSORS \
static void GetStepPosition_WrapperImpl(const void* Object, void* OutValue); \
static void SetStepPosition_WrapperImpl(void* Object, const void* InValue); \
static void GetStepRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetStepRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetStepScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetStepScale_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorStepMode(); \
	friend struct Z_Construct_UClass_UCEEffectorStepMode_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorStepMode, UCEEffectorModeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorStepMode)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorStepMode(UCEEffectorStepMode&&); \
	UCEEffectorStepMode(const UCEEffectorStepMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorStepMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorStepMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorStepMode) \
	CLONEREFFECTOR_API virtual ~UCEEffectorStepMode();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorStepMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorStepMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
