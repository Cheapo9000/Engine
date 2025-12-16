// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapePatchEditLayer.h"

#ifdef LANDSCAPEPATCH_LandscapePatchEditLayer_generated_h
#error "LandscapePatchEditLayer.generated.h already included, missing '#pragma once' in LandscapePatchEditLayer.h"
#endif
#define LANDSCAPEPATCH_LandscapePatchEditLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapePatchEditLayer *************************************************
struct Z_Construct_UClass_ULandscapePatchEditLayer_Statics;
LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapePatchEditLayer_NoRegister();

#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapePatchEditLayer(); \
	friend struct ::Z_Construct_UClass_ULandscapePatchEditLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPEPATCH_API UClass* ::Z_Construct_UClass_ULandscapePatchEditLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapePatchEditLayer, ULandscapeEditLayerProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandscapePatch"), Z_Construct_UClass_ULandscapePatchEditLayer_NoRegister) \
	DECLARE_SERIALIZER(ULandscapePatchEditLayer)


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEPATCH_API ULandscapePatchEditLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapePatchEditLayer(ULandscapePatchEditLayer&&) = delete; \
	ULandscapePatchEditLayer(const ULandscapePatchEditLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEPATCH_API, ULandscapePatchEditLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapePatchEditLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapePatchEditLayer) \
	LANDSCAPEPATCH_API virtual ~ULandscapePatchEditLayer();


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_16_PROLOG
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapePatchEditLayer;

// ********** End Class ULandscapePatchEditLayer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
