// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaNameAttribute.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEATTRIBUTE_AvaNameAttribute_generated_h
#error "AvaNameAttribute.generated.h already included, missing '#pragma once' in AvaNameAttribute.h"
#endif
#define AVALANCHEATTRIBUTE_AvaNameAttribute_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetName);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_ACCESSORS \
static void SetName_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaNameAttribute(); \
	friend struct Z_Construct_UClass_UAvaNameAttribute_Statics; \
public: \
	DECLARE_CLASS(UAvaNameAttribute, UAvaAttribute, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheAttribute"), AVALANCHEATTRIBUTE_API) \
	DECLARE_SERIALIZER(UAvaNameAttribute)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEATTRIBUTE_API UAvaNameAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaNameAttribute(UAvaNameAttribute&&); \
	UAvaNameAttribute(const UAvaNameAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEATTRIBUTE_API, UAvaNameAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaNameAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaNameAttribute) \
	AVALANCHEATTRIBUTE_API virtual ~UAvaNameAttribute();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEATTRIBUTE_API UClass* StaticClass<class UAvaNameAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
