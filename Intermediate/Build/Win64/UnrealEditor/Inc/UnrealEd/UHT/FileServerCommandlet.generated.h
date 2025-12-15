// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/FileServerCommandlet.h"

#ifdef UNREALED_FileServerCommandlet_generated_h
#error "FileServerCommandlet.generated.h already included, missing '#pragma once' in FileServerCommandlet.h"
#endif
#define UNREALED_FileServerCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFileServerCommandlet ****************************************************
struct Z_Construct_UClass_UFileServerCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFileServerCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFileServerCommandlet(); \
	friend struct ::Z_Construct_UClass_UFileServerCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFileServerCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UFileServerCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFileServerCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UFileServerCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileServerCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileServerCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileServerCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileServerCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFileServerCommandlet(UFileServerCommandlet&&) = delete; \
	UFileServerCommandlet(const UFileServerCommandlet&) = delete; \
	NO_API virtual ~UFileServerCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFileServerCommandlet;

// ********** End Class UFileServerCommandlet ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
