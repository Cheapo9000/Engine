// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectInstanceUsagePrivate.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectInstanceUsagePrivate_generated_h
#error "CustomizableObjectInstanceUsagePrivate.generated.h already included, missing '#pragma once' in CustomizableObjectInstanceUsagePrivate.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectInstanceUsagePrivate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectInstanceUsagePrivate **********************************
struct Z_Construct_UClass_UCustomizableObjectInstanceUsagePrivate_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstanceUsagePrivate_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstanceUsagePrivate_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectInstanceUsagePrivate(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectInstanceUsagePrivate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObjectInstanceUsagePrivate_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectInstanceUsagePrivate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObjectInstanceUsagePrivate_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectInstanceUsagePrivate)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstanceUsagePrivate_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECT_API UCustomizableObjectInstanceUsagePrivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectInstanceUsagePrivate(UCustomizableObjectInstanceUsagePrivate&&) = delete; \
	UCustomizableObjectInstanceUsagePrivate(const UCustomizableObjectInstanceUsagePrivate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableObjectInstanceUsagePrivate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectInstanceUsagePrivate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectInstanceUsagePrivate) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableObjectInstanceUsagePrivate();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstanceUsagePrivate_h_18_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstanceUsagePrivate_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstanceUsagePrivate_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstanceUsagePrivate_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectInstanceUsagePrivate;

// ********** End Class UCustomizableObjectInstanceUsagePrivate ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectInstanceUsagePrivate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
