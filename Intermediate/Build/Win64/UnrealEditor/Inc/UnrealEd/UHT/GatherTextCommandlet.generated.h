// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GatherTextCommandlet.h"

#ifdef UNREALED_GatherTextCommandlet_generated_h
#error "GatherTextCommandlet.generated.h already included, missing '#pragma once' in GatherTextCommandlet.h"
#endif
#define UNREALED_GatherTextCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGatherTextCommandletTask *****************************************
struct Z_Construct_UScriptStruct_FGatherTextCommandletTask_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGatherTextCommandletTask_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FGatherTextCommandletTask;
// ********** End ScriptStruct FGatherTextCommandletTask *******************************************

// ********** Begin ScriptStruct FGatherTextCommandletPhase ****************************************
struct Z_Construct_UScriptStruct_FGatherTextCommandletPhase_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGatherTextCommandletPhase_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FGatherTextCommandletPhase;
// ********** End ScriptStruct FGatherTextCommandletPhase ******************************************

// ********** Begin Class UGatherTextCommandlet ****************************************************
struct Z_Construct_UClass_UGatherTextCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUGatherTextCommandlet(); \
	friend struct ::Z_Construct_UClass_UGatherTextCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UGatherTextCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGatherTextCommandlet, UGatherTextCommandletBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UGatherTextCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UGatherTextCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UGatherTextCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGatherTextCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UGatherTextCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGatherTextCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGatherTextCommandlet(UGatherTextCommandlet&&) = delete; \
	UGatherTextCommandlet(const UGatherTextCommandlet&) = delete; \
	UNREALED_API virtual ~UGatherTextCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_43_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_46_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGatherTextCommandlet;

// ********** End Class UGatherTextCommandlet ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
