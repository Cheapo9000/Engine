// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Models/TraceFilterPresets.h"

#ifdef TRACETOOLS_TraceFilterPresets_generated_h
#error "TraceFilterPresets.generated.h already included, missing '#pragma once' in TraceFilterPresets.h"
#endif
#define TRACETOOLS_TraceFilterPresets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTraceFilterData **************************************************
struct Z_Construct_UScriptStruct_FTraceFilterData_Statics;
#define FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTraceFilterData_Statics; \
	TRACETOOLS_API static class UScriptStruct* StaticStruct();


struct FTraceFilterData;
// ********** End ScriptStruct FTraceFilterData ****************************************************

// ********** Begin Class ULocalTraceFilterPresetContainer *****************************************
struct Z_Construct_UClass_ULocalTraceFilterPresetContainer_Statics;
TRACETOOLS_API UClass* Z_Construct_UClass_ULocalTraceFilterPresetContainer_NoRegister();

#define FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalTraceFilterPresetContainer(); \
	friend struct ::Z_Construct_UClass_ULocalTraceFilterPresetContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRACETOOLS_API UClass* ::Z_Construct_UClass_ULocalTraceFilterPresetContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocalTraceFilterPresetContainer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TraceTools"), Z_Construct_UClass_ULocalTraceFilterPresetContainer_NoRegister) \
	DECLARE_SERIALIZER(ULocalTraceFilterPresetContainer)


#define FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalTraceFilterPresetContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalTraceFilterPresetContainer(ULocalTraceFilterPresetContainer&&) = delete; \
	ULocalTraceFilterPresetContainer(const ULocalTraceFilterPresetContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalTraceFilterPresetContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalTraceFilterPresetContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalTraceFilterPresetContainer) \
	NO_API virtual ~ULocalTraceFilterPresetContainer();


#define FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_41_PROLOG
#define FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalTraceFilterPresetContainer;

// ********** End Class ULocalTraceFilterPresetContainer *******************************************

// ********** Begin Class USharedTraceFilterPresetContainer ****************************************
struct Z_Construct_UClass_USharedTraceFilterPresetContainer_Statics;
TRACETOOLS_API UClass* Z_Construct_UClass_USharedTraceFilterPresetContainer_NoRegister();

#define FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSharedTraceFilterPresetContainer(); \
	friend struct ::Z_Construct_UClass_USharedTraceFilterPresetContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRACETOOLS_API UClass* ::Z_Construct_UClass_USharedTraceFilterPresetContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(USharedTraceFilterPresetContainer, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/TraceTools"), Z_Construct_UClass_USharedTraceFilterPresetContainer_NoRegister) \
	DECLARE_SERIALIZER(USharedTraceFilterPresetContainer)


#define FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USharedTraceFilterPresetContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USharedTraceFilterPresetContainer(USharedTraceFilterPresetContainer&&) = delete; \
	USharedTraceFilterPresetContainer(const USharedTraceFilterPresetContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USharedTraceFilterPresetContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USharedTraceFilterPresetContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USharedTraceFilterPresetContainer) \
	NO_API virtual ~USharedTraceFilterPresetContainer();


#define FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_58_PROLOG
#define FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USharedTraceFilterPresetContainer;

// ********** End Class USharedTraceFilterPresetContainer ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_TraceTools_Private_Models_TraceFilterPresets_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
