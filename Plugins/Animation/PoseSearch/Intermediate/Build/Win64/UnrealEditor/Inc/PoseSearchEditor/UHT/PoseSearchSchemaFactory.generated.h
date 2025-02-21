// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchSchemaFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCHEDITOR_PoseSearchSchemaFactory_generated_h
#error "PoseSearchSchemaFactory.generated.h already included, missing '#pragma once' in PoseSearchSchemaFactory.h"
#endif
#define POSESEARCHEDITOR_PoseSearchSchemaFactory_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPoseSearchSchemaFactory(); \
	friend struct Z_Construct_UClass_UPoseSearchSchemaFactory_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchSchemaFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchSchemaFactory)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchSchemaFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchSchemaFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchSchemaFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchSchemaFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchSchemaFactory(UPoseSearchSchemaFactory&&); \
	UPoseSearchSchemaFactory(const UPoseSearchSchemaFactory&); \
public: \
	NO_API virtual ~UPoseSearchSchemaFactory();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_13_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_16_INCLASS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCHEDITOR_API UClass* StaticClass<class UPoseSearchSchemaFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
