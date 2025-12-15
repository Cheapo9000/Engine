// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintFieldNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_BlueprintFieldNodeSpawner_generated_h
#error "BlueprintFieldNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintFieldNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintFieldNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintFieldNodeSpawner ***********************************************
struct Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintFieldNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintFieldNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintFieldNodeSpawner, UBlueprintNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintFieldNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintFieldNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintFieldNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFieldNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintFieldNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFieldNodeSpawner); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintFieldNodeSpawner(UBlueprintFieldNodeSpawner&&) = delete; \
	UBlueprintFieldNodeSpawner(const UBlueprintFieldNodeSpawner&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UBlueprintFieldNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_37_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_40_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintFieldNodeSpawner;

// ********** End Class UBlueprintFieldNodeSpawner *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
