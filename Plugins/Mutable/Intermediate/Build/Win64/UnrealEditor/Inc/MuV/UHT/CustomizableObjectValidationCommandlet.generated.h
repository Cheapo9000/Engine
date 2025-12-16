// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuV/CustomizableObjectValidationCommandlet.h"

#ifdef MUTABLEVALIDATION_CustomizableObjectValidationCommandlet_generated_h
#error "CustomizableObjectValidationCommandlet.generated.h already included, missing '#pragma once' in CustomizableObjectValidationCommandlet.h"
#endif
#define MUTABLEVALIDATION_CustomizableObjectValidationCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCustomizableObjectValidationCommandlet **********************************
struct Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics;
MUTABLEVALIDATION_API UClass* Z_Construct_UClass_UCustomizableObjectValidationCommandlet_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CustomizableObjectValidationCommandlet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectValidationCommandlet(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUTABLEVALIDATION_API UClass* ::Z_Construct_UClass_UCustomizableObjectValidationCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectValidationCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MutableValidation"), Z_Construct_UClass_UCustomizableObjectValidationCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectValidationCommandlet)


#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CustomizableObjectValidationCommandlet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizableObjectValidationCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectValidationCommandlet(UCustomizableObjectValidationCommandlet&&) = delete; \
	UCustomizableObjectValidationCommandlet(const UCustomizableObjectValidationCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectValidationCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectValidationCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectValidationCommandlet) \
	NO_API virtual ~UCustomizableObjectValidationCommandlet();


#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CustomizableObjectValidationCommandlet_h_12_PROLOG
#define FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CustomizableObjectValidationCommandlet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CustomizableObjectValidationCommandlet_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CustomizableObjectValidationCommandlet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectValidationCommandlet;

// ********** End Class UCustomizableObjectValidationCommandlet ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_MutableValidation_Private_MuV_CustomizableObjectValidationCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
