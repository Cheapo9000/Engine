// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_EventNodeInterface.h"

#ifdef BLUEPRINTGRAPH_K2Node_EventNodeInterface_generated_h
#error "K2Node_EventNodeInterface.generated.h already included, missing '#pragma once' in K2Node_EventNodeInterface.h"
#endif
#define BLUEPRINTGRAPH_K2Node_EventNodeInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UK2Node_EventNodeInterface *******************************************
struct Z_Construct_UClass_UK2Node_EventNodeInterface_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_EventNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_EventNodeInterface(UK2Node_EventNodeInterface&&) = delete; \
	UK2Node_EventNodeInterface(const UK2Node_EventNodeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_EventNodeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_EventNodeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_EventNodeInterface) \
	virtual ~UK2Node_EventNodeInterface() = default;


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUK2Node_EventNodeInterface(); \
	friend struct ::Z_Construct_UClass_UK2Node_EventNodeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_EventNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_EventNodeInterface)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IK2Node_EventNodeInterface() {} \
public: \
	typedef UK2Node_EventNodeInterface UClassType; \
	typedef IK2Node_EventNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_12_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_EventNodeInterface;

// ********** End Interface UK2Node_EventNodeInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
