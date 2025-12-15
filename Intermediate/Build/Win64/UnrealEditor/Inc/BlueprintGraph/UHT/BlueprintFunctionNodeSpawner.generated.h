// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintFunctionNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_BlueprintFunctionNodeSpawner_generated_h
#error "BlueprintFunctionNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintFunctionNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintFunctionNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintFunctionNodeSpawner ********************************************
struct Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFunctionNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintFunctionNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintFunctionNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintFunctionNodeSpawner, UBlueprintFieldNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintFunctionNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintFunctionNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintFunctionNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFunctionNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintFunctionNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFunctionNodeSpawner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintFunctionNodeSpawner(UBlueprintFunctionNodeSpawner&&) = delete; \
	UBlueprintFunctionNodeSpawner(const UBlueprintFunctionNodeSpawner&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UBlueprintFunctionNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_32_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_35_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintFunctionNodeSpawner;

// ********** End Class UBlueprintFunctionNodeSpawner **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
