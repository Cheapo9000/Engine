// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataRegistrySource.h"

#ifdef DATAREGISTRY_DataRegistrySource_generated_h
#error "DataRegistrySource.generated.h already included, missing '#pragma once' in DataRegistrySource.h"
#endif
#define DATAREGISTRY_DataRegistrySource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataRegistrySource ******************************************************
struct Z_Construct_UClass_UDataRegistrySource_Statics;
DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource_NoRegister();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataRegistrySource(); \
	friend struct ::Z_Construct_UClass_UDataRegistrySource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAREGISTRY_API UClass* ::Z_Construct_UClass_UDataRegistrySource_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataRegistrySource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataRegistry"), Z_Construct_UClass_UDataRegistrySource_NoRegister) \
	DECLARE_SERIALIZER(UDataRegistrySource) \
	DECLARE_WITHIN(UDataRegistry)


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAREGISTRY_API UDataRegistrySource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataRegistrySource(UDataRegistrySource&&) = delete; \
	UDataRegistrySource(const UDataRegistrySource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAREGISTRY_API, UDataRegistrySource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataRegistrySource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataRegistrySource) \
	DATAREGISTRY_API virtual ~UDataRegistrySource();


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataRegistrySource;

// ********** End Class UDataRegistrySource ********************************************************

// ********** Begin Class UMetaDataRegistrySource **************************************************
struct Z_Construct_UClass_UMetaDataRegistrySource_Statics;
DATAREGISTRY_API UClass* Z_Construct_UClass_UMetaDataRegistrySource_NoRegister();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaDataRegistrySource(); \
	friend struct ::Z_Construct_UClass_UMetaDataRegistrySource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAREGISTRY_API UClass* ::Z_Construct_UClass_UMetaDataRegistrySource_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaDataRegistrySource, UDataRegistrySource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataRegistry"), Z_Construct_UClass_UMetaDataRegistrySource_NoRegister) \
	DECLARE_SERIALIZER(UMetaDataRegistrySource)


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_140_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAREGISTRY_API UMetaDataRegistrySource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaDataRegistrySource(UMetaDataRegistrySource&&) = delete; \
	UMetaDataRegistrySource(const UMetaDataRegistrySource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAREGISTRY_API, UMetaDataRegistrySource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaDataRegistrySource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaDataRegistrySource) \
	DATAREGISTRY_API virtual ~UMetaDataRegistrySource();


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_137_PROLOG
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_140_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaDataRegistrySource;

// ********** End Class UMetaDataRegistrySource ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h

// ********** Begin Enum EMetaDataRegistrySourceAssetUsage *****************************************
#define FOREACH_ENUM_EMETADATAREGISTRYSOURCEASSETUSAGE(op) \
	op(EMetaDataRegistrySourceAssetUsage::NoAssets) \
	op(EMetaDataRegistrySourceAssetUsage::SearchAssets) \
	op(EMetaDataRegistrySourceAssetUsage::RegisterAssets) \
	op(EMetaDataRegistrySourceAssetUsage::SearchAndRegisterAssets) 

enum class EMetaDataRegistrySourceAssetUsage : uint8;
template<> struct TIsUEnumClass<EMetaDataRegistrySourceAssetUsage> { enum { Value = true }; };
template<> DATAREGISTRY_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaDataRegistrySourceAssetUsage>();
// ********** End Enum EMetaDataRegistrySourceAssetUsage *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
