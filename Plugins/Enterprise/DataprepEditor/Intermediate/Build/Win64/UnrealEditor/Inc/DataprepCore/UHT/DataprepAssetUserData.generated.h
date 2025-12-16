// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepAssetUserData.h"

#ifdef DATAPREPCORE_DataprepAssetUserData_generated_h
#error "DataprepAssetUserData.generated.h already included, missing '#pragma once' in DataprepAssetUserData.h"
#endif
#define DATAPREPCORE_DataprepAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepAssetUserData ***************************************************
struct Z_Construct_UClass_UDataprepAssetUserData_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetUserData_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepAssetUserData(); \
	friend struct ::Z_Construct_UClass_UDataprepAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UDataprepAssetUserData)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepAssetUserData(UDataprepAssetUserData&&) = delete; \
	UDataprepAssetUserData(const UDataprepAssetUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepAssetUserData) \
	NO_API virtual ~UDataprepAssetUserData();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_14_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepAssetUserData;

// ********** End Class UDataprepAssetUserData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
