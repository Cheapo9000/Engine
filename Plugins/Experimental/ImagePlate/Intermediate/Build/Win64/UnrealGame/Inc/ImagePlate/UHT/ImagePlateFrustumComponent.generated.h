// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImagePlateFrustumComponent.h"

#ifdef IMAGEPLATE_ImagePlateFrustumComponent_generated_h
#error "ImagePlateFrustumComponent.generated.h already included, missing '#pragma once' in ImagePlateFrustumComponent.h"
#endif
#define IMAGEPLATE_ImagePlateFrustumComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UImagePlateFrustumComponent **********************************************
struct Z_Construct_UClass_UImagePlateFrustumComponent_Statics;
IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateFrustumComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImagePlateFrustumComponent(); \
	friend struct ::Z_Construct_UClass_UImagePlateFrustumComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMAGEPLATE_API UClass* ::Z_Construct_UClass_UImagePlateFrustumComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UImagePlateFrustumComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImagePlate"), Z_Construct_UClass_UImagePlateFrustumComponent_NoRegister) \
	DECLARE_SERIALIZER(UImagePlateFrustumComponent)


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImagePlateFrustumComponent(UImagePlateFrustumComponent&&) = delete; \
	UImagePlateFrustumComponent(const UImagePlateFrustumComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMAGEPLATE_API, UImagePlateFrustumComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImagePlateFrustumComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImagePlateFrustumComponent) \
	IMAGEPLATE_API virtual ~UImagePlateFrustumComponent();


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImagePlateFrustumComponent;

// ********** End Class UImagePlateFrustumComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Private_ImagePlateFrustumComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
