// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeTextureHash.h"

#ifdef LANDSCAPE_LandscapeTextureHash_generated_h
#error "LandscapeTextureHash.generated.h already included, missing '#pragma once' in LandscapeTextureHash.h"
#endif
#define LANDSCAPE_LandscapeTextureHash_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeTextureHash ****************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeTextureHash, LANDSCAPE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h_30_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_ULandscapeTextureHash_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeTextureHash_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeTextureHash(); \
	friend struct ::Z_Construct_UClass_ULandscapeTextureHash_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeTextureHash_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeTextureHash, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeTextureHash_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeTextureHash) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h_30_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UTexture2D)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeTextureHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeTextureHash(ULandscapeTextureHash&&) = delete; \
	ULandscapeTextureHash(const ULandscapeTextureHash&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeTextureHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeTextureHash); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeTextureHash) \
	LANDSCAPE_API virtual ~ULandscapeTextureHash();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h_27_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeTextureHash;

// ********** End Class ULandscapeTextureHash ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureHash_h

// ********** Begin Enum ELandscapeTextureType *****************************************************
#define FOREACH_ENUM_ELANDSCAPETEXTURETYPE(op) \
	op(ELandscapeTextureType::Unknown) \
	op(ELandscapeTextureType::Heightmap) \
	op(ELandscapeTextureType::Weightmap) 

enum class ELandscapeTextureType : uint8;
template<> struct TIsUEnumClass<ELandscapeTextureType> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeTextureType>();
// ********** End Enum ELandscapeTextureType *******************************************************

// ********** Begin Enum ELandscapeTextureUsage ****************************************************
#define FOREACH_ENUM_ELANDSCAPETEXTUREUSAGE(op) \
	op(ELandscapeTextureUsage::Unknown) \
	op(ELandscapeTextureUsage::EditLayerData) \
	op(ELandscapeTextureUsage::FinalData) 

enum class ELandscapeTextureUsage : uint8;
template<> struct TIsUEnumClass<ELandscapeTextureUsage> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeTextureUsage>();
// ********** End Enum ELandscapeTextureUsage ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
