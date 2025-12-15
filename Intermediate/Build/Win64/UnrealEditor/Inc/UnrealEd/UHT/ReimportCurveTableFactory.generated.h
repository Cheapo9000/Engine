// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportCurveTableFactory.h"

#ifdef UNREALED_ReimportCurveTableFactory_generated_h
#error "ReimportCurveTableFactory.generated.h already included, missing '#pragma once' in ReimportCurveTableFactory.h"
#endif
#define UNREALED_ReimportCurveTableFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportCurveTableFactory ***********************************************
struct Z_Construct_UClass_UReimportCurveTableFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UReimportCurveTableFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveTableFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUReimportCurveTableFactory(); \
	friend struct ::Z_Construct_UClass_UReimportCurveTableFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UReimportCurveTableFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportCurveTableFactory, UCSVImportFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UReimportCurveTableFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportCurveTableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveTableFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportCurveTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportCurveTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportCurveTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportCurveTableFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportCurveTableFactory(UReimportCurveTableFactory&&) = delete; \
	UReimportCurveTableFactory(const UReimportCurveTableFactory&) = delete; \
	NO_API virtual ~UReimportCurveTableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveTableFactory_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveTableFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveTableFactory_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveTableFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportCurveTableFactory;

// ********** End Class UReimportCurveTableFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportCurveTableFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
