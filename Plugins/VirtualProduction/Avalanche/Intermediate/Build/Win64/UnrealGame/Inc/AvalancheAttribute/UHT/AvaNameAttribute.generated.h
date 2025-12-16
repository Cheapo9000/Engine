// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaNameAttribute.h"

#ifdef AVALANCHEATTRIBUTE_AvaNameAttribute_generated_h
#error "AvaNameAttribute.generated.h already included, missing '#pragma once' in AvaNameAttribute.h"
#endif
#define AVALANCHEATTRIBUTE_AvaNameAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaNameAttribute ********************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetName);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_ACCESSORS \
static void SetName_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaNameAttribute_Statics;
AVALANCHEATTRIBUTE_API UClass* Z_Construct_UClass_UAvaNameAttribute_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaNameAttribute(); \
	friend struct ::Z_Construct_UClass_UAvaNameAttribute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEATTRIBUTE_API UClass* ::Z_Construct_UClass_UAvaNameAttribute_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaNameAttribute, UAvaAttribute, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheAttribute"), Z_Construct_UClass_UAvaNameAttribute_NoRegister) \
	DECLARE_SERIALIZER(UAvaNameAttribute)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEATTRIBUTE_API UAvaNameAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaNameAttribute(UAvaNameAttribute&&) = delete; \
	UAvaNameAttribute(const UAvaNameAttribute&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEATTRIBUTE_API, UAvaNameAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaNameAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaNameAttribute) \
	AVALANCHEATTRIBUTE_API virtual ~UAvaNameAttribute();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaNameAttribute;

// ********** End Class UAvaNameAttribute **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_AvaNameAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
