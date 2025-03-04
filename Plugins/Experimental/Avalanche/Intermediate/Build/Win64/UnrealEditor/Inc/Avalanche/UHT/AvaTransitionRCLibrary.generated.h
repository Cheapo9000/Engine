// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transition/AvaTransitionRCLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URCVirtualPropertyBase;
enum class EAvaTransitionComparisonResult : uint8;
struct FAvaRCControllerId;
#ifdef AVALANCHE_AvaTransitionRCLibrary_generated_h
#error "AvaTransitionRCLibrary.generated.h already included, missing '#pragma once' in AvaTransitionRCLibrary.h"
#endif
#define AVALANCHE_AvaTransitionRCLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionRCLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChangedRCControllers); \
	DECLARE_FUNCTION(execCompareRCControllerValues);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionRCLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionRCLibrary(); \
	friend struct Z_Construct_UClass_UAvaTransitionRCLibrary_Statics; \
public: \
	DECLARE_CLASS(UAvaTransitionRCLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Avalanche"), NO_API) \
	DECLARE_SERIALIZER(UAvaTransitionRCLibrary)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionRCLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaTransitionRCLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransitionRCLibrary(UAvaTransitionRCLibrary&&); \
	UAvaTransitionRCLibrary(const UAvaTransitionRCLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaTransitionRCLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionRCLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionRCLibrary) \
	NO_API virtual ~UAvaTransitionRCLibrary();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionRCLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionRCLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionRCLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionRCLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionRCLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class UAvaTransitionRCLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionRCLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
