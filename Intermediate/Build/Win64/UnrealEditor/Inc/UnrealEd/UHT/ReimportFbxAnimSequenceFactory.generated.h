// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportFbxAnimSequenceFactory.h"

#ifdef UNREALED_ReimportFbxAnimSequenceFactory_generated_h
#error "ReimportFbxAnimSequenceFactory.generated.h already included, missing '#pragma once' in ReimportFbxAnimSequenceFactory.h"
#endif
#define UNREALED_ReimportFbxAnimSequenceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportFbxAnimSequenceFactory ******************************************
struct Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UReimportFbxAnimSequenceFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUReimportFbxAnimSequenceFactory(); \
	friend struct ::Z_Construct_UClass_UReimportFbxAnimSequenceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UReimportFbxAnimSequenceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportFbxAnimSequenceFactory, UFbxFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UReimportFbxAnimSequenceFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportFbxAnimSequenceFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportFbxAnimSequenceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportFbxAnimSequenceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportFbxAnimSequenceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportFbxAnimSequenceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportFbxAnimSequenceFactory(UReimportFbxAnimSequenceFactory&&) = delete; \
	UReimportFbxAnimSequenceFactory(const UReimportFbxAnimSequenceFactory&) = delete; \
	NO_API virtual ~UReimportFbxAnimSequenceFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportFbxAnimSequenceFactory;

// ********** End Class UReimportFbxAnimSequenceFactory ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_ReimportFbxAnimSequenceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
