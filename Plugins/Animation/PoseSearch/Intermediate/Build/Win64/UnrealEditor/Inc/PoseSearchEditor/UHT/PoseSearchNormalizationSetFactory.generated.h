// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchNormalizationSetFactory.h"

#ifdef POSESEARCHEDITOR_PoseSearchNormalizationSetFactory_generated_h
#error "PoseSearchNormalizationSetFactory.generated.h already included, missing '#pragma once' in PoseSearchNormalizationSetFactory.h"
#endif
#define POSESEARCHEDITOR_PoseSearchNormalizationSetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseSearchNormalizationSetFactory ***************************************
struct Z_Construct_UClass_UPoseSearchNormalizationSetFactory_Statics;
POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchNormalizationSetFactory_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchNormalizationSetFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPoseSearchNormalizationSetFactory(); \
	friend struct ::Z_Construct_UClass_UPoseSearchNormalizationSetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCHEDITOR_API UClass* ::Z_Construct_UClass_UPoseSearchNormalizationSetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchNormalizationSetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), Z_Construct_UClass_UPoseSearchNormalizationSetFactory_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchNormalizationSetFactory)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchNormalizationSetFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCHEDITOR_API UPoseSearchNormalizationSetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchNormalizationSetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCHEDITOR_API, UPoseSearchNormalizationSetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchNormalizationSetFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchNormalizationSetFactory(UPoseSearchNormalizationSetFactory&&) = delete; \
	UPoseSearchNormalizationSetFactory(const UPoseSearchNormalizationSetFactory&) = delete; \
	POSESEARCHEDITOR_API virtual ~UPoseSearchNormalizationSetFactory();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchNormalizationSetFactory_h_12_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchNormalizationSetFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchNormalizationSetFactory_h_15_INCLASS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchNormalizationSetFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchNormalizationSetFactory;

// ********** End Class UPoseSearchNormalizationSetFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchNormalizationSetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
