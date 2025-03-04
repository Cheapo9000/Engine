// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProxyAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROXYTABLE_ProxyAsset_generated_h
#error "ProxyAsset.generated.h already included, missing '#pragma once' in ProxyAsset.h"
#endif
#define PROXYTABLE_ProxyAsset_generated_h

#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UProxyAsset, PROXYTABLE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h_20_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUProxyAsset(); \
	friend struct Z_Construct_UClass_UProxyAsset_Statics; \
public: \
	DECLARE_CLASS(UProxyAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProxyTable"), PROXYTABLE_API) \
	DECLARE_SERIALIZER(UProxyAsset) \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h_20_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UProxyAsset*>(this); }


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROXYTABLE_API UProxyAsset(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROXYTABLE_API, UProxyAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProxyAsset(UProxyAsset&&); \
	UProxyAsset(const UProxyAsset&); \
public: \
	PROXYTABLE_API virtual ~UProxyAsset();


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h_17_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h_20_INCLASS \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROXYTABLE_API UClass* StaticClass<class UProxyAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
