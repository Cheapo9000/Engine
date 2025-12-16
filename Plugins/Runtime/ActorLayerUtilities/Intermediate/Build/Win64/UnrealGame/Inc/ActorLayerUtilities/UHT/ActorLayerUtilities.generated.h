// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorLayerUtilities.h"

#ifdef ACTORLAYERUTILITIES_ActorLayerUtilities_generated_h
#error "ActorLayerUtilities.generated.h already included, missing '#pragma once' in ActorLayerUtilities.h"
#endif
#define ACTORLAYERUTILITIES_ActorLayerUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FActorLayer;

// ********** Begin ScriptStruct FActorLayer *******************************************************
struct Z_Construct_UScriptStruct_FActorLayer_Statics;
#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorLayer_Statics; \
	ACTORLAYERUTILITIES_API static class UScriptStruct* StaticStruct();


struct FActorLayer;
// ********** End ScriptStruct FActorLayer *********************************************************

// ********** Begin Class ULayersBlueprintLibrary **************************************************
#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveActorFromLayer); \
	DECLARE_FUNCTION(execAddActorToLayer); \
	DECLARE_FUNCTION(execGetActors);


struct Z_Construct_UClass_ULayersBlueprintLibrary_Statics;
ACTORLAYERUTILITIES_API UClass* Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayersBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_ULayersBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORLAYERUTILITIES_API UClass* ::Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULayersBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorLayerUtilities"), Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULayersBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayersBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULayersBlueprintLibrary(ULayersBlueprintLibrary&&) = delete; \
	ULayersBlueprintLibrary(const ULayersBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayersBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayersBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayersBlueprintLibrary) \
	NO_API virtual ~ULayersBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_28_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULayersBlueprintLibrary;

// ********** End Class ULayersBlueprintLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
