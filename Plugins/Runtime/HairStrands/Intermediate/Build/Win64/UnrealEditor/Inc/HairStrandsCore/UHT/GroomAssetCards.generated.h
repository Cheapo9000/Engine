// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomAssetCards.h"

#ifdef HAIRSTRANDSCORE_GroomAssetCards_generated_h
#error "GroomAssetCards.generated.h already included, missing '#pragma once' in GroomAssetCards.h"
#endif
#define HAIRSTRANDSCORE_GroomAssetCards_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHairGroupCardsInfo ***********************************************
struct Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairGroupCardsInfo_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairGroupCardsInfo;
// ********** End ScriptStruct FHairGroupCardsInfo *************************************************

// ********** Begin ScriptStruct FHairGroupCardsTextures *******************************************
struct Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairGroupCardsTextures_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairGroupCardsTextures;
// ********** End ScriptStruct FHairGroupCardsTextures *********************************************

// ********** Begin Class UHairCardGenerationSettings **********************************************
struct Z_Construct_UClass_UHairCardGenerationSettings_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UHairCardGenerationSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHairCardGenerationSettings(); \
	friend struct ::Z_Construct_UClass_UHairCardGenerationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UHairCardGenerationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHairCardGenerationSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UHairCardGenerationSettings_NoRegister) \
	DECLARE_SERIALIZER(UHairCardGenerationSettings)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UHairCardGenerationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHairCardGenerationSettings(UHairCardGenerationSettings&&) = delete; \
	UHairCardGenerationSettings(const UHairCardGenerationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UHairCardGenerationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHairCardGenerationSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHairCardGenerationSettings) \
	HAIRSTRANDSCORE_API virtual ~UHairCardGenerationSettings();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_98_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHairCardGenerationSettings;

// ********** End Class UHairCardGenerationSettings ************************************************

// ********** Begin ScriptStruct FHairGroupsCardsSourceDescription *********************************
struct Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct();


struct FHairGroupsCardsSourceDescription;
// ********** End ScriptStruct FHairGroupsCardsSourceDescription ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetCards_h

// ********** Begin Enum EHairCardsSourceType ******************************************************
#define FOREACH_ENUM_EHAIRCARDSSOURCETYPE(op) \
	op(EHairCardsSourceType::Procedural) \
	op(EHairCardsSourceType::Imported) 

enum class EHairCardsSourceType : uint8;
template<> struct TIsUEnumClass<EHairCardsSourceType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHairCardsSourceType>();
// ********** End Enum EHairCardsSourceType ********************************************************

// ********** Begin Enum EHairCardsGuideType *******************************************************
#define FOREACH_ENUM_EHAIRCARDSGUIDETYPE(op) \
	op(EHairCardsGuideType::Generated) \
	op(EHairCardsGuideType::GuideBased) 

enum class EHairCardsGuideType : uint8;
template<> struct TIsUEnumClass<EHairCardsGuideType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHairCardsGuideType>();
// ********** End Enum EHairCardsGuideType *********************************************************

// ********** Begin Enum EHairTextureLayout ********************************************************
#define FOREACH_ENUM_EHAIRTEXTURELAYOUT(op) \
	op(EHairTextureLayout::Layout0) \
	op(EHairTextureLayout::Layout1) \
	op(EHairTextureLayout::Layout2) \
	op(EHairTextureLayout::Layout3) 

enum class EHairTextureLayout : uint8;
template<> struct TIsUEnumClass<EHairTextureLayout> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHairTextureLayout>();
// ********** End Enum EHairTextureLayout **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
