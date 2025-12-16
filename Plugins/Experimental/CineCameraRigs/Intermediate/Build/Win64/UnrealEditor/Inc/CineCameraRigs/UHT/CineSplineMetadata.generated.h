// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineSplineMetadata.h"

#ifdef CINECAMERARIGS_CineSplineMetadata_generated_h
#error "CineSplineMetadata.generated.h already included, missing '#pragma once' in CineSplineMetadata.h"
#endif
#define CINECAMERARIGS_CineSplineMetadata_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCineSplineCurveDefaults ******************************************
struct Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics;
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCineSplineCurveDefaults_Statics; \
	CINECAMERARIGS_API static class UScriptStruct* StaticStruct();


struct FCineSplineCurveDefaults;
// ********** End ScriptStruct FCineSplineCurveDefaults ********************************************

// ********** Begin Class UCineSplineMetadata ******************************************************
struct Z_Construct_UClass_UCineSplineMetadata_Statics;
CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineSplineMetadata_NoRegister();

#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineSplineMetadata(); \
	friend struct ::Z_Construct_UClass_UCineSplineMetadata_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINECAMERARIGS_API UClass* ::Z_Construct_UClass_UCineSplineMetadata_NoRegister(); \
public: \
	DECLARE_CLASS2(UCineSplineMetadata, USplineMetadata, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CineCameraRigs"), Z_Construct_UClass_UCineSplineMetadata_NoRegister) \
	DECLARE_SERIALIZER(UCineSplineMetadata)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCineSplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCineSplineMetadata(UCineSplineMetadata&&) = delete; \
	UCineSplineMetadata(const UCineSplineMetadata&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineSplineMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineSplineMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineSplineMetadata) \
	NO_API virtual ~UCineSplineMetadata();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_43_PROLOG
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCineSplineMetadata;

// ********** End Class UCineSplineMetadata ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineMetadata_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
