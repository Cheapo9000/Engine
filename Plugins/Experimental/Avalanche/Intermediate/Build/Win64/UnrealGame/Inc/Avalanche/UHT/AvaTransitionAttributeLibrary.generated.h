// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transition/AvaTransitionAttributeLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAvaTagHandle;
#ifdef AVALANCHE_AvaTransitionAttributeLibrary_generated_h
#error "AvaTransitionAttributeLibrary.generated.h already included, missing '#pragma once' in AvaTransitionAttributeLibrary.h"
#endif
#define AVALANCHE_AvaTransitionAttributeLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionAttributeLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execContainsNameAttribute); \
	DECLARE_FUNCTION(execRemoveNameAttribute); \
	DECLARE_FUNCTION(execAddNameAttribute); \
	DECLARE_FUNCTION(execContainsTagAttribute); \
	DECLARE_FUNCTION(execRemoveTagAttribute); \
	DECLARE_FUNCTION(execAddTagAttribute);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionAttributeLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionAttributeLibrary(); \
	friend struct Z_Construct_UClass_UAvaTransitionAttributeLibrary_Statics; \
public: \
	DECLARE_CLASS(UAvaTransitionAttributeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Avalanche"), NO_API) \
	DECLARE_SERIALIZER(UAvaTransitionAttributeLibrary)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionAttributeLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaTransitionAttributeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTransitionAttributeLibrary(UAvaTransitionAttributeLibrary&&); \
	UAvaTransitionAttributeLibrary(const UAvaTransitionAttributeLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaTransitionAttributeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionAttributeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTransitionAttributeLibrary) \
	NO_API virtual ~UAvaTransitionAttributeLibrary();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionAttributeLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionAttributeLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionAttributeLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionAttributeLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionAttributeLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class UAvaTransitionAttributeLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Private_Transition_AvaTransitionAttributeLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
