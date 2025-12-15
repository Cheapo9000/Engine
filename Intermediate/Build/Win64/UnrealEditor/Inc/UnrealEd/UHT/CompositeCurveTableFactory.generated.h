// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CompositeCurveTableFactory.h"

#ifdef UNREALED_CompositeCurveTableFactory_generated_h
#error "CompositeCurveTableFactory.generated.h already included, missing '#pragma once' in CompositeCurveTableFactory.h"
#endif
#define UNREALED_CompositeCurveTableFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeCurveTableFactory **********************************************
struct Z_Construct_UClass_UCompositeCurveTableFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCompositeCurveTableFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeCurveTableFactory(); \
	friend struct ::Z_Construct_UClass_UCompositeCurveTableFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCompositeCurveTableFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeCurveTableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCompositeCurveTableFactory_NoRegister) \
	DECLARE_SERIALIZER(UCompositeCurveTableFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCompositeCurveTableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeCurveTableFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCompositeCurveTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCurveTableFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeCurveTableFactory(UCompositeCurveTableFactory&&) = delete; \
	UCompositeCurveTableFactory(const UCompositeCurveTableFactory&) = delete; \
	UNREALED_API virtual ~UCompositeCurveTableFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_8_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_11_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeCurveTableFactory;

// ********** End Class UCompositeCurveTableFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CompositeCurveTableFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
