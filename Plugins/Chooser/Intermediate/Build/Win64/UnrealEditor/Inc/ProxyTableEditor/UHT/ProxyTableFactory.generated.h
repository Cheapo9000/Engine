// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProxyTableFactory.h"

#ifdef PROXYTABLEEDITOR_ProxyTableFactory_generated_h
#error "ProxyTableFactory.generated.h already included, missing '#pragma once' in ProxyTableFactory.h"
#endif
#define PROXYTABLEEDITOR_ProxyTableFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProxyTableFactory *******************************************************
struct Z_Construct_UClass_UProxyTableFactory_Statics;
PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UProxyTableFactory_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyTableFactory(); \
	friend struct ::Z_Construct_UClass_UProxyTableFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROXYTABLEEDITOR_API UClass* ::Z_Construct_UClass_UProxyTableFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyTableFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProxyTableEditor"), Z_Construct_UClass_UProxyTableFactory_NoRegister) \
	DECLARE_SERIALIZER(UProxyTableFactory)


#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyTableFactory(UProxyTableFactory&&) = delete; \
	UProxyTableFactory(const UProxyTableFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROXYTABLEEDITOR_API, UProxyTableFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyTableFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProxyTableFactory) \
	PROXYTABLEEDITOR_API virtual ~UProxyTableFactory();


#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableFactory_h_9_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyTableFactory;

// ********** End Class UProxyTableFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
