// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuContext.h"

#ifdef TOOLMENUS_ToolMenuContext_generated_h
#error "ToolMenuContext.generated.h already included, missing '#pragma once' in ToolMenuContext.h"
#endif
#define TOOLMENUS_ToolMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToolMenuContextBase *****************************************************
struct Z_Construct_UClass_UToolMenuContextBase_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextBase_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuContextBase(); \
	friend struct ::Z_Construct_UClass_UToolMenuContextBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenuContextBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuContextBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenuContextBase_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuContextBase)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLMENUS_API UToolMenuContextBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuContextBase(UToolMenuContextBase&&) = delete; \
	UToolMenuContextBase(const UToolMenuContextBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLMENUS_API, UToolMenuContextBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuContextBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuContextBase) \
	TOOLMENUS_API virtual ~UToolMenuContextBase();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_18_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuContextBase;

// ********** End Class UToolMenuContextBase *******************************************************

// ********** Begin Class USlateTabManagerContext **************************************************
struct Z_Construct_UClass_USlateTabManagerContext_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_USlateTabManagerContext_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateTabManagerContext(); \
	friend struct ::Z_Construct_UClass_USlateTabManagerContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_USlateTabManagerContext_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateTabManagerContext, UToolMenuContextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_USlateTabManagerContext_NoRegister) \
	DECLARE_SERIALIZER(USlateTabManagerContext)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLMENUS_API USlateTabManagerContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateTabManagerContext(USlateTabManagerContext&&) = delete; \
	USlateTabManagerContext(const USlateTabManagerContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLMENUS_API, USlateTabManagerContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateTabManagerContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateTabManagerContext) \
	TOOLMENUS_API virtual ~USlateTabManagerContext();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_24_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateTabManagerContext;

// ********** End Class USlateTabManagerContext ****************************************************

// ********** Begin ScriptStruct FToolMenuContext **************************************************
struct Z_Construct_UScriptStruct_FToolMenuContext_Statics;
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FToolMenuContext_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


struct FToolMenuContext;
// ********** End ScriptStruct FToolMenuContext ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
