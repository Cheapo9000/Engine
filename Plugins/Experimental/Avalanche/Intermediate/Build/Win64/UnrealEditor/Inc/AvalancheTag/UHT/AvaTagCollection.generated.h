// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaTagCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHETAG_AvaTagCollection_generated_h
#error "AvaTagCollection.generated.h already included, missing '#pragma once' in AvaTagCollection.h"
#endif
#define AVALANCHETAG_AvaTagCollection_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagCollection_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTagCollection(); \
	friend struct Z_Construct_UClass_UAvaTagCollection_Statics; \
public: \
	DECLARE_CLASS(UAvaTagCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheTag"), AVALANCHETAG_API) \
	DECLARE_SERIALIZER(UAvaTagCollection)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagCollection_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHETAG_API UAvaTagCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTagCollection(UAvaTagCollection&&); \
	UAvaTagCollection(const UAvaTagCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETAG_API, UAvaTagCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTagCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTagCollection) \
	AVALANCHETAG_API virtual ~UAvaTagCollection();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagCollection_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagCollection_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagCollection_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagCollection_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHETAG_API UClass* StaticClass<class UAvaTagCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheTag_Public_AvaTagCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
