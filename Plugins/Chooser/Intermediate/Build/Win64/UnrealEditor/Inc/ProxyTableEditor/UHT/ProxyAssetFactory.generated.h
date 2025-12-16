// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProxyAssetFactory.h"

#ifdef PROXYTABLEEDITOR_ProxyAssetFactory_generated_h
#error "ProxyAssetFactory.generated.h already included, missing '#pragma once' in ProxyAssetFactory.h"
#endif
#define PROXYTABLEEDITOR_ProxyAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProxyAssetFactory *******************************************************
struct Z_Construct_UClass_UProxyAssetFactory_Statics;
PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UProxyAssetFactory_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyAssetFactory(); \
	friend struct ::Z_Construct_UClass_UProxyAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROXYTABLEEDITOR_API UClass* ::Z_Construct_UClass_UProxyAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProxyTableEditor"), Z_Construct_UClass_UProxyAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UProxyAssetFactory)


#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyAssetFactory(UProxyAssetFactory&&) = delete; \
	UProxyAssetFactory(const UProxyAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROXYTABLEEDITOR_API, UProxyAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyAssetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProxyAssetFactory) \
	PROXYTABLEEDITOR_API virtual ~UProxyAssetFactory();


#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_9_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyAssetFactory;

// ********** End Class UProxyAssetFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
