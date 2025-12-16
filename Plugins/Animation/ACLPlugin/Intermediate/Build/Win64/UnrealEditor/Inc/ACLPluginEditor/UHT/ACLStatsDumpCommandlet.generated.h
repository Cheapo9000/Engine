// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACLStatsDumpCommandlet.h"

#ifdef ACLPLUGINEDITOR_ACLStatsDumpCommandlet_generated_h
#error "ACLStatsDumpCommandlet.generated.h already included, missing '#pragma once' in ACLStatsDumpCommandlet.h"
#endif
#define ACLPLUGINEDITOR_ACLStatsDumpCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UACLStatsDumpCommandlet **************************************************
struct Z_Construct_UClass_UACLStatsDumpCommandlet_Statics;
ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLStatsDumpCommandlet_NoRegister();

#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUACLStatsDumpCommandlet(); \
	friend struct ::Z_Construct_UClass_UACLStatsDumpCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACLPLUGINEDITOR_API UClass* ::Z_Construct_UClass_UACLStatsDumpCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UACLStatsDumpCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ACLPluginEditor"), Z_Construct_UClass_UACLStatsDumpCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UACLStatsDumpCommandlet)


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UACLStatsDumpCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UACLStatsDumpCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACLStatsDumpCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACLStatsDumpCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UACLStatsDumpCommandlet(UACLStatsDumpCommandlet&&) = delete; \
	UACLStatsDumpCommandlet(const UACLStatsDumpCommandlet&) = delete; \
	NO_API virtual ~UACLStatsDumpCommandlet();


#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_14_PROLOG
#define FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_17_INCLASS \
	FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UACLStatsDumpCommandlet;

// ********** End Class UACLStatsDumpCommandlet ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
