// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorData.h"

#ifdef STATETREEEDITORMODULE_StateTreeEditorData_generated_h
#error "StateTreeEditorData.generated.h already included, missing '#pragma once' in StateTreeEditorData.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UStateTreeEditorDataExtension;

// ********** Begin ScriptStruct FStateTreeEditorBreakpoint ****************************************
struct Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics;
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStateTreeEditorBreakpoint_Statics; \
	STATETREEEDITORMODULE_API static class UScriptStruct* StaticStruct();


struct FStateTreeEditorBreakpoint;
// ********** End ScriptStruct FStateTreeEditorBreakpoint ******************************************

// ********** Begin Class UStateTreeEditorData *****************************************************
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_GetExtension);


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_67_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStateTreeEditorData, STATETREEEDITORMODULE_API)


struct Z_Construct_UClass_UStateTreeEditorData_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorData_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEditorData(); \
	friend struct ::Z_Construct_UClass_UStateTreeEditorData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEditorData_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEditorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeEditorData_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEditorData) \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_67_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UStateTree) \
	virtual UObject* _getUObject() const override { return const_cast<UStateTreeEditorData*>(this); }


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_67_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEditorData(UStateTreeEditorData&&) = delete; \
	UStateTreeEditorData(const UStateTreeEditorData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateTreeEditorData) \
	STATETREEEDITORMODULE_API virtual ~UStateTreeEditorData();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_64_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEditorData;

// ********** End Class UStateTreeEditorData *******************************************************

// ********** Begin Class UQAStateTreeEditorData ***************************************************
struct Z_Construct_UClass_UQAStateTreeEditorData_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UQAStateTreeEditorData_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_444_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQAStateTreeEditorData(); \
	friend struct ::Z_Construct_UClass_UQAStateTreeEditorData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UQAStateTreeEditorData_NoRegister(); \
public: \
	DECLARE_CLASS2(UQAStateTreeEditorData, UStateTreeEditorData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UQAStateTreeEditorData_NoRegister) \
	DECLARE_SERIALIZER(UQAStateTreeEditorData)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_444_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQAStateTreeEditorData(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQAStateTreeEditorData(UQAStateTreeEditorData&&) = delete; \
	UQAStateTreeEditorData(const UQAStateTreeEditorData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQAStateTreeEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQAStateTreeEditorData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQAStateTreeEditorData) \
	NO_API virtual ~UQAStateTreeEditorData();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_441_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_444_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_444_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_444_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQAStateTreeEditorData;

// ********** End Class UQAStateTreeEditorData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h

// ********** Begin Enum EStateTreeVisitor *********************************************************
#define FOREACH_ENUM_ESTATETREEVISITOR(op) \
	op(EStateTreeVisitor::Continue) \
	op(EStateTreeVisitor::Break) 

enum class EStateTreeVisitor : uint8;
template<> struct TIsUEnumClass<EStateTreeVisitor> { enum { Value = true }; };
template<> STATETREEEDITORMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeVisitor>();
// ********** End Enum EStateTreeVisitor ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
