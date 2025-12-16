// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithAssetUserData.h"

#ifdef DATASMITHCONTENT_DatasmithAssetUserData_generated_h
#error "DatasmithAssetUserData.generated.h already included, missing '#pragma once' in DatasmithAssetUserData.h"
#endif
#define DATASMITHCONTENT_DatasmithAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithAssetUserData **************************************************
struct Z_Construct_UClass_UDatasmithAssetUserData_Statics;
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetUserData_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithAssetUserData(); \
	friend struct ::Z_Construct_UClass_UDatasmithAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHCONTENT_API UClass* ::Z_Construct_UClass_UDatasmithAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithContent"), Z_Construct_UClass_UDatasmithAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithAssetUserData)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHCONTENT_API UDatasmithAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithAssetUserData(UDatasmithAssetUserData&&) = delete; \
	UDatasmithAssetUserData(const UDatasmithAssetUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, UDatasmithAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithAssetUserData) \
	DATASMITHCONTENT_API virtual ~UDatasmithAssetUserData();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_15_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithAssetUserData;

// ********** End Class UDatasmithAssetUserData ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
