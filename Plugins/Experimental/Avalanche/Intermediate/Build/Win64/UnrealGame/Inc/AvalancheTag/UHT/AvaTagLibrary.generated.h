// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTagLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvaTag;
struct FAvaTagHandle;
struct FAvaTagHandleContainer;
struct FAvaTagSoftHandle;
#ifdef AVALANCHETAG_AvaTagLibrary_generated_h
#error "AvaTagLibrary.generated.h already included, missing '#pragma once' in AvaTagLibrary.h"
#endif
#define AVALANCHETAG_AvaTagLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResolveTagSoftHandle); \
	DECLARE_FUNCTION(execResolveTagHandles); \
	DECLARE_FUNCTION(execResolveTagHandle);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTagLibrary(); \
	friend struct Z_Construct_UClass_UAvaTagLibrary_Statics; \
public: \
	DECLARE_CLASS(UAvaTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheTag"), AVALANCHETAG_API) \
	DECLARE_SERIALIZER(UAvaTagLibrary)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETAG_API UAvaTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTagLibrary(UAvaTagLibrary&&); \
	UAvaTagLibrary(const UAvaTagLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETAG_API, UAvaTagLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTagLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTagLibrary) \
	AVALANCHETAG_API virtual ~UAvaTagLibrary();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETAG_API UClass* StaticClass<class UAvaTagLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
