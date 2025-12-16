// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectExtension.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectExtension_generated_h
#error "CustomizableObjectExtension.generated.h already included, missing '#pragma once' in CustomizableObjectExtension.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectExtension *********************************************
struct Z_Construct_UClass_UCustomizableObjectExtension_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectExtension_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectExtension_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectExtension(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UCustomizableObjectExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectExtension, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UCustomizableObjectExtension_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectExtension)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectExtension_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECT_API UCustomizableObjectExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectExtension(UCustomizableObjectExtension&&) = delete; \
	UCustomizableObjectExtension(const UCustomizableObjectExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UCustomizableObjectExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectExtension) \
	CUSTOMIZABLEOBJECT_API virtual ~UCustomizableObjectExtension();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectExtension_h_85_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectExtension_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectExtension_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectExtension_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectExtension;

// ********** End Class UCustomizableObjectExtension ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
