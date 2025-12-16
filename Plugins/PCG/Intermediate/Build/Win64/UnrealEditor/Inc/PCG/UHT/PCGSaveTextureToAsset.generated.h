// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSaveTextureToAsset.h"

#ifdef PCG_PCGSaveTextureToAsset_generated_h
#error "PCGSaveTextureToAsset.generated.h already included, missing '#pragma once' in PCGSaveTextureToAsset.h"
#endif
#define PCG_PCGSaveTextureToAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSaveTextureToAssetSettings *******************************************
struct Z_Construct_UClass_UPCGSaveTextureToAssetSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSaveTextureToAssetSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSaveTextureToAsset_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSaveTextureToAssetSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSaveTextureToAssetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSaveTextureToAssetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSaveTextureToAssetSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSaveTextureToAssetSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSaveTextureToAssetSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSaveTextureToAsset_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSaveTextureToAssetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSaveTextureToAssetSettings(UPCGSaveTextureToAssetSettings&&) = delete; \
	UPCGSaveTextureToAssetSettings(const UPCGSaveTextureToAssetSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSaveTextureToAssetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSaveTextureToAssetSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSaveTextureToAssetSettings) \
	PCG_API virtual ~UPCGSaveTextureToAssetSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSaveTextureToAsset_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSaveTextureToAsset_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSaveTextureToAsset_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSaveTextureToAsset_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSaveTextureToAssetSettings;

// ********** End Class UPCGSaveTextureToAssetSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSaveTextureToAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
