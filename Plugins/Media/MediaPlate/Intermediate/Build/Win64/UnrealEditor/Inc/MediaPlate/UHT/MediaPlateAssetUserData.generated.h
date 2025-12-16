// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlateAssetUserData.h"

#ifdef MEDIAPLATE_MediaPlateAssetUserData_generated_h
#error "MediaPlateAssetUserData.generated.h already included, missing '#pragma once' in MediaPlateAssetUserData.h"
#endif
#define MEDIAPLATE_MediaPlateAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaPlateAssetUserData *************************************************
struct Z_Construct_UClass_UMediaPlateAssetUserData_Statics;
MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateAssetUserData_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlateAssetUserData(); \
	friend struct ::Z_Construct_UClass_UMediaPlateAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLATE_API UClass* ::Z_Construct_UClass_UMediaPlateAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlateAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaPlate"), Z_Construct_UClass_UMediaPlateAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlateAssetUserData)


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlateAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlateAssetUserData(UMediaPlateAssetUserData&&) = delete; \
	UMediaPlateAssetUserData(const UMediaPlateAssetUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlateAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlateAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlateAssetUserData) \
	NO_API virtual ~UMediaPlateAssetUserData();


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_13_PROLOG
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlateAssetUserData;

// ********** End Class UMediaPlateAssetUserData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
