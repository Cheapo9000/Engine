// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Modes/CEEffectorTargetMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CLONEREFFECTOR_CEEffectorTargetMode_generated_h
#error "CEEffectorTargetMode.generated.h already included, missing '#pragma once' in CEEffectorTargetMode.h"
#endif
#define CLONEREFFECTOR_CEEffectorTargetMode_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetActorDestroyed); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_ACCESSORS \
static void GetTargetActorWeak_WrapperImpl(const void* Object, void* OutValue); \
static void SetTargetActorWeak_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorTargetMode(); \
	friend struct Z_Construct_UClass_UCEEffectorTargetMode_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorTargetMode, UCEEffectorModeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorTargetMode)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorTargetMode(UCEEffectorTargetMode&&); \
	UCEEffectorTargetMode(const UCEEffectorTargetMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorTargetMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorTargetMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorTargetMode) \
	CLONEREFFECTOR_API virtual ~UCEEffectorTargetMode();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorTargetMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
