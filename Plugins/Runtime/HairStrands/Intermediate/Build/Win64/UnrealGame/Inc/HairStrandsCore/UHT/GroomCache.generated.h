// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomCache.h"

#ifdef HAIRSTRANDSCORE_GroomCache_generated_h
#error "GroomCache.generated.h already included, missing '#pragma once' in GroomCache.h"
#endif
#define HAIRSTRANDSCORE_GroomCache_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGroomCache **************************************************************
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomCache, HAIRSTRANDSCORE_API)


struct Z_Construct_UClass_UGroomCache_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCache_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomCache(); \
	friend struct ::Z_Construct_UClass_UGroomCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UGroomCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UGroomCache_NoRegister) \
	DECLARE_SERIALIZER(UGroomCache) \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_23_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGroomCache*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSCORE_API UGroomCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomCache(UGroomCache&&) = delete; \
	UGroomCache(const UGroomCache&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSCORE_API, UGroomCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomCache) \
	HAIRSTRANDSCORE_API virtual ~UGroomCache();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomCache;

// ********** End Class UGroomCache ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCache_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
