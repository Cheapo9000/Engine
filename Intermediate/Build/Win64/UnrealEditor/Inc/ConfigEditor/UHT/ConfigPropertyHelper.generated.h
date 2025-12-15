// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConfigPropertyHelper.h"

#ifdef CONFIGEDITOR_ConfigPropertyHelper_generated_h
#error "ConfigPropertyHelper.generated.h already included, missing '#pragma once' in ConfigPropertyHelper.h"
#endif
#define CONFIGEDITOR_ConfigPropertyHelper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyConfigFileDisplayRow ********************************************
struct Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics;
CONFIGEDITOR_API UClass* Z_Construct_UClass_UPropertyConfigFileDisplayRow_NoRegister();

#define FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyConfigFileDisplayRow(); \
	friend struct ::Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONFIGEDITOR_API UClass* ::Z_Construct_UClass_UPropertyConfigFileDisplayRow_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyConfigFileDisplayRow, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConfigEditor"), Z_Construct_UClass_UPropertyConfigFileDisplayRow_NoRegister) \
	DECLARE_SERIALIZER(UPropertyConfigFileDisplayRow)


#define FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONFIGEDITOR_API UPropertyConfigFileDisplayRow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyConfigFileDisplayRow(UPropertyConfigFileDisplayRow&&) = delete; \
	UPropertyConfigFileDisplayRow(const UPropertyConfigFileDisplayRow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONFIGEDITOR_API, UPropertyConfigFileDisplayRow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyConfigFileDisplayRow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyConfigFileDisplayRow) \
	CONFIGEDITOR_API virtual ~UPropertyConfigFileDisplayRow();


#define FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_29_PROLOG
#define FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyConfigFileDisplayRow;

// ********** End Class UPropertyConfigFileDisplayRow **********************************************

// ********** Begin Class UConfigHierarchyPropertyView *********************************************
struct Z_Construct_UClass_UConfigHierarchyPropertyView_Statics;
CONFIGEDITOR_API UClass* Z_Construct_UClass_UConfigHierarchyPropertyView_NoRegister();

#define FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConfigHierarchyPropertyView(); \
	friend struct ::Z_Construct_UClass_UConfigHierarchyPropertyView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONFIGEDITOR_API UClass* ::Z_Construct_UClass_UConfigHierarchyPropertyView_NoRegister(); \
public: \
	DECLARE_CLASS2(UConfigHierarchyPropertyView, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConfigEditor"), Z_Construct_UClass_UConfigHierarchyPropertyView_NoRegister) \
	DECLARE_SERIALIZER(UConfigHierarchyPropertyView)


#define FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONFIGEDITOR_API UConfigHierarchyPropertyView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConfigHierarchyPropertyView(UConfigHierarchyPropertyView&&) = delete; \
	UConfigHierarchyPropertyView(const UConfigHierarchyPropertyView&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONFIGEDITOR_API, UConfigHierarchyPropertyView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConfigHierarchyPropertyView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConfigHierarchyPropertyView) \
	CONFIGEDITOR_API virtual ~UConfigHierarchyPropertyView();


#define FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_52_PROLOG
#define FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConfigHierarchyPropertyView;

// ********** End Class UConfigHierarchyPropertyView ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ConfigEditor_Public_ConfigPropertyHelper_h

// ********** Begin Enum EConfigFileSourceControlStatus ********************************************
#define FOREACH_ENUM_ECONFIGFILESOURCECONTROLSTATUS(op) \
	op(CFSCS_Unknown) \
	op(CFSCS_Writable) \
	op(CFSCS_Locked) 

enum EConfigFileSourceControlStatus : int;
template<> CONFIGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EConfigFileSourceControlStatus>();
// ********** End Enum EConfigFileSourceControlStatus **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
