// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/RigVMEditorMenuContext.h"

#ifdef RIGVMEDITOR_RigVMEditorMenuContext_generated_h
#error "RigVMEditorMenuContext.generated.h already included, missing '#pragma once' in RigVMEditorMenuContext.h"
#endif
#define RIGVMEDITOR_RigVMEditorMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IRigVMAssetInterface;
class URigVMBlueprint;
class URigVMHost;
struct FRigVMEditorGraphMenuContext;

// ********** Begin ScriptStruct FRigVMEditorGraphMenuContext **************************************
struct Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics; \
	RIGVMEDITOR_API static class UScriptStruct* StaticStruct();


struct FRigVMEditorGraphMenuContext;
// ********** End ScriptStruct FRigVMEditorGraphMenuContext ****************************************

// ********** Begin Class URigVMEditorMenuContext **************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGraphMenuContext); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execGetRigVMHost); \
	DECLARE_FUNCTION(execGetRigVMAssetInterface); \
	DECLARE_FUNCTION(execGetRigVMBlueprint);


struct Z_Construct_UClass_URigVMEditorMenuContext_Statics;
RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMEditorMenuContext_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMEditorMenuContext(); \
	friend struct ::Z_Construct_UClass_URigVMEditorMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMEDITOR_API UClass* ::Z_Construct_UClass_URigVMEditorMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMEditorMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMEditor"), Z_Construct_UClass_URigVMEditorMenuContext_NoRegister) \
	DECLARE_SERIALIZER(URigVMEditorMenuContext)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMEDITOR_API URigVMEditorMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMEditorMenuContext(URigVMEditorMenuContext&&) = delete; \
	URigVMEditorMenuContext(const URigVMEditorMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMEDITOR_API, URigVMEditorMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEditorMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMEditorMenuContext) \
	RIGVMEDITOR_API virtual ~URigVMEditorMenuContext();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_51_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMEditorMenuContext;

// ********** End Class URigVMEditorMenuContext ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
