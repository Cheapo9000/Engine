// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DumpMaterialShaderTypes.h"

#ifdef UNREALED_DumpMaterialShaderTypes_generated_h
#error "DumpMaterialShaderTypes.generated.h already included, missing '#pragma once' in DumpMaterialShaderTypes.h"
#endif
#define UNREALED_DumpMaterialShaderTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDumpMaterialShaderTypesCommandlet ***************************************
struct Z_Construct_UClass_UDumpMaterialShaderTypesCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDumpMaterialShaderTypesCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDumpMaterialShaderTypesCommandlet(); \
	friend struct ::Z_Construct_UClass_UDumpMaterialShaderTypesCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDumpMaterialShaderTypesCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDumpMaterialShaderTypesCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDumpMaterialShaderTypesCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDumpMaterialShaderTypesCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDumpMaterialShaderTypesCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDumpMaterialShaderTypesCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDumpMaterialShaderTypesCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDumpMaterialShaderTypesCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDumpMaterialShaderTypesCommandlet(UDumpMaterialShaderTypesCommandlet&&) = delete; \
	UDumpMaterialShaderTypesCommandlet(const UDumpMaterialShaderTypesCommandlet&) = delete; \
	NO_API virtual ~UDumpMaterialShaderTypesCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDumpMaterialShaderTypesCommandlet;

// ********** End Class UDumpMaterialShaderTypesCommandlet *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
