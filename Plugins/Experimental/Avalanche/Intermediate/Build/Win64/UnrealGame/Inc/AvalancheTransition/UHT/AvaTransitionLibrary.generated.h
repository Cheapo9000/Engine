// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTransitionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAvaTransitionTree;
class UObject;
class UWorld;
enum class EAvaTransitionComparisonResult : uint8;
enum class EAvaTransitionLayerCompareType : uint8;
enum class EAvaTransitionType : uint8;
struct FAvaTagHandleContainer;
#ifdef AVALANCHETRANSITION_AvaTransitionLibrary_generated_h
#error "AvaTransitionLibrary.generated.h already included, missing '#pragma once' in AvaTransitionLibrary.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_AvaTransitionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTransitionTree); \
	DECLARE_FUNCTION(execAreScenesTransitioning); \
	DECLARE_FUNCTION(execGetTransitionType); \
	DECLARE_FUNCTION(execIsTransitionActiveInLayer);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_AvaTransitionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionLibrary(); \
	friend struct Z_Construct_UClass_UAvaTransitionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAvaTransitionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), NO_API) \
	DECLARE_SERIALIZER(UAvaTransitionLibrary)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_AvaTransitionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaTransitionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransitionLibrary(UAvaTransitionLibrary&&); \
	UAvaTransitionLibrary(const UAvaTransitionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaTransitionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionLibrary) \
	NO_API virtual ~UAvaTransitionLibrary();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_AvaTransitionLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_AvaTransitionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_AvaTransitionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_AvaTransitionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_AvaTransitionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETRANSITION_API UClass* StaticClass<class UAvaTransitionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTransition_Private_AvaTransitionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
