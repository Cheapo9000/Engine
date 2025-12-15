// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_SwitchEnum.h"

#ifdef BLUEPRINTGRAPH_K2Node_SwitchEnum_generated_h
#error "K2Node_SwitchEnum.generated.h already included, missing '#pragma once' in K2Node_SwitchEnum.h"
#endif
#define BLUEPRINTGRAPH_K2Node_SwitchEnum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_SwitchEnum *******************************************************
struct Z_Construct_UClass_UK2Node_SwitchEnum_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchEnum_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchEnum_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_SwitchEnum(); \
	friend struct ::Z_Construct_UClass_UK2Node_SwitchEnum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_SwitchEnum_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_SwitchEnum, UK2Node_Switch, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_SwitchEnum_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_SwitchEnum) \
	virtual UObject* _getUObject() const override { return const_cast<UK2Node_SwitchEnum*>(this); }


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchEnum_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_SwitchEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_SwitchEnum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_SwitchEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_SwitchEnum); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_SwitchEnum(UK2Node_SwitchEnum&&) = delete; \
	UK2Node_SwitchEnum(const UK2Node_SwitchEnum&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_SwitchEnum();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchEnum_h_28_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchEnum_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchEnum_h_31_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchEnum_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_SwitchEnum;

// ********** End Class UK2Node_SwitchEnum *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_SwitchEnum_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
