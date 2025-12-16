// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyTemplateObject.h"

#ifdef VARIANTMANAGER_PropertyTemplateObject_generated_h
#error "PropertyTemplateObject.generated.h already included, missing '#pragma once' in PropertyTemplateObject.h"
#endif
#define VARIANTMANAGER_PropertyTemplateObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyTemplateObject **************************************************
struct Z_Construct_UClass_UPropertyTemplateObject_Statics;
VARIANTMANAGER_API UClass* Z_Construct_UClass_UPropertyTemplateObject_NoRegister();

#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyTemplateObject(); \
	friend struct ::Z_Construct_UClass_UPropertyTemplateObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VARIANTMANAGER_API UClass* ::Z_Construct_UClass_UPropertyTemplateObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyTemplateObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VariantManager"), Z_Construct_UClass_UPropertyTemplateObject_NoRegister) \
	DECLARE_SERIALIZER(UPropertyTemplateObject)


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyTemplateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyTemplateObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyTemplateObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyTemplateObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyTemplateObject(UPropertyTemplateObject&&) = delete; \
	UPropertyTemplateObject(const UPropertyTemplateObject&) = delete; \
	NO_API virtual ~UPropertyTemplateObject();


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_27_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyTemplateObject;

// ********** End Class UPropertyTemplateObject ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
