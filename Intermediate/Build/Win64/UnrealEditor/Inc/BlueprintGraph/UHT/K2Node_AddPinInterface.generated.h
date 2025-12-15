// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_AddPinInterface.h"

#ifdef BLUEPRINTGRAPH_K2Node_AddPinInterface_generated_h
#error "K2Node_AddPinInterface.generated.h already included, missing '#pragma once' in K2Node_AddPinInterface.h"
#endif
#define BLUEPRINTGRAPH_K2Node_AddPinInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UK2Node_AddPinInterface **********************************************
struct Z_Construct_UClass_UK2Node_AddPinInterface_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_AddPinInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_AddPinInterface(UK2Node_AddPinInterface&&) = delete; \
	UK2Node_AddPinInterface(const UK2Node_AddPinInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_AddPinInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_AddPinInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_AddPinInterface) \
	virtual ~UK2Node_AddPinInterface() = default;


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUK2Node_AddPinInterface(); \
	friend struct ::Z_Construct_UClass_UK2Node_AddPinInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_AddPinInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_AddPinInterface)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IK2Node_AddPinInterface() {} \
public: \
	typedef UK2Node_AddPinInterface UClassType; \
	typedef IK2Node_AddPinInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h_19_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_AddPinInterface;

// ********** End Interface UK2Node_AddPinInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddPinInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
