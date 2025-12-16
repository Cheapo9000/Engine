// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/VCamWidgetFactory.h"

#ifdef VCAMCOREEDITOR_VCamWidgetFactory_generated_h
#error "VCamWidgetFactory.generated.h already included, missing '#pragma once' in VCamWidgetFactory.h"
#endif
#define VCAMCOREEDITOR_VCamWidgetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamWidgetFactory *******************************************************
struct Z_Construct_UClass_UVCamWidgetFactory_Statics;
VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamWidgetFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamWidgetFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamWidgetFactory(); \
	friend struct ::Z_Construct_UClass_UVCamWidgetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCOREEDITOR_API UClass* ::Z_Construct_UClass_UVCamWidgetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamWidgetFactory, UVCamObjectWithInputFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCoreEditor"), Z_Construct_UClass_UVCamWidgetFactory_NoRegister) \
	DECLARE_SERIALIZER(UVCamWidgetFactory)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamWidgetFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamWidgetFactory(UVCamWidgetFactory&&) = delete; \
	UVCamWidgetFactory(const UVCamWidgetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamWidgetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVCamWidgetFactory) \
	NO_API virtual ~UVCamWidgetFactory();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamWidgetFactory_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamWidgetFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamWidgetFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamWidgetFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamWidgetFactory;

// ********** End Class UVCamWidgetFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamWidgetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
