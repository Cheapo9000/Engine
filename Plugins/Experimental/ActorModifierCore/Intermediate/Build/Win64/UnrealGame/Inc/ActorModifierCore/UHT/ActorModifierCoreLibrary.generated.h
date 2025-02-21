// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/Utilities/ActorModifierCoreLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorModifierCoreBase;
class UActorModifierCoreStack;
enum class EActorModifierCoreStackPosition : uint8;
struct FActorModifierCoreCloneOperation;
struct FActorModifierCoreInsertOperation;
struct FActorModifierCoreMetadata;
struct FActorModifierCoreMoveOperation;
struct FActorModifierCoreRemoveOperation;
#ifdef ACTORMODIFIERCORE_ActorModifierCoreLibrary_generated_h
#error "ActorModifierCoreLibrary.generated.h already included, missing '#pragma once' in ActorModifierCoreLibrary.h"
#endif
#define ACTORMODIFIERCORE_ActorModifierCoreLibrary_generated_h

#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Utilities_ActorModifierCoreLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetModifierMetadataCompatibilityRule); \
	DECLARE_FUNCTION(execAddModifierMetadataDependency); \
	DECLARE_FUNCTION(execSetModifierMetadataDescription); \
	DECLARE_FUNCTION(execSetModifierMetadataDisplayName); \
	DECLARE_FUNCTION(execSetModifierMetadataCategory); \
	DECLARE_FUNCTION(execSetModifierMetadataName); \
	DECLARE_FUNCTION(execGetAvailableModifiers); \
	DECLARE_FUNCTION(execGetSupportedModifiers); \
	DECLARE_FUNCTION(execContainsModifier); \
	DECLARE_FUNCTION(execFindModifiersByName); \
	DECLARE_FUNCTION(execFindModifiersByClass); \
	DECLARE_FUNCTION(execFindModifierByName); \
	DECLARE_FUNCTION(execFindModifierByClass); \
	DECLARE_FUNCTION(execGetRequiredModifiers); \
	DECLARE_FUNCTION(execGetDependentModifiers); \
	DECLARE_FUNCTION(execGetStackModifiers); \
	DECLARE_FUNCTION(execGetModifierClass); \
	DECLARE_FUNCTION(execGetModifiersByCategory); \
	DECLARE_FUNCTION(execGetModifierCategories); \
	DECLARE_FUNCTION(execGetModifierCategoryByClass); \
	DECLARE_FUNCTION(execGetModifierCategory); \
	DECLARE_FUNCTION(execGetModifierNameByClass); \
	DECLARE_FUNCTION(execGetModifierName); \
	DECLARE_FUNCTION(execGetModifierActor); \
	DECLARE_FUNCTION(execGetModifierStack); \
	DECLARE_FUNCTION(execIsModifierEnabled); \
	DECLARE_FUNCTION(execEnableModifier); \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execMoveModifier); \
	DECLARE_FUNCTION(execCloneModifier); \
	DECLARE_FUNCTION(execInsertModifier); \
	DECLARE_FUNCTION(execFindModifierStack);


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Utilities_ActorModifierCoreLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorModifierCoreLibrary(); \
	friend struct Z_Construct_UClass_UActorModifierCoreLibrary_Statics; \
public: \
	DECLARE_CLASS(UActorModifierCoreLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorModifierCore"), ACTORMODIFIERCORE_API) \
	DECLARE_SERIALIZER(UActorModifierCoreLibrary)


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Utilities_ActorModifierCoreLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTORMODIFIERCORE_API UActorModifierCoreLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorModifierCoreLibrary(UActorModifierCoreLibrary&&); \
	UActorModifierCoreLibrary(const UActorModifierCoreLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTORMODIFIERCORE_API, UActorModifierCoreLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorModifierCoreLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorModifierCoreLibrary) \
	ACTORMODIFIERCORE_API virtual ~UActorModifierCoreLibrary();


#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Utilities_ActorModifierCoreLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Utilities_ActorModifierCoreLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Utilities_ActorModifierCoreLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Utilities_ActorModifierCoreLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Utilities_ActorModifierCoreLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORMODIFIERCORE_API UClass* StaticClass<class UActorModifierCoreLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ActorModifierCore_Source_ActorModifierCore_Public_Modifiers_Utilities_ActorModifierCoreLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
