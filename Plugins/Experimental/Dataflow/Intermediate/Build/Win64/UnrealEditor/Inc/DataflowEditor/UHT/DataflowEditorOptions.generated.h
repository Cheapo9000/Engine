// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowEditorOptions.h"

#ifdef DATAFLOWEDITOR_DataflowEditorOptions_generated_h
#error "DataflowEditorOptions.generated.h already included, missing '#pragma once' in DataflowEditorOptions.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowEditorOptions ***************************************************
struct Z_Construct_UClass_UDataflowEditorOptions_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowEditorOptions_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorOptions_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUDataflowEditorOptions(); \
	friend struct ::Z_Construct_UClass_UDataflowEditorOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowEditorOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowEditorOptions, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowEditorOptions_NoRegister) \
	DECLARE_SERIALIZER(UDataflowEditorOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorOptions_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWEDITOR_API UDataflowEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowEditorOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowEditorOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEditorOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowEditorOptions(UDataflowEditorOptions&&) = delete; \
	UDataflowEditorOptions(const UDataflowEditorOptions&) = delete; \
	DATAFLOWEDITOR_API virtual ~UDataflowEditorOptions();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorOptions_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorOptions_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorOptions_h_36_INCLASS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorOptions_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowEditorOptions;

// ********** End Class UDataflowEditorOptions *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowEditorOptions_h

// ********** Begin Enum EDataflowConstructionViewportMousePanButton *******************************
#define FOREACH_ENUM_EDATAFLOWCONSTRUCTIONVIEWPORTMOUSEPANBUTTON(op) \
	op(EDataflowConstructionViewportMousePanButton::Right) \
	op(EDataflowConstructionViewportMousePanButton::Middle) \
	op(EDataflowConstructionViewportMousePanButton::RightOrMiddle) 

enum class EDataflowConstructionViewportMousePanButton : uint8;
template<> struct TIsUEnumClass<EDataflowConstructionViewportMousePanButton> { enum { Value = true }; };
template<> DATAFLOWEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowConstructionViewportMousePanButton>();
// ********** End Enum EDataflowConstructionViewportMousePanButton *********************************

// ********** Begin Enum EDataflowEditorEvaluationMode *********************************************
#define FOREACH_ENUM_EDATAFLOWEDITOREVALUATIONMODE(op) \
	op(EDataflowEditorEvaluationMode::Automatic) \
	op(EDataflowEditorEvaluationMode::Manual) 

enum class EDataflowEditorEvaluationMode : uint8;
template<> struct TIsUEnumClass<EDataflowEditorEvaluationMode> { enum { Value = true }; };
template<> DATAFLOWEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowEditorEvaluationMode>();
// ********** End Enum EDataflowEditorEvaluationMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
