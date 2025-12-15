// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedAssetImportData.h"

#ifdef UNREALED_AutomatedAssetImportData_generated_h
#error "AutomatedAssetImportData.generated.h already included, missing '#pragma once' in AutomatedAssetImportData.h"
#endif
#define UNREALED_AutomatedAssetImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutomatedAssetImportData ************************************************
struct Z_Construct_UClass_UAutomatedAssetImportData_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedAssetImportData(); \
	friend struct ::Z_Construct_UClass_UAutomatedAssetImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAutomatedAssetImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedAssetImportData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAutomatedAssetImportData_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedAssetImportData)


#define FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedAssetImportData(UAutomatedAssetImportData&&) = delete; \
	UAutomatedAssetImportData(const UAutomatedAssetImportData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAutomatedAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedAssetImportData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutomatedAssetImportData) \
	UNREALED_API virtual ~UAutomatedAssetImportData();


#define FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_25_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedAssetImportData;

// ********** End Class UAutomatedAssetImportData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
