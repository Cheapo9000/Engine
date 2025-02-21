// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tags/AvaTagAttribute.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvaTagHandle;
#ifdef AVALANCHEATTRIBUTE_AvaTagAttribute_generated_h
#error "AvaTagAttribute.generated.h already included, missing '#pragma once' in AvaTagAttribute.h"
#endif
#define AVALANCHEATTRIBUTE_AvaTagAttribute_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTag);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_ACCESSORS \
static void SetTag_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTagAttribute(); \
	friend struct Z_Construct_UClass_UAvaTagAttribute_Statics; \
public: \
	DECLARE_CLASS(UAvaTagAttribute, UAvaTagAttributeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheAttribute"), AVALANCHEATTRIBUTE_API) \
	DECLARE_SERIALIZER(UAvaTagAttribute)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEATTRIBUTE_API UAvaTagAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTagAttribute(UAvaTagAttribute&&); \
	UAvaTagAttribute(const UAvaTagAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEATTRIBUTE_API, UAvaTagAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTagAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTagAttribute) \
	AVALANCHEATTRIBUTE_API virtual ~UAvaTagAttribute();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEATTRIBUTE_API UClass* StaticClass<class UAvaTagAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
