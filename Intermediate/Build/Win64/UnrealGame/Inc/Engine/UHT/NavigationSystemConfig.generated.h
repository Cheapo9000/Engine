// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/NavigationSystemConfig.h"

#ifdef ENGINE_NavigationSystemConfig_generated_h
#error "NavigationSystemConfig.generated.h already included, missing '#pragma once' in NavigationSystemConfig.h"
#endif
#define ENGINE_NavigationSystemConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavigationSystemConfig **************************************************
struct Z_Construct_UClass_UNavigationSystemConfig_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemConfig(); \
	friend struct ::Z_Construct_UClass_UNavigationSystemConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNavigationSystemConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationSystemConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNavigationSystemConfig_NoRegister) \
	DECLARE_SERIALIZER(UNavigationSystemConfig)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationSystemConfig(UNavigationSystemConfig&&) = delete; \
	UNavigationSystemConfig(const UNavigationSystemConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavigationSystemConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemConfig) \
	ENGINE_API virtual ~UNavigationSystemConfig();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationSystemConfig;

// ********** End Class UNavigationSystemConfig ****************************************************

// ********** Begin Class UNullNavSysConfig ********************************************************
struct Z_Construct_UClass_UNullNavSysConfig_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNullNavSysConfig_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNullNavSysConfig(); \
	friend struct ::Z_Construct_UClass_UNullNavSysConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNullNavSysConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNullNavSysConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNullNavSysConfig_NoRegister) \
	DECLARE_SERIALIZER(UNullNavSysConfig)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNullNavSysConfig(UNullNavSysConfig&&) = delete; \
	UNullNavSysConfig(const UNullNavSysConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNullNavSysConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNullNavSysConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNullNavSysConfig) \
	ENGINE_API virtual ~UNullNavSysConfig();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_53_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNullNavSysConfig;

// ********** End Class UNullNavSysConfig **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
