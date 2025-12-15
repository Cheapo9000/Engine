// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ExternalActorsCommandlet.h"

#ifdef UNREALED_ExternalActorsCommandlet_generated_h
#error "ExternalActorsCommandlet.generated.h already included, missing '#pragma once' in ExternalActorsCommandlet.h"
#endif
#define UNREALED_ExternalActorsCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExternalActorsCommandlet ************************************************
struct Z_Construct_UClass_UExternalActorsCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UExternalActorsCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUExternalActorsCommandlet(); \
	friend struct ::Z_Construct_UClass_UExternalActorsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UExternalActorsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UExternalActorsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UExternalActorsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UExternalActorsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UExternalActorsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalActorsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UExternalActorsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalActorsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExternalActorsCommandlet(UExternalActorsCommandlet&&) = delete; \
	UExternalActorsCommandlet(const UExternalActorsCommandlet&) = delete; \
	UNREALED_API virtual ~UExternalActorsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExternalActorsCommandlet;

// ********** End Class UExternalActorsCommandlet **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
