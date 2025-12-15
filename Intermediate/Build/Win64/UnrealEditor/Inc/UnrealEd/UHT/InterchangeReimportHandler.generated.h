// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/InterchangeReimportHandler.h"

#ifdef UNREALED_InterchangeReimportHandler_generated_h
#error "InterchangeReimportHandler.generated.h already included, missing '#pragma once' in InterchangeReimportHandler.h"
#endif
#define UNREALED_InterchangeReimportHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeReimportHandler **********************************************
struct Z_Construct_UClass_UInterchangeReimportHandler_Statics;
UNREALED_API UClass* Z_Construct_UClass_UInterchangeReimportHandler_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeReimportHandler(); \
	friend struct ::Z_Construct_UClass_UInterchangeReimportHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UInterchangeReimportHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeReimportHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UInterchangeReimportHandler_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeReimportHandler)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UInterchangeReimportHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeReimportHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UInterchangeReimportHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeReimportHandler); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeReimportHandler(UInterchangeReimportHandler&&) = delete; \
	UInterchangeReimportHandler(const UInterchangeReimportHandler&) = delete; \
	UNREALED_API virtual ~UInterchangeReimportHandler();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeReimportHandler;

// ********** End Class UInterchangeReimportHandler ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
