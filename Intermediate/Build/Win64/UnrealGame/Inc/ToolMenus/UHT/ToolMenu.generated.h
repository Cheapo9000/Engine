// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenu.h"

#ifdef TOOLMENUS_ToolMenu_generated_h
#error "ToolMenu.generated.h already included, missing '#pragma once' in ToolMenu.h"
#endif
#define TOOLMENUS_ToolMenu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UToolMenu;
class UToolMenuEntryScript;
class UToolMenuSectionDynamic;
enum class EMultiBoxType : uint8;
enum class EToolMenuInsertType : uint8;
enum class EToolMenuSectionAlign : uint8;
struct FToolMenuEntry;
struct FToolMenuOwner;

// ********** Begin Class UToolMenu ****************************************************************
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddSubMenuScript); \
	DECLARE_FUNCTION(execRemoveMenuEntryObject); \
	DECLARE_FUNCTION(execAddMenuEntryObject); \
	DECLARE_FUNCTION(execAddMenuEntry); \
	DECLARE_FUNCTION(execAddDynamicSectionScript); \
	DECLARE_FUNCTION(execAddSectionScript); \
	DECLARE_FUNCTION(execInitMenu);


struct Z_Construct_UClass_UToolMenu_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenu(); \
	friend struct ::Z_Construct_UClass_UToolMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenu, UToolMenuBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenu_NoRegister) \
	DECLARE_SERIALIZER(UToolMenu)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenu(UToolMenu&&) = delete; \
	UToolMenu(const UToolMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLMENUS_API, UToolMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToolMenu) \
	TOOLMENUS_API virtual ~UToolMenu();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_23_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenu;

// ********** End Class UToolMenu ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
