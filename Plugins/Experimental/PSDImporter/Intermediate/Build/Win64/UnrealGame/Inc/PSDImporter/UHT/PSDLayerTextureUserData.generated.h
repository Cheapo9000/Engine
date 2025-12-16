// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PSDLayerTextureUserData.h"

#ifdef PSDIMPORTER_PSDLayerTextureUserData_generated_h
#error "PSDLayerTextureUserData.generated.h already included, missing '#pragma once' in PSDLayerTextureUserData.h"
#endif
#define PSDIMPORTER_PSDLayerTextureUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPSDLayerTextureUserData *************************************************
struct Z_Construct_UClass_UPSDLayerTextureUserData_Statics;
PSDIMPORTER_API UClass* Z_Construct_UClass_UPSDLayerTextureUserData_NoRegister();

#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDLayerTextureUserData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPSDLayerTextureUserData(); \
	friend struct ::Z_Construct_UClass_UPSDLayerTextureUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PSDIMPORTER_API UClass* ::Z_Construct_UClass_UPSDLayerTextureUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPSDLayerTextureUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PSDImporter"), Z_Construct_UClass_UPSDLayerTextureUserData_NoRegister) \
	DECLARE_SERIALIZER(UPSDLayerTextureUserData)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDLayerTextureUserData_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PSDIMPORTER_API UPSDLayerTextureUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPSDLayerTextureUserData(UPSDLayerTextureUserData&&) = delete; \
	UPSDLayerTextureUserData(const UPSDLayerTextureUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PSDIMPORTER_API, UPSDLayerTextureUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPSDLayerTextureUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPSDLayerTextureUserData) \
	PSDIMPORTER_API virtual ~UPSDLayerTextureUserData();


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDLayerTextureUserData_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDLayerTextureUserData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDLayerTextureUserData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDLayerTextureUserData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPSDLayerTextureUserData;

// ********** End Class UPSDLayerTextureUserData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDLayerTextureUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
