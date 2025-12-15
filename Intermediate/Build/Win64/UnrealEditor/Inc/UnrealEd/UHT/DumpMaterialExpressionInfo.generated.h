// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DumpMaterialExpressionInfo.h"

#ifdef UNREALED_DumpMaterialExpressionInfo_generated_h
#error "DumpMaterialExpressionInfo.generated.h already included, missing '#pragma once' in DumpMaterialExpressionInfo.h"
#endif
#define UNREALED_DumpMaterialExpressionInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDumpMaterialExpressionInfoCommandlet ************************************
struct Z_Construct_UClass_UDumpMaterialExpressionInfoCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UDumpMaterialExpressionInfoCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionInfo_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUDumpMaterialExpressionInfoCommandlet(); \
	friend struct ::Z_Construct_UClass_UDumpMaterialExpressionInfoCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UDumpMaterialExpressionInfoCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDumpMaterialExpressionInfoCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UDumpMaterialExpressionInfoCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UDumpMaterialExpressionInfoCommandlet) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionInfo_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDumpMaterialExpressionInfoCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDumpMaterialExpressionInfoCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDumpMaterialExpressionInfoCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDumpMaterialExpressionInfoCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDumpMaterialExpressionInfoCommandlet(UDumpMaterialExpressionInfoCommandlet&&) = delete; \
	UDumpMaterialExpressionInfoCommandlet(const UDumpMaterialExpressionInfoCommandlet&) = delete; \
	NO_API virtual ~UDumpMaterialExpressionInfoCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionInfo_h_50_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionInfo_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionInfo_h_53_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionInfo_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDumpMaterialExpressionInfoCommandlet;

// ********** End Class UDumpMaterialExpressionInfoCommandlet **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialExpressionInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
