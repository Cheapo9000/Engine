// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintVariableNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_BlueprintVariableNodeSpawner_generated_h
#error "BlueprintVariableNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintVariableNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintVariableNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintVariableNodeSpawner ********************************************
struct Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintVariableNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintVariableNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintVariableNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintVariableNodeSpawner, UBlueprintFieldNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintVariableNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintVariableNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintVariableNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintVariableNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintVariableNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintVariableNodeSpawner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintVariableNodeSpawner(UBlueprintVariableNodeSpawner&&) = delete; \
	UBlueprintVariableNodeSpawner(const UBlueprintVariableNodeSpawner&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UBlueprintVariableNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_41_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_44_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintVariableNodeSpawner;

// ********** End Class UBlueprintVariableNodeSpawner **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
