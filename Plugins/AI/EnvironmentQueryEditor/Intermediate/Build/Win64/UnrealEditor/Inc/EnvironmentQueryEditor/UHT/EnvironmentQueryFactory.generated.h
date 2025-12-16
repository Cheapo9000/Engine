// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQueryFactory.h"

#ifdef ENVIRONMENTQUERYEDITOR_EnvironmentQueryFactory_generated_h
#error "EnvironmentQueryFactory.generated.h already included, missing '#pragma once' in EnvironmentQueryFactory.h"
#endif
#define ENVIRONMENTQUERYEDITOR_EnvironmentQueryFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvironmentQueryFactory *************************************************
struct Z_Construct_UClass_UEnvironmentQueryFactory_Statics;
ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryFactory_NoRegister();

#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUEnvironmentQueryFactory(); \
	friend struct ::Z_Construct_UClass_UEnvironmentQueryFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENVIRONMENTQUERYEDITOR_API UClass* ::Z_Construct_UClass_UEnvironmentQueryFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvironmentQueryFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnvironmentQueryEditor"), Z_Construct_UClass_UEnvironmentQueryFactory_NoRegister) \
	DECLARE_SERIALIZER(UEnvironmentQueryFactory)


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvironmentQueryFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvironmentQueryFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvironmentQueryFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvironmentQueryFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvironmentQueryFactory(UEnvironmentQueryFactory&&) = delete; \
	UEnvironmentQueryFactory(const UEnvironmentQueryFactory&) = delete; \
	NO_API virtual ~UEnvironmentQueryFactory();


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_8_PROLOG
#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_INCLASS \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvironmentQueryFactory;

// ********** End Class UEnvironmentQueryFactory ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
