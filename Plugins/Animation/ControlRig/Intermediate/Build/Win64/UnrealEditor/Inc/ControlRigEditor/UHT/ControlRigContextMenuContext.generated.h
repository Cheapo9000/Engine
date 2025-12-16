// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/ControlRigContextMenuContext.h"

#ifdef CONTROLRIGEDITOR_ControlRigContextMenuContext_generated_h
#error "ControlRigContextMenuContext.generated.h already included, missing '#pragma once' in ControlRigContextMenuContext.h"
#endif
#define CONTROLRIGEDITOR_ControlRigContextMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IControlRigAssetInterface;
class UControlRig;
class UControlRigBlueprint;
struct FControlRigGraphNodeContextMenuContext;
struct FControlRigRigHierarchyDragAndDropContext;
struct FControlRigRigHierarchyToGraphDragAndDropContext;

// ********** Begin ScriptStruct FControlRigRigHierarchyDragAndDropContext *************************
struct Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FControlRigRigHierarchyDragAndDropContext;
// ********** End ScriptStruct FControlRigRigHierarchyDragAndDropContext ***************************

// ********** Begin ScriptStruct FControlRigGraphNodeContextMenuContext ****************************
struct Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FControlRigGraphNodeContextMenuContext;
// ********** End ScriptStruct FControlRigGraphNodeContextMenuContext ******************************

// ********** Begin ScriptStruct FControlRigRigHierarchyToGraphDragAndDropContext ******************
struct Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FControlRigRigHierarchyToGraphDragAndDropContext;
// ********** End ScriptStruct FControlRigRigHierarchyToGraphDragAndDropContext ********************

// ********** Begin Class UControlRigContextMenuContext ********************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRigHierarchyToGraphDragAndDropContext); \
	DECLARE_FUNCTION(execGetGraphNodeContextMenuContext); \
	DECLARE_FUNCTION(execGetRigHierarchyDragAndDropContext); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execGetControlRig); \
	DECLARE_FUNCTION(execGetControlRigAssetInterface); \
	DECLARE_FUNCTION(execGetControlRigBlueprint);


struct Z_Construct_UClass_UControlRigContextMenuContext_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigContextMenuContext_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigContextMenuContext(); \
	friend struct ::Z_Construct_UClass_UControlRigContextMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UControlRigContextMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UControlRigContextMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UControlRigContextMenuContext)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigContextMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigContextMenuContext(UControlRigContextMenuContext&&) = delete; \
	UControlRigContextMenuContext(const UControlRigContextMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigContextMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigContextMenuContext) \
	NO_API virtual ~UControlRigContextMenuContext();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_109_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_112_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigContextMenuContext;

// ********** End Class UControlRigContextMenuContext **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
