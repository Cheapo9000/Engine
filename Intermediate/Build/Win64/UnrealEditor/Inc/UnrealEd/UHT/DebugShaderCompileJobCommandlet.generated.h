// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DebugShaderCompileJobCommandlet.h"

#ifdef UNREALED_DebugShaderCompileJobCommandlet_generated_h
#error "DebugShaderCompileJobCommandlet.generated.h already included, missing '#pragma once' in DebugShaderCompileJobCommandlet.h"
#endif
#define UNREALED_DebugShaderCompileJobCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDebugShaderCompileJobCommandlet *****************************************
struct Z_Construct_UClass_UDebugShaderCompileJobCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDebugShaderCompileJobCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DebugShaderCompileJobCommandlet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDebugShaderCompileJobCommandlet(); \
	friend struct ::Z_Construct_UClass_UDebugShaderCompileJobCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDebugShaderCompileJobCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDebugShaderCompileJobCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDebugShaderCompileJobCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDebugShaderCompileJobCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DebugShaderCompileJobCommandlet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDebugShaderCompileJobCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugShaderCompileJobCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugShaderCompileJobCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugShaderCompileJobCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDebugShaderCompileJobCommandlet(UDebugShaderCompileJobCommandlet&&) = delete; \
	UDebugShaderCompileJobCommandlet(const UDebugShaderCompileJobCommandlet&) = delete; \
	NO_API virtual ~UDebugShaderCompileJobCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DebugShaderCompileJobCommandlet_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DebugShaderCompileJobCommandlet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DebugShaderCompileJobCommandlet_h_12_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DebugShaderCompileJobCommandlet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDebugShaderCompileJobCommandlet;

// ********** End Class UDebugShaderCompileJobCommandlet *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DebugShaderCompileJobCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
