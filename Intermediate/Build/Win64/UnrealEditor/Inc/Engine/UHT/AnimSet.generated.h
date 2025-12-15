// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimSet.h"

#ifdef ENGINE_AnimSet_generated_h
#error "AnimSet.generated.h already included, missing '#pragma once' in AnimSet.h"
#endif
#define ENGINE_AnimSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimSetMeshLinkup ************************************************
struct Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimSetMeshLinkup;
// ********** End ScriptStruct FAnimSetMeshLinkup **************************************************

// ********** Begin Class UAnimSet *****************************************************************
struct Z_Construct_UClass_UAnimSet_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimSet_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSet(); \
	friend struct ::Z_Construct_UClass_UAnimSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimSet_NoRegister) \
	DECLARE_SERIALIZER(UAnimSet)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSet(UAnimSet&&) = delete; \
	UAnimSet(const UAnimSet&) = delete; \
	ENGINE_API virtual ~UAnimSet();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSet;

// ********** End Class UAnimSet *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
