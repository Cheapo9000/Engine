// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/GroupActor.h"

#ifdef UNREALED_GroupActor_generated_h
#error "GroupActor.generated.h already included, missing '#pragma once' in GroupActor.h"
#endif
#define UNREALED_GroupActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGroupActor **************************************************************
struct Z_Construct_UClass_AGroupActor_Statics;
UNREALED_API UClass* Z_Construct_UClass_AGroupActor_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAGroupActor(); \
	friend struct ::Z_Construct_UClass_AGroupActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_AGroupActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGroupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_AGroupActor_NoRegister) \
	DECLARE_SERIALIZER(AGroupActor)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API AGroupActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGroupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, AGroupActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGroupActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGroupActor(AGroupActor&&) = delete; \
	AGroupActor(const AGroupActor&) = delete; \
	UNREALED_API virtual ~AGroupActor();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_19_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_22_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGroupActor;

// ********** End Class AGroupActor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
