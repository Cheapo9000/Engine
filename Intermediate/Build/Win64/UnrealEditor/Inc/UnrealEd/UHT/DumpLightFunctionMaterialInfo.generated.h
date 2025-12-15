// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DumpLightFunctionMaterialInfo.h"

#ifdef UNREALED_DumpLightFunctionMaterialInfo_generated_h
#error "DumpLightFunctionMaterialInfo.generated.h already included, missing '#pragma once' in DumpLightFunctionMaterialInfo.h"
#endif
#define UNREALED_DumpLightFunctionMaterialInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDumpLightFunctionMaterialInfoCommandlet *********************************
struct Z_Construct_UClass_UDumpLightFunctionMaterialInfoCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDumpLightFunctionMaterialInfoCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpLightFunctionMaterialInfo_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDumpLightFunctionMaterialInfoCommandlet(); \
	friend struct ::Z_Construct_UClass_UDumpLightFunctionMaterialInfoCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDumpLightFunctionMaterialInfoCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDumpLightFunctionMaterialInfoCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDumpLightFunctionMaterialInfoCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDumpLightFunctionMaterialInfoCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpLightFunctionMaterialInfo_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDumpLightFunctionMaterialInfoCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDumpLightFunctionMaterialInfoCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDumpLightFunctionMaterialInfoCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDumpLightFunctionMaterialInfoCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDumpLightFunctionMaterialInfoCommandlet(UDumpLightFunctionMaterialInfoCommandlet&&) = delete; \
	UDumpLightFunctionMaterialInfoCommandlet(const UDumpLightFunctionMaterialInfoCommandlet&) = delete; \
	NO_API virtual ~UDumpLightFunctionMaterialInfoCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpLightFunctionMaterialInfo_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpLightFunctionMaterialInfo_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpLightFunctionMaterialInfo_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpLightFunctionMaterialInfo_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDumpLightFunctionMaterialInfoCommandlet;

// ********** End Class UDumpLightFunctionMaterialInfoCommandlet ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpLightFunctionMaterialInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
