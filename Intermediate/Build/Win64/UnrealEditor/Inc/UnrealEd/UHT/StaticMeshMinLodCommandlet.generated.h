// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/StaticMeshMinLodCommandlet.h"

#ifdef UNREALED_StaticMeshMinLodCommandlet_generated_h
#error "StaticMeshMinLodCommandlet.generated.h already included, missing '#pragma once' in StaticMeshMinLodCommandlet.h"
#endif
#define UNREALED_StaticMeshMinLodCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStaticMeshMinLodCommandlet **********************************************
struct Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UStaticMeshMinLodCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshMinLodCommandlet(); \
	friend struct ::Z_Construct_UClass_UStaticMeshMinLodCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UStaticMeshMinLodCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshMinLodCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UStaticMeshMinLodCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshMinLodCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshMinLodCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshMinLodCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshMinLodCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshMinLodCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshMinLodCommandlet(UStaticMeshMinLodCommandlet&&) = delete; \
	UStaticMeshMinLodCommandlet(const UStaticMeshMinLodCommandlet&) = delete; \
	NO_API virtual ~UStaticMeshMinLodCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshMinLodCommandlet;

// ********** End Class UStaticMeshMinLodCommandlet ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_StaticMeshMinLodCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
