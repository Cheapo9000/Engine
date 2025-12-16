// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataValidationTestActor.h"

#ifdef DATAVALIDATION_DataValidationTestActor_generated_h
#error "DataValidationTestActor.generated.h already included, missing '#pragma once' in DataValidationTestActor.h"
#endif
#define DATAVALIDATION_DataValidationTestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADataValidationTestActor *************************************************
struct Z_Construct_UClass_ADataValidationTestActor_Statics;
DATAVALIDATION_API UClass* Z_Construct_UClass_ADataValidationTestActor_NoRegister();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_DataValidationTestActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADataValidationTestActor(); \
	friend struct ::Z_Construct_UClass_ADataValidationTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAVALIDATION_API UClass* ::Z_Construct_UClass_ADataValidationTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADataValidationTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), Z_Construct_UClass_ADataValidationTestActor_NoRegister) \
	DECLARE_SERIALIZER(ADataValidationTestActor)


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_DataValidationTestActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADataValidationTestActor(ADataValidationTestActor&&) = delete; \
	ADataValidationTestActor(const ADataValidationTestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADataValidationTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADataValidationTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADataValidationTestActor) \
	NO_API virtual ~ADataValidationTestActor();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_DataValidationTestActor_h_11_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_DataValidationTestActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_DataValidationTestActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_DataValidationTestActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADataValidationTestActor;

// ********** End Class ADataValidationTestActor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_DataValidationTestActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
