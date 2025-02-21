// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaAttribute.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEATTRIBUTE_AvaAttribute_generated_h
#error "AvaAttribute.generated.h already included, missing '#pragma once' in AvaAttribute.h"
#endif
#define AVALANCHEATTRIBUTE_AvaAttribute_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaAttribute_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaAttribute(); \
	friend struct Z_Construct_UClass_UAvaAttribute_Statics; \
public: \
	DECLARE_CLASS(UAvaAttribute, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheAttribute"), AVALANCHEATTRIBUTE_API) \
	DECLARE_SERIALIZER(UAvaAttribute)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaAttribute_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEATTRIBUTE_API UAvaAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaAttribute(UAvaAttribute&&); \
	UAvaAttribute(const UAvaAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEATTRIBUTE_API, UAvaAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaAttribute); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaAttribute) \
	AVALANCHEATTRIBUTE_API virtual ~UAvaAttribute();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaAttribute_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaAttribute_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaAttribute_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaAttribute_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEATTRIBUTE_API UClass* StaticClass<class UAvaAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheAttribute_Public_AvaAttribute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
