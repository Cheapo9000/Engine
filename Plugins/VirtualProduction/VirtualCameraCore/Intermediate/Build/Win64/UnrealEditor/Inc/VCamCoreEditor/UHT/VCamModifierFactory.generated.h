// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/VCamModifierFactory.h"

#ifdef VCAMCOREEDITOR_VCamModifierFactory_generated_h
#error "VCamModifierFactory.generated.h already included, missing '#pragma once' in VCamModifierFactory.h"
#endif
#define VCAMCOREEDITOR_VCamModifierFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamModifierFactory *****************************************************
struct Z_Construct_UClass_UVCamModifierFactory_Statics;
VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamModifierFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamModifierFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamModifierFactory(); \
	friend struct ::Z_Construct_UClass_UVCamModifierFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCOREEDITOR_API UClass* ::Z_Construct_UClass_UVCamModifierFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamModifierFactory, UVCamObjectWithInputFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCoreEditor"), Z_Construct_UClass_UVCamModifierFactory_NoRegister) \
	DECLARE_SERIALIZER(UVCamModifierFactory)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamModifierFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamModifierFactory(UVCamModifierFactory&&) = delete; \
	UVCamModifierFactory(const UVCamModifierFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamModifierFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamModifierFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVCamModifierFactory) \
	NO_API virtual ~UVCamModifierFactory();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamModifierFactory_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamModifierFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamModifierFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamModifierFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamModifierFactory;

// ********** End Class UVCamModifierFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamModifierFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
