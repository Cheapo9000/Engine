// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyTemplateObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VARIANTMANAGER_PropertyTemplateObject_generated_h
#error "PropertyTemplateObject.generated.h already included, missing '#pragma once' in PropertyTemplateObject.h"
#endif
#define VARIANTMANAGER_PropertyTemplateObject_generated_h

#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyTemplateObject(); \
	friend struct Z_Construct_UClass_UPropertyTemplateObject_Statics; \
public: \
	DECLARE_CLASS(UPropertyTemplateObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VariantManager"), NO_API) \
	DECLARE_SERIALIZER(UPropertyTemplateObject)


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyTemplateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyTemplateObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyTemplateObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyTemplateObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPropertyTemplateObject(UPropertyTemplateObject&&); \
	UPropertyTemplateObject(const UPropertyTemplateObject&); \
public: \
	NO_API virtual ~UPropertyTemplateObject();


#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_27_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGER_API UClass* StaticClass<class UPropertyTemplateObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
