// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HierarchyTableTypeHandler.h"

#ifdef HIERARCHYTABLEEDITOR_HierarchyTableTypeHandler_generated_h
#error "HierarchyTableTypeHandler.generated.h already included, missing '#pragma once' in HierarchyTableTypeHandler.h"
#endif
#define HIERARCHYTABLEEDITOR_HierarchyTableTypeHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHierarchyTable_TableTypeHandler *****************************************
struct Z_Construct_UClass_UHierarchyTable_TableTypeHandler_Statics;
HIERARCHYTABLEEDITOR_API UClass* Z_Construct_UClass_UHierarchyTable_TableTypeHandler_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Editor_Public_HierarchyTableTypeHandler_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHierarchyTable_TableTypeHandler(); \
	friend struct ::Z_Construct_UClass_UHierarchyTable_TableTypeHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HIERARCHYTABLEEDITOR_API UClass* ::Z_Construct_UClass_UHierarchyTable_TableTypeHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UHierarchyTable_TableTypeHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HierarchyTableEditor"), Z_Construct_UClass_UHierarchyTable_TableTypeHandler_NoRegister) \
	DECLARE_SERIALIZER(UHierarchyTable_TableTypeHandler)


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Editor_Public_HierarchyTableTypeHandler_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HIERARCHYTABLEEDITOR_API UHierarchyTable_TableTypeHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHierarchyTable_TableTypeHandler(UHierarchyTable_TableTypeHandler&&) = delete; \
	UHierarchyTable_TableTypeHandler(const UHierarchyTable_TableTypeHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HIERARCHYTABLEEDITOR_API, UHierarchyTable_TableTypeHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchyTable_TableTypeHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchyTable_TableTypeHandler) \
	HIERARCHYTABLEEDITOR_API virtual ~UHierarchyTable_TableTypeHandler();


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Editor_Public_HierarchyTableTypeHandler_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Editor_Public_HierarchyTableTypeHandler_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Editor_Public_HierarchyTableTypeHandler_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Editor_Public_HierarchyTableTypeHandler_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHierarchyTable_TableTypeHandler;

// ********** End Class UHierarchyTable_TableTypeHandler *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Editor_Public_HierarchyTableTypeHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
