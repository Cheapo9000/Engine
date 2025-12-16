// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImagePlateComponent.h"

#ifdef IMAGEPLATE_ImagePlateComponent_generated_h
#error "ImagePlateComponent.generated.h already included, missing '#pragma once' in ImagePlateComponent.h"
#endif
#define IMAGEPLATE_ImagePlateComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FImagePlateParameters;

// ********** Begin ScriptStruct FImagePlateParameters *********************************************
struct Z_Construct_UScriptStruct_FImagePlateParameters_Statics;
#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImagePlateParameters_Statics; \
	IMAGEPLATE_API static class UScriptStruct* StaticStruct();


struct FImagePlateParameters;
// ********** End ScriptStruct FImagePlateParameters ***********************************************

// ********** Begin Class UImagePlateComponent *****************************************************
#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRenderTextureChanged); \
	DECLARE_FUNCTION(execGetPlate); \
	DECLARE_FUNCTION(execSetImagePlate);


struct Z_Construct_UClass_UImagePlateComponent_Statics;
IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImagePlateComponent(); \
	friend struct ::Z_Construct_UClass_UImagePlateComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IMAGEPLATE_API UClass* ::Z_Construct_UClass_UImagePlateComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UImagePlateComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImagePlate"), Z_Construct_UClass_UImagePlateComponent_NoRegister) \
	DECLARE_SERIALIZER(UImagePlateComponent)


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImagePlateComponent(UImagePlateComponent&&) = delete; \
	UImagePlateComponent(const UImagePlateComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMAGEPLATE_API, UImagePlateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImagePlateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImagePlateComponent) \
	IMAGEPLATE_API virtual ~UImagePlateComponent();


#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_57_PROLOG
#define FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_62_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImagePlateComponent;

// ********** End Class UImagePlateComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
