// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ReplaceActorCommandlet.h"

#ifdef UNREALED_ReplaceActorCommandlet_generated_h
#error "ReplaceActorCommandlet.generated.h already included, missing '#pragma once' in ReplaceActorCommandlet.h"
#endif
#define UNREALED_ReplaceActorCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReplaceActorCommandlet **************************************************
struct Z_Construct_UClass_UReplaceActorCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UReplaceActorCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUReplaceActorCommandlet(); \
	friend struct ::Z_Construct_UClass_UReplaceActorCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UReplaceActorCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplaceActorCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UReplaceActorCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UReplaceActorCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplaceActorCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplaceActorCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplaceActorCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplaceActorCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplaceActorCommandlet(UReplaceActorCommandlet&&) = delete; \
	UReplaceActorCommandlet(const UReplaceActorCommandlet&) = delete; \
	NO_API virtual ~UReplaceActorCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplaceActorCommandlet;

// ********** End Class UReplaceActorCommandlet ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
