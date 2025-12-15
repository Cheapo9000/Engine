// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NodeDependingOnEnumInterface.h"

#ifdef BLUEPRINTGRAPH_NodeDependingOnEnumInterface_generated_h
#error "NodeDependingOnEnumInterface.generated.h already included, missing '#pragma once' in NodeDependingOnEnumInterface.h"
#endif
#define BLUEPRINTGRAPH_NodeDependingOnEnumInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNodeDependingOnEnumInterface ****************************************
struct Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UNodeDependingOnEnumInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeDependingOnEnumInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UNodeDependingOnEnumInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeDependingOnEnumInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNodeDependingOnEnumInterface(UNodeDependingOnEnumInterface&&) = delete; \
	UNodeDependingOnEnumInterface(const UNodeDependingOnEnumInterface&) = delete; \
	virtual ~UNodeDependingOnEnumInterface() = default;


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNodeDependingOnEnumInterface(); \
	friend struct ::Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNodeDependingOnEnumInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister) \
	DECLARE_SERIALIZER(UNodeDependingOnEnumInterface)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~INodeDependingOnEnumInterface() {} \
public: \
	typedef UNodeDependingOnEnumInterface UClassType; \
	typedef INodeDependingOnEnumInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_16_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNodeDependingOnEnumInterface;

// ********** End Interface UNodeDependingOnEnumInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
