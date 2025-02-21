// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tags/AvaTagAttributeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEATTRIBUTE_AvaTagAttributeBase_generated_h
#error "AvaTagAttributeBase.generated.h already included, missing '#pragma once' in AvaTagAttributeBase.h"
#endif
#define AVALANCHEATTRIBUTE_AvaTagAttributeBase_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttributeBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTagAttributeBase(); \
	friend struct Z_Construct_UClass_UAvaTagAttributeBase_Statics; \
public: \
	DECLARE_CLASS(UAvaTagAttributeBase, UAvaAttribute, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheAttribute"), AVALANCHEATTRIBUTE_API) \
	DECLARE_SERIALIZER(UAvaTagAttributeBase)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttributeBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEATTRIBUTE_API UAvaTagAttributeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaTagAttributeBase(UAvaTagAttributeBase&&); \
	UAvaTagAttributeBase(const UAvaTagAttributeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEATTRIBUTE_API, UAvaTagAttributeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTagAttributeBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaTagAttributeBase) \
	AVALANCHEATTRIBUTE_API virtual ~UAvaTagAttributeBase();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttributeBase_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttributeBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttributeBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttributeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEATTRIBUTE_API UClass* StaticClass<class UAvaTagAttributeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_Tags_AvaTagAttributeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
