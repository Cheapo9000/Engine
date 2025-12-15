// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuWidgetCollectionContext.h"

#ifdef TOOLMENUS_ToolMenuWidgetCollectionContext_generated_h
#error "ToolMenuWidgetCollectionContext.generated.h already included, missing '#pragma once' in ToolMenuWidgetCollectionContext.h"
#endif
#define TOOLMENUS_ToolMenuWidgetCollectionContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToolMenuWidgetCollectionContext *****************************************
struct Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuWidgetCollectionContext_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuWidgetCollectionContext(); \
	friend struct ::Z_Construct_UClass_UToolMenuWidgetCollectionContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenuWidgetCollectionContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuWidgetCollectionContext, UToolMenuContextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenuWidgetCollectionContext_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuWidgetCollectionContext)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLMENUS_API UToolMenuWidgetCollectionContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuWidgetCollectionContext(UToolMenuWidgetCollectionContext&&) = delete; \
	UToolMenuWidgetCollectionContext(const UToolMenuWidgetCollectionContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLMENUS_API, UToolMenuWidgetCollectionContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuWidgetCollectionContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuWidgetCollectionContext) \
	TOOLMENUS_API virtual ~UToolMenuWidgetCollectionContext();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_15_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuWidgetCollectionContext;

// ********** End Class UToolMenuWidgetCollectionContext *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuWidgetCollectionContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
