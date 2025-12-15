// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/K2Node_CreateWidget.h"

#ifdef UMGEDITOR_K2Node_CreateWidget_generated_h
#error "K2Node_CreateWidget.generated.h already included, missing '#pragma once' in K2Node_CreateWidget.h"
#endif
#define UMGEDITOR_K2Node_CreateWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_CreateWidget *****************************************************
struct Z_Construct_UClass_UK2Node_CreateWidget_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_CreateWidget_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_CreateWidget(); \
	friend struct ::Z_Construct_UClass_UK2Node_CreateWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_UK2Node_CreateWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_CreateWidget, UK2Node_ConstructObjectFromClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_UK2Node_CreateWidget_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_CreateWidget)


#define FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMGEDITOR_API UK2Node_CreateWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_CreateWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UK2Node_CreateWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_CreateWidget); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_CreateWidget(UK2Node_CreateWidget&&) = delete; \
	UK2Node_CreateWidget(const UK2Node_CreateWidget&) = delete; \
	UMGEDITOR_API virtual ~UK2Node_CreateWidget();


#define FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_14_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_17_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_CreateWidget;

// ********** End Class UK2Node_CreateWidget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
