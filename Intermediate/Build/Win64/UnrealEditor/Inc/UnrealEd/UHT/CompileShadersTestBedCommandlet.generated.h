// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/CompileShadersTestBedCommandlet.h"

#ifdef UNREALED_CompileShadersTestBedCommandlet_generated_h
#error "CompileShadersTestBedCommandlet.generated.h already included, missing '#pragma once' in CompileShadersTestBedCommandlet.h"
#endif
#define UNREALED_CompileShadersTestBedCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompileShadersTestBedCommandlet *****************************************
struct Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCompileShadersTestBedCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCompileShadersTestBedCommandlet(); \
	friend struct ::Z_Construct_UClass_UCompileShadersTestBedCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCompileShadersTestBedCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompileShadersTestBedCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCompileShadersTestBedCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCompileShadersTestBedCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompileShadersTestBedCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompileShadersTestBedCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompileShadersTestBedCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompileShadersTestBedCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompileShadersTestBedCommandlet(UCompileShadersTestBedCommandlet&&) = delete; \
	UCompileShadersTestBedCommandlet(const UCompileShadersTestBedCommandlet&) = delete; \
	NO_API virtual ~UCompileShadersTestBedCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_12_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompileShadersTestBedCommandlet;

// ********** End Class UCompileShadersTestBedCommandlet *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CompileShadersTestBedCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
