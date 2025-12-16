// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_RigLogic.h"

#ifdef RIGLOGICDEVELOPER_AnimGraphNode_RigLogic_generated_h
#error "AnimGraphNode_RigLogic.generated.h already included, missing '#pragma once' in AnimGraphNode_RigLogic.h"
#endif
#define RIGLOGICDEVELOPER_AnimGraphNode_RigLogic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_RigLogic **************************************************
struct Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics;
RIGLOGICDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_RigLogic_NoRegister();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_RigLogic(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_RigLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGLOGICDEVELOPER_API UClass* ::Z_Construct_UClass_UAnimGraphNode_RigLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_RigLogic, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigLogicDeveloper"), Z_Construct_UClass_UAnimGraphNode_RigLogic_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_RigLogic)


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGLOGICDEVELOPER_API UAnimGraphNode_RigLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_RigLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGLOGICDEVELOPER_API, UAnimGraphNode_RigLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_RigLogic); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_RigLogic(UAnimGraphNode_RigLogic&&) = delete; \
	UAnimGraphNode_RigLogic(const UAnimGraphNode_RigLogic&) = delete; \
	RIGLOGICDEVELOPER_API virtual ~UAnimGraphNode_RigLogic();


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_11_PROLOG
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_14_INCLASS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_RigLogic;

// ********** End Class UAnimGraphNode_RigLogic ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicDeveloper_Public_AnimGraphNode_RigLogic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
