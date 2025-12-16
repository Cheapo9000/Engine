// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_ControlRig.h"

#ifdef CONTROLRIGDEVELOPER_AnimGraphNode_ControlRig_generated_h
#error "AnimGraphNode_ControlRig.generated.h already included, missing '#pragma once' in AnimGraphNode_ControlRig.h"
#endif
#define CONTROLRIGDEVELOPER_AnimGraphNode_ControlRig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_ControlRig ************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_ControlRig, CONTROLRIGDEVELOPER_API)


struct Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics;
CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_ControlRig_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_ControlRig(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_ControlRig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGDEVELOPER_API UClass* ::Z_Construct_UClass_UAnimGraphNode_ControlRig_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_ControlRig, UAnimGraphNode_CustomProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigDeveloper"), Z_Construct_UClass_UAnimGraphNode_ControlRig_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_ControlRig) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_16_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGDEVELOPER_API UAnimGraphNode_ControlRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_ControlRig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGDEVELOPER_API, UAnimGraphNode_ControlRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_ControlRig); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_ControlRig(UAnimGraphNode_ControlRig&&) = delete; \
	UAnimGraphNode_ControlRig(const UAnimGraphNode_ControlRig&) = delete; \
	CONTROLRIGDEVELOPER_API virtual ~UAnimGraphNode_ControlRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_13_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_16_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_ControlRig;

// ********** End Class UAnimGraphNode_ControlRig **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_AnimGraphNode_ControlRig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
