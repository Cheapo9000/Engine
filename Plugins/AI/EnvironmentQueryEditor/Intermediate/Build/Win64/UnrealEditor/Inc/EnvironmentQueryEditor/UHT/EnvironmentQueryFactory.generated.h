// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQueryFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENVIRONMENTQUERYEDITOR_EnvironmentQueryFactory_generated_h
#error "EnvironmentQueryFactory.generated.h already included, missing '#pragma once' in EnvironmentQueryFactory.h"
#endif
#define ENVIRONMENTQUERYEDITOR_EnvironmentQueryFactory_generated_h

#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUEnvironmentQueryFactory(); \
	friend struct Z_Construct_UClass_UEnvironmentQueryFactory_Statics; \
public: \
	DECLARE_CLASS(UEnvironmentQueryFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnvironmentQueryEditor"), NO_API) \
	DECLARE_SERIALIZER(UEnvironmentQueryFactory)


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvironmentQueryFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvironmentQueryFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvironmentQueryFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvironmentQueryFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvironmentQueryFactory(UEnvironmentQueryFactory&&); \
	UEnvironmentQueryFactory(const UEnvironmentQueryFactory&); \
public: \
	NO_API virtual ~UEnvironmentQueryFactory();


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_8_PROLOG
#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_INCLASS \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<class UEnvironmentQueryFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
