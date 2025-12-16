// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProxyTableEditor.h"

#ifdef PROXYTABLEEDITOR_ProxyTableEditor_generated_h
#error "ProxyTableEditor.generated.h already included, missing '#pragma once' in ProxyTableEditor.h"
#endif
#define PROXYTABLEEDITOR_ProxyTableEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UProxyRowDetails *********************************************************
struct Z_Construct_UClass_UProxyRowDetails_Statics;
PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UProxyRowDetails_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProxyRowDetails(); \
	friend struct ::Z_Construct_UClass_UProxyRowDetails_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROXYTABLEEDITOR_API UClass* ::Z_Construct_UClass_UProxyRowDetails_NoRegister(); \
public: \
	DECLARE_CLASS2(UProxyRowDetails, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProxyTableEditor"), Z_Construct_UClass_UProxyRowDetails_NoRegister) \
	DECLARE_SERIALIZER(UProxyRowDetails)


#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProxyRowDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProxyRowDetails(UProxyRowDetails&&) = delete; \
	UProxyRowDetails(const UProxyRowDetails&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProxyRowDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyRowDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyRowDetails) \
	NO_API virtual ~UProxyRowDetails();


#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_22_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProxyRowDetails;

// ********** End Class UProxyRowDetails ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
