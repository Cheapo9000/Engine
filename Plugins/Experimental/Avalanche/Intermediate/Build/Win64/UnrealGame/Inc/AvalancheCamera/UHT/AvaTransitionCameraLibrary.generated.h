// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transition/AvaTransitionCameraLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef AVALANCHECAMERA_AvaTransitionCameraLibrary_generated_h
#error "AvaTransitionCameraLibrary.generated.h already included, missing '#pragma once' in AvaTransitionCameraLibrary.h"
#endif
#define AVALANCHECAMERA_AvaTransitionCameraLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheCamera_Private_Transition_AvaTransitionCameraLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConditionallyUpdateViewTarget);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheCamera_Private_Transition_AvaTransitionCameraLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionCameraLibrary(); \
	friend struct Z_Construct_UClass_UAvaTransitionCameraLibrary_Statics; \
public: \
	DECLARE_CLASS(UAvaTransitionCameraLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheCamera"), NO_API) \
	DECLARE_SERIALIZER(UAvaTransitionCameraLibrary)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheCamera_Private_Transition_AvaTransitionCameraLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaTransitionCameraLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransitionCameraLibrary(UAvaTransitionCameraLibrary&&); \
	UAvaTransitionCameraLibrary(const UAvaTransitionCameraLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaTransitionCameraLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionCameraLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionCameraLibrary) \
	NO_API virtual ~UAvaTransitionCameraLibrary();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheCamera_Private_Transition_AvaTransitionCameraLibrary_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheCamera_Private_Transition_AvaTransitionCameraLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheCamera_Private_Transition_AvaTransitionCameraLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheCamera_Private_Transition_AvaTransitionCameraLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheCamera_Private_Transition_AvaTransitionCameraLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHECAMERA_API UClass* StaticClass<class UAvaTransitionCameraLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheCamera_Private_Transition_AvaTransitionCameraLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
