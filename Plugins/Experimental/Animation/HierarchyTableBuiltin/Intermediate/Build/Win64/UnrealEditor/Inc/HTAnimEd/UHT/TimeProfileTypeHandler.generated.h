// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeProfile/TimeProfileTypeHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HIERARCHYTABLEBUILTINEDITOR_TimeProfileTypeHandler_generated_h
#error "TimeProfileTypeHandler.generated.h already included, missing '#pragma once' in TimeProfileTypeHandler.h"
#endif
#define HIERARCHYTABLEBUILTINEDITOR_TimeProfileTypeHandler_generated_h

#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableBuiltin_Source_Editor_Private_TimeProfile_TimeProfileTypeHandler_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHierarchyTableTypeHandler_Time(); \
	friend struct Z_Construct_UClass_UHierarchyTableTypeHandler_Time_Statics; \
public: \
	DECLARE_CLASS(UHierarchyTableTypeHandler_Time, UHierarchyTableTypeHandler_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HierarchyTableBuiltinEditor"), NO_API) \
	DECLARE_SERIALIZER(UHierarchyTableTypeHandler_Time)


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableBuiltin_Source_Editor_Private_TimeProfile_TimeProfileTypeHandler_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHierarchyTableTypeHandler_Time(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHierarchyTableTypeHandler_Time(UHierarchyTableTypeHandler_Time&&); \
	UHierarchyTableTypeHandler_Time(const UHierarchyTableTypeHandler_Time&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchyTableTypeHandler_Time); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchyTableTypeHandler_Time); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchyTableTypeHandler_Time) \
	NO_API virtual ~UHierarchyTableTypeHandler_Time();


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableBuiltin_Source_Editor_Private_TimeProfile_TimeProfileTypeHandler_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableBuiltin_Source_Editor_Private_TimeProfile_TimeProfileTypeHandler_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTableBuiltin_Source_Editor_Private_TimeProfile_TimeProfileTypeHandler_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTableBuiltin_Source_Editor_Private_TimeProfile_TimeProfileTypeHandler_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HIERARCHYTABLEBUILTINEDITOR_API UClass* StaticClass<class UHierarchyTableTypeHandler_Time>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_HierarchyTableBuiltin_Source_Editor_Private_TimeProfile_TimeProfileTypeHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
