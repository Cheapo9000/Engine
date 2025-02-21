// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_AnimNextConfig_generated_h
#error "AnimNextConfig.generated.h already included, missing '#pragma once' in AnimNextConfig.h"
#endif
#define ANIMNEXT_AnimNextConfig_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_AnimNextConfig_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextConfig(); \
	friend struct Z_Construct_UClass_UAnimNextConfig_Statics; \
public: \
	DECLARE_CLASS(UAnimNextConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNext"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("AnimNext");} \



#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_AnimNextConfig_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextConfig(UAnimNextConfig&&); \
	UAnimNextConfig(const UAnimNextConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextConfig) \
	NO_API virtual ~UAnimNextConfig();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_AnimNextConfig_h_7_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_AnimNextConfig_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_AnimNextConfig_h_10_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_AnimNextConfig_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXT_API UClass* StaticClass<class UAnimNextConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_AnimNextConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
