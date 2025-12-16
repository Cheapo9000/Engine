// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomBlueprintLibrary.h"

#ifdef HAIRSTRANDSCORE_GroomBlueprintLibrary_generated_h
#error "GroomBlueprintLibrary.generated.h already included, missing '#pragma once' in GroomBlueprintLibrary.h"
#endif
#define HAIRSTRANDSCORE_GroomBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCache;
class UGroomAsset;
class UGroomBindingAsset;
class UObject;
class USkeletalMesh;

// ********** Begin Class UGroomBlueprintLibrary ***************************************************
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsHairStrandsSupportedInWorld); \
	DECLARE_FUNCTION(execCreateNewGeometryCacheGroomBindingAsset); \
	DECLARE_FUNCTION(execCreateNewGeometryCacheGroomBindingAssetWithPath); \
	DECLARE_FUNCTION(execCreateNewGroomBindingAsset); \
	DECLARE_FUNCTION(execCreateNewGroomBindingAssetWithPath);


struct Z_Construct_UClass_UGroomBlueprintLibrary_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UGroomBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGroomBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UGroomBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomBlueprintLibrary(UGroomBlueprintLibrary&&) = delete; \
	UGroomBlueprintLibrary(const UGroomBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomBlueprintLibrary) \
	HAIRSTRANDSCORE_API virtual ~UGroomBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomBlueprintLibrary;

// ********** End Class UGroomBlueprintLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
