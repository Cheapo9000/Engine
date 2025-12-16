// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_InputDebugKeyEvent.h"

#ifdef INPUTBLUEPRINTNODES_K2Node_InputDebugKeyEvent_generated_h
#error "K2Node_InputDebugKeyEvent.generated.h already included, missing '#pragma once' in K2Node_InputDebugKeyEvent.h"
#endif
#define INPUTBLUEPRINTNODES_K2Node_InputDebugKeyEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_InputDebugKeyEvent ***********************************************
struct Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics;
INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_InputDebugKeyEvent_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_InputDebugKeyEvent(); \
	friend struct ::Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTBLUEPRINTNODES_API UClass* ::Z_Construct_UClass_UK2Node_InputDebugKeyEvent_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_InputDebugKeyEvent, UK2Node_Event, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputBlueprintNodes"), Z_Construct_UClass_UK2Node_InputDebugKeyEvent_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_InputDebugKeyEvent)


#define FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INPUTBLUEPRINTNODES_API UK2Node_InputDebugKeyEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_InputDebugKeyEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INPUTBLUEPRINTNODES_API, UK2Node_InputDebugKeyEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_InputDebugKeyEvent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_InputDebugKeyEvent(UK2Node_InputDebugKeyEvent&&) = delete; \
	UK2Node_InputDebugKeyEvent(const UK2Node_InputDebugKeyEvent&) = delete; \
	INPUTBLUEPRINTNODES_API virtual ~UK2Node_InputDebugKeyEvent();


#define FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_15_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_18_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_InputDebugKeyEvent;

// ********** End Class UK2Node_InputDebugKeyEvent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
