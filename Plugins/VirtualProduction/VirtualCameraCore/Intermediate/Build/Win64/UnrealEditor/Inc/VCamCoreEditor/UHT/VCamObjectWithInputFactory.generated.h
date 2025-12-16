// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/VCamObjectWithInputFactory.h"

#ifdef VCAMCOREEDITOR_VCamObjectWithInputFactory_generated_h
#error "VCamObjectWithInputFactory.generated.h already included, missing '#pragma once' in VCamObjectWithInputFactory.h"
#endif
#define VCAMCOREEDITOR_VCamObjectWithInputFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVCamObjectWithInputFactory **********************************************
struct Z_Construct_UClass_UVCamObjectWithInputFactory_Statics;
VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamObjectWithInputFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamObjectWithInputFactory(); \
	friend struct ::Z_Construct_UClass_UVCamObjectWithInputFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCOREEDITOR_API UClass* ::Z_Construct_UClass_UVCamObjectWithInputFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamObjectWithInputFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCoreEditor"), Z_Construct_UClass_UVCamObjectWithInputFactory_NoRegister) \
	DECLARE_SERIALIZER(UVCamObjectWithInputFactory)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamObjectWithInputFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamObjectWithInputFactory(UVCamObjectWithInputFactory&&) = delete; \
	UVCamObjectWithInputFactory(const UVCamObjectWithInputFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamObjectWithInputFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamObjectWithInputFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamObjectWithInputFactory) \
	NO_API virtual ~UVCamObjectWithInputFactory();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamObjectWithInputFactory;

// ********** End Class UVCamObjectWithInputFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
