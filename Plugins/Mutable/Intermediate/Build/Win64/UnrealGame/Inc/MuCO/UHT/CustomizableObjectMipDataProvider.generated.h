// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectMipDataProvider.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectMipDataProvider_generated_h
#error "CustomizableObjectMipDataProvider.generated.h already included, missing '#pragma once' in CustomizableObjectMipDataProvider.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectMipDataProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMutableTextureMipDataProviderFactory ************************************
struct Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UMutableTextureMipDataProviderFactory_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectMipDataProvider_h_154_INCLASS \
private: \
	static void StaticRegisterNativesUMutableTextureMipDataProviderFactory(); \
	friend struct ::Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UMutableTextureMipDataProviderFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UMutableTextureMipDataProviderFactory, UTextureMipDataProviderFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UMutableTextureMipDataProviderFactory_NoRegister) \
	DECLARE_SERIALIZER(UMutableTextureMipDataProviderFactory)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectMipDataProvider_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECT_API UMutableTextureMipDataProviderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMutableTextureMipDataProviderFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UMutableTextureMipDataProviderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMutableTextureMipDataProviderFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMutableTextureMipDataProviderFactory(UMutableTextureMipDataProviderFactory&&) = delete; \
	UMutableTextureMipDataProviderFactory(const UMutableTextureMipDataProviderFactory&) = delete; \
	CUSTOMIZABLEOBJECT_API virtual ~UMutableTextureMipDataProviderFactory();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectMipDataProvider_h_151_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectMipDataProvider_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectMipDataProvider_h_154_INCLASS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectMipDataProvider_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMutableTextureMipDataProviderFactory;

// ********** End Class UMutableTextureMipDataProviderFactory **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Internal_MuCO_CustomizableObjectMipDataProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
