// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectInstanceFactory.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectInstanceFactory_generated_h
#error "CustomizableObjectInstanceFactory.generated.h already included, missing '#pragma once' in CustomizableObjectInstanceFactory.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectInstanceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectInstanceFactory ***************************************
struct Z_Construct_UClass_UCustomizableObjectInstanceFactory_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectInstanceFactory_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectInstanceFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCustomizableObjectInstanceFactory(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectInstanceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectInstanceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectInstanceFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectInstanceFactory_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectInstanceFactory)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectInstanceFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectInstanceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectInstanceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectInstanceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectInstanceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectInstanceFactory(UCustomizableObjectInstanceFactory&&) = delete; \
	UCustomizableObjectInstanceFactory(const UCustomizableObjectInstanceFactory&) = delete; \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectInstanceFactory();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectInstanceFactory_h_14_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectInstanceFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectInstanceFactory_h_17_INCLASS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectInstanceFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectInstanceFactory;

// ********** End Class UCustomizableObjectInstanceFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectInstanceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
