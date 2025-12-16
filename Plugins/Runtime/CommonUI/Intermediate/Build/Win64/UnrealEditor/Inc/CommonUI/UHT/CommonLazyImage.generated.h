// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonLazyImage.h"

#ifdef COMMONUI_CommonLazyImage_generated_h
#error "CommonLazyImage.generated.h already included, missing '#pragma once' in CommonLazyImage.h"
#endif
#define COMMONUI_CommonLazyImage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UObject;
class UTexture2D;

// ********** Begin Class UCommonLazyImage *********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMaterialTextureParamName); \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execSetBrushFromLazyDisplayAsset); \
	DECLARE_FUNCTION(execSetBrushFromLazyMaterial); \
	DECLARE_FUNCTION(execSetBrushFromLazyTexture);


struct Z_Construct_UClass_UCommonLazyImage_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCommonLazyImage(); \
	friend struct ::Z_Construct_UClass_UCommonLazyImage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonLazyImage_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonLazyImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonLazyImage_NoRegister) \
	DECLARE_SERIALIZER(UCommonLazyImage)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonLazyImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLazyImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonLazyImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyImage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonLazyImage(UCommonLazyImage&&) = delete; \
	UCommonLazyImage(const UCommonLazyImage&) = delete; \
	COMMONUI_API virtual ~UCommonLazyImage();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonLazyImage;

// ********** End Class UCommonLazyImage ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonLazyImage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
