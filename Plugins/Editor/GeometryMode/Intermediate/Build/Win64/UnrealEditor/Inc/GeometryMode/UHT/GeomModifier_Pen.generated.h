// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeomModifier_Pen.h"

#ifdef GEOMETRYMODE_GeomModifier_Pen_generated_h
#error "GeomModifier_Pen.generated.h already included, missing '#pragma once' in GeomModifier_Pen.h"
#endif
#define GEOMETRYMODE_GeomModifier_Pen_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeomModifier_Pen ********************************************************
struct Z_Construct_UClass_UGeomModifier_Pen_Statics;
GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Pen_NoRegister();

#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGeomModifier_Pen(); \
	friend struct ::Z_Construct_UClass_UGeomModifier_Pen_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMODE_API UClass* ::Z_Construct_UClass_UGeomModifier_Pen_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeomModifier_Pen, UGeomModifier_Edit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMode"), Z_Construct_UClass_UGeomModifier_Pen_NoRegister) \
	DECLARE_SERIALIZER(UGeomModifier_Pen)


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Pen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Pen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Pen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Pen); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeomModifier_Pen(UGeomModifier_Pen&&) = delete; \
	UGeomModifier_Pen(const UGeomModifier_Pen&) = delete; \
	NO_API virtual ~UGeomModifier_Pen();


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_19_PROLOG
#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_22_INCLASS \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeomModifier_Pen;

// ********** End Class UGeomModifier_Pen **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
