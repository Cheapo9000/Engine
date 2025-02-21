// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchDatabaseFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCHEDITOR_PoseSearchDatabaseFactory_generated_h
#error "PoseSearchDatabaseFactory.generated.h already included, missing '#pragma once' in PoseSearchDatabaseFactory.h"
#endif
#define POSESEARCHEDITOR_PoseSearchDatabaseFactory_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPoseSearchDatabaseFactory(); \
	friend struct Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchDatabaseFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchDatabaseFactory)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchDatabaseFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchDatabaseFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchDatabaseFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchDatabaseFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchDatabaseFactory(UPoseSearchDatabaseFactory&&); \
	UPoseSearchDatabaseFactory(const UPoseSearchDatabaseFactory&); \
public: \
	NO_API virtual ~UPoseSearchDatabaseFactory();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_13_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_INCLASS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCHEDITOR_API UClass* StaticClass<class UPoseSearchDatabaseFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
