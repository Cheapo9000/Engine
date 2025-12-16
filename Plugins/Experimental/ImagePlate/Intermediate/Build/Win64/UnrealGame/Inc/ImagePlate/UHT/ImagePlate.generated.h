// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImagePlate.h"

#ifdef IMAGEPLATE_ImagePlate_generated_h
#error "ImagePlate.generated.h already included, missing '#pragma once' in ImagePlate.h"
#endif
#define IMAGEPLATE_ImagePlate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AImagePlate **************************************************************
struct Z_Construct_UClass_AImagePlate_Statics;
IMAGEPLATE_API UClass* Z_Construct_UClass_AImagePlate_NoRegister();

#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAImagePlate(); \
	friend struct ::Z_Construct_UClass_AImagePlate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMAGEPLATE_API UClass* ::Z_Construct_UClass_AImagePlate_NoRegister(); \
public: \
	DECLARE_CLASS2(AImagePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImagePlate"), Z_Construct_UClass_AImagePlate_NoRegister) \
	DECLARE_SERIALIZER(AImagePlate)


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AImagePlate(AImagePlate&&) = delete; \
	AImagePlate(const AImagePlate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMAGEPLATE_API, AImagePlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImagePlate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AImagePlate) \
	IMAGEPLATE_API virtual ~AImagePlate();


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AImagePlate;

// ********** End Class AImagePlate ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
