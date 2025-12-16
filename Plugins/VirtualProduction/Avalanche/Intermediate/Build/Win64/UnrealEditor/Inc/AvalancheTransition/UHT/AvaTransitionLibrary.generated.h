// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTransitionLibrary.h"

#ifdef AVALANCHETRANSITION_AvaTransitionLibrary_generated_h
#error "AvaTransitionLibrary.generated.h already included, missing '#pragma once' in AvaTransitionLibrary.h"
#endif
#define AVALANCHETRANSITION_AvaTransitionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAvaTransitionTree;
class UObject;
class UWorld;
enum class EAvaTransitionComparisonResult : uint8;
enum class EAvaTransitionLayerCompareType : uint8;
enum class EAvaTransitionType : uint8;
enum class EAvaTransitionTypeFilter : uint8;
struct FAvaTagHandleContainer;

// ********** Begin Class UAvaTransitionLibrary ****************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTransitionTree); \
	DECLARE_FUNCTION(execAreScenesTransitioning); \
	DECLARE_FUNCTION(execGetTransitionType); \
	DECLARE_FUNCTION(execIsTransitionActiveInLayer); \
	DECLARE_FUNCTION(execIsTransitionActiveInLayers);


struct Z_Construct_UClass_UAvaTransitionLibrary_Statics;
AVALANCHETRANSITION_API UClass* Z_Construct_UClass_UAvaTransitionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionLibrary(); \
	friend struct ::Z_Construct_UClass_UAvaTransitionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETRANSITION_API UClass* ::Z_Construct_UClass_UAvaTransitionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTransitionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheTransition"), Z_Construct_UClass_UAvaTransitionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAvaTransitionLibrary)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETRANSITION_API UAvaTransitionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTransitionLibrary(UAvaTransitionLibrary&&) = delete; \
	UAvaTransitionLibrary(const UAvaTransitionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITION_API, UAvaTransitionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionLibrary) \
	AVALANCHETRANSITION_API virtual ~UAvaTransitionLibrary();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionLibrary_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTransitionLibrary;

// ********** End Class UAvaTransitionLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransition_Public_AvaTransitionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
