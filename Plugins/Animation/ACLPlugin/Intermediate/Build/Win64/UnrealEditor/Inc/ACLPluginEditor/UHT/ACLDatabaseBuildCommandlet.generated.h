// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACLDatabaseBuildCommandlet.h"

#ifdef ACLPLUGINEDITOR_ACLDatabaseBuildCommandlet_generated_h
#error "ACLDatabaseBuildCommandlet.generated.h already included, missing '#pragma once' in ACLDatabaseBuildCommandlet.h"
#endif
#define ACLPLUGINEDITOR_ACLDatabaseBuildCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UACLDatabaseBuildCommandlet **********************************************
struct Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics;
ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLDatabaseBuildCommandlet_NoRegister();

#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUACLDatabaseBuildCommandlet(); \
	friend struct ::Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACLPLUGINEDITOR_API UClass* ::Z_Construct_UClass_UACLDatabaseBuildCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UACLDatabaseBuildCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ACLPluginEditor"), Z_Construct_UClass_UACLDatabaseBuildCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UACLDatabaseBuildCommandlet)


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACLDatabaseBuildCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACLDatabaseBuildCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACLDatabaseBuildCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACLDatabaseBuildCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UACLDatabaseBuildCommandlet(UACLDatabaseBuildCommandlet&&) = delete; \
	UACLDatabaseBuildCommandlet(const UACLDatabaseBuildCommandlet&) = delete; \
	NO_API virtual ~UACLDatabaseBuildCommandlet();


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_12_PROLOG
#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_15_INCLASS \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UACLDatabaseBuildCommandlet;

// ********** End Class UACLDatabaseBuildCommandlet ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
