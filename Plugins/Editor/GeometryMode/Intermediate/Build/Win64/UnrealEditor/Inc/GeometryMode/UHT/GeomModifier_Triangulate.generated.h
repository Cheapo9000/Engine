// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeomModifier_Triangulate.h"

#ifdef GEOMETRYMODE_GeomModifier_Triangulate_generated_h
#error "GeomModifier_Triangulate.generated.h already included, missing '#pragma once' in GeomModifier_Triangulate.h"
#endif
#define GEOMETRYMODE_GeomModifier_Triangulate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeomModifier_Triangulate ************************************************
struct Z_Construct_UClass_UGeomModifier_Triangulate_Statics;
GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Triangulate_NoRegister();

#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeomModifier_Triangulate(); \
	friend struct ::Z_Construct_UClass_UGeomModifier_Triangulate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMODE_API UClass* ::Z_Construct_UClass_UGeomModifier_Triangulate_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeomModifier_Triangulate, UGeomModifier_Edit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMode"), Z_Construct_UClass_UGeomModifier_Triangulate_NoRegister) \
	DECLARE_SERIALIZER(UGeomModifier_Triangulate)


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Triangulate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Triangulate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Triangulate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Triangulate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeomModifier_Triangulate(UGeomModifier_Triangulate&&) = delete; \
	UGeomModifier_Triangulate(const UGeomModifier_Triangulate&) = delete; \
	NO_API virtual ~UGeomModifier_Triangulate();


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_13_PROLOG
#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_16_INCLASS \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeomModifier_Triangulate;

// ********** End Class UGeomModifier_Triangulate **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
