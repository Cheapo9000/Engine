// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tags/AvaTagContainerAttribute.h"

#ifdef AVALANCHEATTRIBUTE_AvaTagContainerAttribute_generated_h
#error "AvaTagContainerAttribute.generated.h already included, missing '#pragma once' in AvaTagContainerAttribute.h"
#endif
#define AVALANCHEATTRIBUTE_AvaTagContainerAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvaTagHandleContainer;

// ********** Begin Class UAvaTagContainerAttribute ************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTagContainer);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_13_ACCESSORS \
static void SetTagContainer_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaTagContainerAttribute_Statics;
AVALANCHEATTRIBUTE_API UClass* Z_Construct_UClass_UAvaTagContainerAttribute_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTagContainerAttribute(); \
	friend struct ::Z_Construct_UClass_UAvaTagContainerAttribute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEATTRIBUTE_API UClass* ::Z_Construct_UClass_UAvaTagContainerAttribute_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTagContainerAttribute, UAvaTagAttributeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheAttribute"), Z_Construct_UClass_UAvaTagContainerAttribute_NoRegister) \
	DECLARE_SERIALIZER(UAvaTagContainerAttribute)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEATTRIBUTE_API UAvaTagContainerAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTagContainerAttribute(UAvaTagContainerAttribute&&) = delete; \
	UAvaTagContainerAttribute(const UAvaTagContainerAttribute&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEATTRIBUTE_API, UAvaTagContainerAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTagContainerAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTagContainerAttribute) \
	AVALANCHEATTRIBUTE_API virtual ~UAvaTagContainerAttribute();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTagContainerAttribute;

// ********** End Class UAvaTagContainerAttribute **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagContainerAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
