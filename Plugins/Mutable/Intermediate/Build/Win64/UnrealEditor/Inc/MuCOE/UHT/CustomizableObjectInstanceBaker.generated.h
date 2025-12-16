// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectInstanceBaker.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectInstanceBaker_generated_h
#error "CustomizableObjectInstanceBaker.generated.h already included, missing '#pragma once' in CustomizableObjectInstanceBaker.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectInstanceBaker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectInstanceBaker *****************************************
struct Z_Construct_UClass_UCustomizableObjectInstanceBaker_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectInstanceBaker_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceBaker_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectInstanceBaker(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectInstanceBaker_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectInstanceBaker_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectInstanceBaker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectInstanceBaker_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectInstanceBaker)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceBaker_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectInstanceBaker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectInstanceBaker(UCustomizableObjectInstanceBaker&&) = delete; \
	UCustomizableObjectInstanceBaker(const UCustomizableObjectInstanceBaker&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectInstanceBaker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectInstanceBaker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectInstanceBaker) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectInstanceBaker();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceBaker_h_34_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceBaker_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceBaker_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceBaker_h_38_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectInstanceBaker;

// ********** End Class UCustomizableObjectInstanceBaker *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceBaker_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
