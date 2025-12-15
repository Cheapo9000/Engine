// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportDragOperation.h"

#ifdef VIEWPORTINTERACTION_ViewportDragOperation_generated_h
#error "ViewportDragOperation.generated.h already included, missing '#pragma once' in ViewportDragOperation.h"
#endif
#define VIEWPORTINTERACTION_ViewportDragOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UViewportDragOperation ***************************************************
struct Z_Construct_UClass_UViewportDragOperation_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportDragOperation(); \
	friend struct ::Z_Construct_UClass_UViewportDragOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UViewportDragOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportDragOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UViewportDragOperation_NoRegister) \
	DECLARE_SERIALIZER(UViewportDragOperation)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIEWPORTINTERACTION_API UViewportDragOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportDragOperation(UViewportDragOperation&&) = delete; \
	UViewportDragOperation(const UViewportDragOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UViewportDragOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportDragOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportDragOperation) \
	VIEWPORTINTERACTION_API virtual ~UViewportDragOperation();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_31_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportDragOperation;

// ********** End Class UViewportDragOperation *****************************************************

// ********** Begin Class UViewportDragOperationComponent ******************************************
struct Z_Construct_UClass_UViewportDragOperationComponent_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperationComponent_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportDragOperationComponent(); \
	friend struct ::Z_Construct_UClass_UViewportDragOperationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UViewportDragOperationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportDragOperationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UViewportDragOperationComponent_NoRegister) \
	DECLARE_SERIALIZER(UViewportDragOperationComponent)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportDragOperationComponent(UViewportDragOperationComponent&&) = delete; \
	UViewportDragOperationComponent(const UViewportDragOperationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UViewportDragOperationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportDragOperationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportDragOperationComponent) \
	VIEWPORTINTERACTION_API virtual ~UViewportDragOperationComponent();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_62_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportDragOperationComponent;

// ********** End Class UViewportDragOperationComponent ********************************************

// ********** Begin ScriptStruct FDraggingTransformableData ****************************************
struct Z_Construct_UScriptStruct_FDraggingTransformableData_Statics;
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDraggingTransformableData_Statics; \
	VIEWPORTINTERACTION_API static class UScriptStruct* StaticStruct();


struct FDraggingTransformableData;
// ********** End ScriptStruct FDraggingTransformableData ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportDragOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
