// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tags/AvaTagAttribute.h"

#ifdef AVALANCHEATTRIBUTE_AvaTagAttribute_generated_h
#error "AvaTagAttribute.generated.h already included, missing '#pragma once' in AvaTagAttribute.h"
#endif
#define AVALANCHEATTRIBUTE_AvaTagAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvaTagHandle;

// ********** Begin Class UAvaTagAttribute *********************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTag);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_ACCESSORS \
static void SetTag_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaTagAttribute_Statics;
AVALANCHEATTRIBUTE_API UClass* Z_Construct_UClass_UAvaTagAttribute_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTagAttribute(); \
	friend struct ::Z_Construct_UClass_UAvaTagAttribute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEATTRIBUTE_API UClass* ::Z_Construct_UClass_UAvaTagAttribute_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTagAttribute, UAvaTagAttributeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheAttribute"), Z_Construct_UClass_UAvaTagAttribute_NoRegister) \
	DECLARE_SERIALIZER(UAvaTagAttribute)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEATTRIBUTE_API UAvaTagAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTagAttribute(UAvaTagAttribute&&) = delete; \
	UAvaTagAttribute(const UAvaTagAttribute&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEATTRIBUTE_API, UAvaTagAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTagAttribute); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTagAttribute) \
	AVALANCHEATTRIBUTE_API virtual ~UAvaTagAttribute();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTagAttribute;

// ********** End Class UAvaTagAttribute ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
