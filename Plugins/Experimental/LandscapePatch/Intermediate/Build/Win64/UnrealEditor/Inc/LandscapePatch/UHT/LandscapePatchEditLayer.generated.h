// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapePatchEditLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPEPATCH_LandscapePatchEditLayer_generated_h
#error "LandscapePatchEditLayer.generated.h already included, missing '#pragma once' in LandscapePatchEditLayer.h"
#endif
#define LANDSCAPEPATCH_LandscapePatchEditLayer_generated_h

#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapePatchEditLayer(); \
	friend struct Z_Construct_UClass_ULandscapePatchEditLayer_Statics; \
public: \
	DECLARE_CLASS(ULandscapePatchEditLayer, ULandscapeEditLayerProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandscapePatch"), LANDSCAPEPATCH_API) \
	DECLARE_SERIALIZER(ULandscapePatchEditLayer) \
	virtual UObject* _getUObject() const override { return const_cast<ULandscapePatchEditLayer*>(this); }


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEPATCH_API ULandscapePatchEditLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapePatchEditLayer(ULandscapePatchEditLayer&&); \
	ULandscapePatchEditLayer(const ULandscapePatchEditLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEPATCH_API, ULandscapePatchEditLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapePatchEditLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapePatchEditLayer) \
	LANDSCAPEPATCH_API virtual ~ULandscapePatchEditLayer();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEPATCH_API UClass* StaticClass<class ULandscapePatchEditLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchEditLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
