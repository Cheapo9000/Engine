// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseConfig.h"

#ifdef AIMODULE_AISenseConfig_generated_h
#error "AISenseConfig.generated.h already included, missing '#pragma once' in AISenseConfig.h"
#endif
#define AIMODULE_AISenseConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISenseConfig ***********************************************************
struct Z_Construct_UClass_UAISenseConfig_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseConfig(); \
	friend struct ::Z_Construct_UClass_UAISenseConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISenseConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISenseConfig, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISenseConfig_NoRegister) \
	DECLARE_SERIALIZER(UAISenseConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISenseConfig(UAISenseConfig&&) = delete; \
	UAISenseConfig(const UAISenseConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISenseConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig) \
	AIMODULE_API virtual ~UAISenseConfig();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISenseConfig;

// ********** End Class UAISenseConfig *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
