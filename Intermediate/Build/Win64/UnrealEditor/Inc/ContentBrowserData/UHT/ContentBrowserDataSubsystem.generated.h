// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserDataSubsystem.h"

#ifdef CONTENTBROWSERDATA_ContentBrowserDataSubsystem_generated_h
#error "ContentBrowserDataSubsystem.generated.h already included, missing '#pragma once' in ContentBrowserDataSubsystem.h"
#endif
#define CONTENTBROWSERDATA_ContentBrowserDataSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EContentBrowserItemTypeFilter : uint8;
struct FContentBrowserDataFilter;
struct FContentBrowserItem;

// ********** Begin ScriptStruct FContentBrowserCompiledSubsystemFilter ****************************
struct Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserCompiledSubsystemFilter;
// ********** End ScriptStruct FContentBrowserCompiledSubsystemFilter ******************************

// ********** Begin ScriptStruct FContentBrowserCompiledVirtualFolderFilter ************************
struct Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics;
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics; \
	CONTENTBROWSERDATA_API static class UScriptStruct* StaticStruct();


struct FContentBrowserCompiledVirtualFolderFilter;
// ********** End ScriptStruct FContentBrowserCompiledVirtualFolderFilter **************************

// ********** Begin Class UContentBrowserDataSubsystem *********************************************
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItemAtPath); \
	DECLARE_FUNCTION(execGetItemsAtPath); \
	DECLARE_FUNCTION(execGetItemsUnderPath); \
	DECLARE_FUNCTION(execGetActiveDataSources); \
	DECLARE_FUNCTION(execGetAvailableDataSources); \
	DECLARE_FUNCTION(execDeactivateAllDataSources); \
	DECLARE_FUNCTION(execActivateAllDataSources); \
	DECLARE_FUNCTION(execDeactivateDataSource); \
	DECLARE_FUNCTION(execActivateDataSource);


struct Z_Construct_UClass_UContentBrowserDataSubsystem_Statics;
CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSubsystem_NoRegister();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserDataSubsystem(); \
	friend struct ::Z_Construct_UClass_UContentBrowserDataSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTENTBROWSERDATA_API UClass* ::Z_Construct_UClass_UContentBrowserDataSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBrowserDataSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContentBrowserData"), Z_Construct_UClass_UContentBrowserDataSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UContentBrowserDataSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_116_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBrowserDataSubsystem(UContentBrowserDataSubsystem&&) = delete; \
	UContentBrowserDataSubsystem(const UContentBrowserDataSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTENTBROWSERDATA_API, UContentBrowserDataSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserDataSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UContentBrowserDataSubsystem) \
	CONTENTBROWSERDATA_API virtual ~UContentBrowserDataSubsystem();


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_113_PROLOG
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_116_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBrowserDataSubsystem;

// ********** End Class UContentBrowserDataSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h

// ********** Begin Enum EContentBrowserPathType ***************************************************
#define FOREACH_ENUM_ECONTENTBROWSERPATHTYPE(op) \
	op(EContentBrowserPathType::None) \
	op(EContentBrowserPathType::Internal) \
	op(EContentBrowserPathType::Virtual) 

enum class EContentBrowserPathType : uint8;
template<> struct TIsUEnumClass<EContentBrowserPathType> { enum { Value = true }; };
template<> CONTENTBROWSERDATA_NON_ATTRIBUTED_API UEnum* StaticEnum<EContentBrowserPathType>();
// ********** End Enum EContentBrowserPathType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
