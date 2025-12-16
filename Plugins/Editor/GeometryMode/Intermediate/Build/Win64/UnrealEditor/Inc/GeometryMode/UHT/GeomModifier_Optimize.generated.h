// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeomModifier_Optimize.h"

#ifdef GEOMETRYMODE_GeomModifier_Optimize_generated_h
#error "GeomModifier_Optimize.generated.h already included, missing '#pragma once' in GeomModifier_Optimize.h"
#endif
#define GEOMETRYMODE_GeomModifier_Optimize_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeomModifier_Optimize ***************************************************
struct Z_Construct_UClass_UGeomModifier_Optimize_Statics;
GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Optimize_NoRegister();

#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeomModifier_Optimize(); \
	friend struct ::Z_Construct_UClass_UGeomModifier_Optimize_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMODE_API UClass* ::Z_Construct_UClass_UGeomModifier_Optimize_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeomModifier_Optimize, UGeomModifier_Triangulate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMode"), Z_Construct_UClass_UGeomModifier_Optimize_NoRegister) \
	DECLARE_SERIALIZER(UGeomModifier_Optimize)


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Optimize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Optimize) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Optimize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Optimize); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeomModifier_Optimize(UGeomModifier_Optimize&&) = delete; \
	UGeomModifier_Optimize(const UGeomModifier_Optimize&) = delete; \
	NO_API virtual ~UGeomModifier_Optimize();


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_13_PROLOG
#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_16_INCLASS \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeomModifier_Optimize;

// ********** End Class UGeomModifier_Optimize *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
