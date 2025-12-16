// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigDependencyGraph/RigDependencyGraphSchema.h"

#ifdef CONTROLRIGEDITOR_RigDependencyGraphSchema_generated_h
#error "RigDependencyGraphSchema.generated.h already included, missing '#pragma once' in RigDependencyGraphSchema.h"
#endif
#define CONTROLRIGEDITOR_RigDependencyGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigDependencyGraphSchema ************************************************
struct Z_Construct_UClass_URigDependencyGraphSchema_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_URigDependencyGraphSchema_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphSchema_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURigDependencyGraphSchema(); \
	friend struct ::Z_Construct_UClass_URigDependencyGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_URigDependencyGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(URigDependencyGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_URigDependencyGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(URigDependencyGraphSchema)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphSchema_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigDependencyGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigDependencyGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigDependencyGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigDependencyGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigDependencyGraphSchema(URigDependencyGraphSchema&&) = delete; \
	URigDependencyGraphSchema(const URigDependencyGraphSchema&) = delete; \
	NO_API virtual ~URigDependencyGraphSchema();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphSchema_h_14_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphSchema_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphSchema_h_17_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphSchema_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigDependencyGraphSchema;

// ********** End Class URigDependencyGraphSchema **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
