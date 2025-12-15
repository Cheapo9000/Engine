// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenus.h"

#ifdef TOOLMENUS_ToolMenus_generated_h
#error "ToolMenus.generated.h already included, missing '#pragma once' in ToolMenus.h"
#endif
#define TOOLMENUS_ToolMenus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
class UToolMenu;
class UToolMenuEntryScript;
class UToolMenus;
enum class EMultiBoxType : uint8;
enum class EToolMenuInsertType : uint8;
struct FToolMenuContext;

// ********** Begin Class UToolMenuProfileContext **************************************************
struct Z_Construct_UClass_UToolMenuProfileContext_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuProfileContext_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuProfileContext(); \
	friend struct ::Z_Construct_UClass_UToolMenuProfileContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenuProfileContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuProfileContext, UToolMenuContextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenuProfileContext_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuProfileContext)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLMENUS_API UToolMenuProfileContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuProfileContext(UToolMenuProfileContext&&) = delete; \
	UToolMenuProfileContext(const UToolMenuProfileContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLMENUS_API, UToolMenuProfileContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuProfileContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuProfileContext) \
	TOOLMENUS_API virtual ~UToolMenuProfileContext();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_78_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuProfileContext;

// ********** End Class UToolMenuProfileContext ****************************************************

// ********** Begin ScriptStruct FToolMenuProfileMap ***********************************************
struct Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics;
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


struct FToolMenuProfileMap;
// ********** End ScriptStruct FToolMenuProfileMap *************************************************

// ********** Begin Class UToolMenus ***************************************************************
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindContext); \
	DECLARE_FUNCTION(execRemoveMenu); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execRemoveEntry); \
	DECLARE_FUNCTION(execSetSectionPosition); \
	DECLARE_FUNCTION(execSetSectionLabel); \
	DECLARE_FUNCTION(execUnregisterOwnerByName); \
	DECLARE_FUNCTION(execRemoveMenuEntryObject); \
	DECLARE_FUNCTION(execAddMenuEntryObject); \
	DECLARE_FUNCTION(execRefreshAllWidgets); \
	DECLARE_FUNCTION(execRefreshMenuWidget); \
	DECLARE_FUNCTION(execIsMenuRegistered); \
	DECLARE_FUNCTION(execFindMenu); \
	DECLARE_FUNCTION(execExtendMenu); \
	DECLARE_FUNCTION(execRegisterMenu); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_UToolMenus_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenus_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenus(); \
	friend struct ::Z_Construct_UClass_UToolMenus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenus_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenus_NoRegister) \
	DECLARE_SERIALIZER(UToolMenus) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_102_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenus(UToolMenus&&) = delete; \
	UToolMenus(const UToolMenus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLMENUS_API, UToolMenus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToolMenus) \
	TOOLMENUS_API virtual ~UToolMenus();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_99_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenus;

// ********** End Class UToolMenus *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
