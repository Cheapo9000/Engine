// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineSplineMetadataDetails.h"

#ifdef CINECAMERARIGSEDITOR_CineSplineMetadataDetails_generated_h
#error "CineSplineMetadataDetails.generated.h already included, missing '#pragma once' in CineSplineMetadataDetails.h"
#endif
#define CINECAMERARIGSEDITOR_CineSplineMetadataDetails_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCineSplineMetadataDetailsFactory ****************************************
struct Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics;
CINECAMERARIGSEDITOR_API UClass* Z_Construct_UClass_UCineSplineMetadataDetailsFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineSplineMetadataDetailsFactory(); \
	friend struct ::Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINECAMERARIGSEDITOR_API UClass* ::Z_Construct_UClass_UCineSplineMetadataDetailsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCineSplineMetadataDetailsFactory, USplineMetadataDetailsFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CineCameraRigsEditor"), Z_Construct_UClass_UCineSplineMetadataDetailsFactory_NoRegister) \
	DECLARE_SERIALIZER(UCineSplineMetadataDetailsFactory)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCineSplineMetadataDetailsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCineSplineMetadataDetailsFactory(UCineSplineMetadataDetailsFactory&&) = delete; \
	UCineSplineMetadataDetailsFactory(const UCineSplineMetadataDetailsFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineSplineMetadataDetailsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineSplineMetadataDetailsFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineSplineMetadataDetailsFactory) \
	NO_API virtual ~UCineSplineMetadataDetailsFactory();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCineSplineMetadataDetailsFactory;

// ********** End Class UCineSplineMetadataDetailsFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
