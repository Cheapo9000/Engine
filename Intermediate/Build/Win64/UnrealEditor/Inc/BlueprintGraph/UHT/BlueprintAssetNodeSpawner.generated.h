// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintAssetNodeSpawner.h"

#ifdef BLUEPRINTGRAPH_BlueprintAssetNodeSpawner_generated_h
#error "BlueprintAssetNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintAssetNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintAssetNodeSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintAssetNodeSpawner ***********************************************
struct Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintAssetNodeSpawner_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintAssetNodeSpawner(); \
	friend struct ::Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UBlueprintAssetNodeSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintAssetNodeSpawner, UBlueprintNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UBlueprintAssetNodeSpawner_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintAssetNodeSpawner)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UBlueprintAssetNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintAssetNodeSpawner(UBlueprintAssetNodeSpawner&&) = delete; \
	UBlueprintAssetNodeSpawner(const UBlueprintAssetNodeSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UBlueprintAssetNodeSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintAssetNodeSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintAssetNodeSpawner) \
	BLUEPRINTGRAPH_API virtual ~UBlueprintAssetNodeSpawner();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_26_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintAssetNodeSpawner;

// ********** End Class UBlueprintAssetNodeSpawner *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
