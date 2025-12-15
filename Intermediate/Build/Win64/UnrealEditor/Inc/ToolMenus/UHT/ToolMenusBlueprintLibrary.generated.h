// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenusBlueprintLibrary.h"

#ifdef TOOLMENUS_ToolMenusBlueprintLibrary_generated_h
#error "ToolMenusBlueprintLibrary.generated.h already included, missing '#pragma once' in ToolMenusBlueprintLibrary.h"
#endif
#define TOOLMENUS_ToolMenusBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
class UToolMenuEntryScript;
enum class EToolMenuStringCommandType : uint8;
struct FScriptSlateIcon;
struct FToolMenuContext;
struct FToolMenuEntry;
struct FToolMenuOwner;
struct FToolMenuSection;
struct FToolMenuStringCommand;

// ********** Begin Class UToolMenuContextExtensions ***********************************************
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugLogContextObjectClasses); \
	DECLARE_FUNCTION(execFindByClass);


struct Z_Construct_UClass_UToolMenuContextExtensions_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextExtensions_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuContextExtensions(); \
	friend struct ::Z_Construct_UClass_UToolMenuContextExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenuContextExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuContextExtensions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenuContextExtensions_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuContextExtensions)


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuContextExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuContextExtensions(UToolMenuContextExtensions&&) = delete; \
	UToolMenuContextExtensions(const UToolMenuContextExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuContextExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuContextExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuContextExtensions) \
	NO_API virtual ~UToolMenuContextExtensions();


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_17_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuContextExtensions;

// ********** End Class UToolMenuContextExtensions *************************************************

// ********** Begin Class UToolMenuEntryExtensions *************************************************
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitMenuEntry); \
	DECLARE_FUNCTION(execSetStringCommand); \
	DECLARE_FUNCTION(execSetIcon); \
	DECLARE_FUNCTION(execGetToolTip); \
	DECLARE_FUNCTION(execSetToolTip); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execBreakToolMenuOwner); \
	DECLARE_FUNCTION(execMakeToolMenuOwner); \
	DECLARE_FUNCTION(execBreakStringCommand); \
	DECLARE_FUNCTION(execMakeStringCommand); \
	DECLARE_FUNCTION(execBreakScriptSlateIcon); \
	DECLARE_FUNCTION(execMakeScriptSlateIcon);


struct Z_Construct_UClass_UToolMenuEntryExtensions_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryExtensions_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuEntryExtensions(); \
	friend struct ::Z_Construct_UClass_UToolMenuEntryExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenuEntryExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuEntryExtensions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenuEntryExtensions_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuEntryExtensions)


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuEntryExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuEntryExtensions(UToolMenuEntryExtensions&&) = delete; \
	UToolMenuEntryExtensions(const UToolMenuEntryExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuEntryExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuEntryExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuEntryExtensions) \
	NO_API virtual ~UToolMenuEntryExtensions();


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuEntryExtensions;

// ********** End Class UToolMenuEntryExtensions ***************************************************

// ********** Begin Class UToolMenuSectionExtensions ***********************************************
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddEntryObject); \
	DECLARE_FUNCTION(execAddEntry); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetLabel);


struct Z_Construct_UClass_UToolMenuSectionExtensions_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionExtensions_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuSectionExtensions(); \
	friend struct ::Z_Construct_UClass_UToolMenuSectionExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenuSectionExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuSectionExtensions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenuSectionExtensions_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuSectionExtensions)


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuSectionExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuSectionExtensions(UToolMenuSectionExtensions&&) = delete; \
	UToolMenuSectionExtensions(const UToolMenuSectionExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuSectionExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuSectionExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuSectionExtensions) \
	NO_API virtual ~UToolMenuSectionExtensions();


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuSectionExtensions;

// ********** End Class UToolMenuSectionExtensions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
