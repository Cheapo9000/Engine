// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ShaderCodeLibraryToolsCommandlet.h"

#ifdef UNREALED_ShaderCodeLibraryToolsCommandlet_generated_h
#error "ShaderCodeLibraryToolsCommandlet.generated.h already included, missing '#pragma once' in ShaderCodeLibraryToolsCommandlet.h"
#endif
#define UNREALED_ShaderCodeLibraryToolsCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UShaderCodeLibraryToolsCommandlet ****************************************
struct Z_Construct_UClass_UShaderCodeLibraryToolsCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UShaderCodeLibraryToolsCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderCodeLibraryToolsCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUShaderCodeLibraryToolsCommandlet(); \
	friend struct ::Z_Construct_UClass_UShaderCodeLibraryToolsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UShaderCodeLibraryToolsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UShaderCodeLibraryToolsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UShaderCodeLibraryToolsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UShaderCodeLibraryToolsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderCodeLibraryToolsCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShaderCodeLibraryToolsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShaderCodeLibraryToolsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShaderCodeLibraryToolsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShaderCodeLibraryToolsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShaderCodeLibraryToolsCommandlet(UShaderCodeLibraryToolsCommandlet&&) = delete; \
	UShaderCodeLibraryToolsCommandlet(const UShaderCodeLibraryToolsCommandlet&) = delete; \
	NO_API virtual ~UShaderCodeLibraryToolsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderCodeLibraryToolsCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderCodeLibraryToolsCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderCodeLibraryToolsCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderCodeLibraryToolsCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShaderCodeLibraryToolsCommandlet;

// ********** End Class UShaderCodeLibraryToolsCommandlet ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ShaderCodeLibraryToolsCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
