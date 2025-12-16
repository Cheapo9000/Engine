// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataValidationChangelist.h"

#ifdef DATAVALIDATION_DataValidationChangelist_generated_h
#error "DataValidationChangelist.generated.h already included, missing '#pragma once' in DataValidationChangelist.h"
#endif
#define DATAVALIDATION_DataValidationChangelist_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataValidationChangelist ************************************************
struct Z_Construct_UClass_UDataValidationChangelist_Statics;
DATAVALIDATION_API UClass* Z_Construct_UClass_UDataValidationChangelist_NoRegister();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataValidationChangelist(); \
	friend struct ::Z_Construct_UClass_UDataValidationChangelist_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAVALIDATION_API UClass* ::Z_Construct_UClass_UDataValidationChangelist_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataValidationChangelist, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataValidation"), Z_Construct_UClass_UDataValidationChangelist_NoRegister) \
	DECLARE_SERIALIZER(UDataValidationChangelist) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataValidationChangelist(UDataValidationChangelist&&) = delete; \
	UDataValidationChangelist(const UDataValidationChangelist&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAVALIDATION_API, UDataValidationChangelist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataValidationChangelist); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataValidationChangelist) \
	DATAVALIDATION_API virtual ~UDataValidationChangelist();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_17_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataValidationChangelist;

// ********** End Class UDataValidationChangelist **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
