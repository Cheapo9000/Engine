// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Modes/CEEffectorTargetMode.h"

#ifdef CLONEREFFECTOR_CEEffectorTargetMode_generated_h
#error "CEEffectorTargetMode.generated.h already included, missing '#pragma once' in CEEffectorTargetMode.h"
#endif
#define CLONEREFFECTOR_CEEffectorTargetMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UCEEffectorTargetMode ****************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetActorDestroyed); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_ACCESSORS \
static void GetTargetActorWeak_WrapperImpl(const void* Object, void* OutValue); \
static void SetTargetActorWeak_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEEffectorTargetMode_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorTargetMode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorTargetMode(); \
	friend struct ::Z_Construct_UClass_UCEEffectorTargetMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorTargetMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorTargetMode, UCEEffectorModeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorTargetMode_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorTargetMode)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorTargetMode(UCEEffectorTargetMode&&) = delete; \
	UCEEffectorTargetMode(const UCEEffectorTargetMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorTargetMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorTargetMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorTargetMode) \
	CLONEREFFECTOR_API virtual ~UCEEffectorTargetMode();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorTargetMode;

// ********** End Class UCEEffectorTargetMode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorTargetMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
