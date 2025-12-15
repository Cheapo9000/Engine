// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DumpMaterialExpressionsCommandlet.h"

#ifdef UNREALED_DumpMaterialExpressionsCommandlet_generated_h
#error "DumpMaterialExpressionsCommandlet.generated.h already included, missing '#pragma once' in DumpMaterialExpressionsCommandlet.h"
#endif
#define UNREALED_DumpMaterialExpressionsCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDumpMaterialExpressionsCommandlet ***************************************
struct Z_Construct_UClass_UDumpMaterialExpressionsCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDumpMaterialExpressionsCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionsCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDumpMaterialExpressionsCommandlet(); \
	friend struct ::Z_Construct_UClass_UDumpMaterialExpressionsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDumpMaterialExpressionsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDumpMaterialExpressionsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDumpMaterialExpressionsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDumpMaterialExpressionsCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionsCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDumpMaterialExpressionsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDumpMaterialExpressionsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDumpMaterialExpressionsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDumpMaterialExpressionsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDumpMaterialExpressionsCommandlet(UDumpMaterialExpressionsCommandlet&&) = delete; \
	UDumpMaterialExpressionsCommandlet(const UDumpMaterialExpressionsCommandlet&) = delete; \
	NO_API virtual ~UDumpMaterialExpressionsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionsCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionsCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionsCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionsCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDumpMaterialExpressionsCommandlet;

// ********** End Class UDumpMaterialExpressionsCommandlet *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionsCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
