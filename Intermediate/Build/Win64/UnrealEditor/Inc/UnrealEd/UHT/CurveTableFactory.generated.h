// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CurveTableFactory.h"

#ifdef UNREALED_CurveTableFactory_generated_h
#error "CurveTableFactory.generated.h already included, missing '#pragma once' in CurveTableFactory.h"
#endif
#define UNREALED_CurveTableFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCurveTableFactory *******************************************************
struct Z_Construct_UClass_UCurveTableFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCurveTableFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCurveTableFactory(); \
	friend struct ::Z_Construct_UClass_UCurveTableFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCurveTableFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveTableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCurveTableFactory_NoRegister) \
	DECLARE_SERIALIZER(UCurveTableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCurveTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCurveTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveTableFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveTableFactory(UCurveTableFactory&&) = delete; \
	UCurveTableFactory(const UCurveTableFactory&) = delete; \
	UNREALED_API virtual ~UCurveTableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveTableFactory;

// ********** End Class UCurveTableFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveTableFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
