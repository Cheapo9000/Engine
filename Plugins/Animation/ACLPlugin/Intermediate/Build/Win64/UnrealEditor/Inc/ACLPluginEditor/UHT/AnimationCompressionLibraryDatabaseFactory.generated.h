// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationCompressionLibraryDatabaseFactory.h"

#ifdef ACLPLUGINEDITOR_AnimationCompressionLibraryDatabaseFactory_generated_h
#error "AnimationCompressionLibraryDatabaseFactory.generated.h already included, missing '#pragma once' in AnimationCompressionLibraryDatabaseFactory.h"
#endif
#define ACLPLUGINEDITOR_AnimationCompressionLibraryDatabaseFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationCompressionLibraryDatabaseFactory ******************************
struct Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics;
ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_NoRegister();

#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationCompressionLibraryDatabaseFactory(); \
	friend struct ::Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACLPLUGINEDITOR_API UClass* ::Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationCompressionLibraryDatabaseFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ACLPluginEditor"), Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_NoRegister) \
	DECLARE_SERIALIZER(UAnimationCompressionLibraryDatabaseFactory)


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACLPLUGINEDITOR_API UAnimationCompressionLibraryDatabaseFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCompressionLibraryDatabaseFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACLPLUGINEDITOR_API, UAnimationCompressionLibraryDatabaseFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCompressionLibraryDatabaseFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationCompressionLibraryDatabaseFactory(UAnimationCompressionLibraryDatabaseFactory&&) = delete; \
	UAnimationCompressionLibraryDatabaseFactory(const UAnimationCompressionLibraryDatabaseFactory&) = delete; \
	ACLPLUGINEDITOR_API virtual ~UAnimationCompressionLibraryDatabaseFactory();


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_10_PROLOG
#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_13_INCLASS \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationCompressionLibraryDatabaseFactory;

// ********** End Class UAnimationCompressionLibraryDatabaseFactory ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_AnimationCompressionLibraryDatabaseFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
