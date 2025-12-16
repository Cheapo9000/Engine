// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectFactory.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectFactory_generated_h
#error "CustomizableObjectFactory.generated.h already included, missing '#pragma once' in CustomizableObjectFactory.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectFactory ***********************************************
struct Z_Construct_UClass_UCustomizableObjectFactory_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectFactory_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectFactory_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectFactory(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectFactory_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectFactory)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectFactory_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectFactory(UCustomizableObjectFactory&&) = delete; \
	UCustomizableObjectFactory(const UCustomizableObjectFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectFactory) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectFactory();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectFactory_h_26_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectFactory_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectFactory_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectFactory_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectFactory;

// ********** End Class UCustomizableObjectFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
