// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeomModifier_Split.h"

#ifdef GEOMETRYMODE_GeomModifier_Split_generated_h
#error "GeomModifier_Split.generated.h already included, missing '#pragma once' in GeomModifier_Split.h"
#endif
#define GEOMETRYMODE_GeomModifier_Split_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeomModifier_Split ******************************************************
struct Z_Construct_UClass_UGeomModifier_Split_Statics;
GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Split_NoRegister();

#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Split_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeomModifier_Split(); \
	friend struct ::Z_Construct_UClass_UGeomModifier_Split_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMODE_API UClass* ::Z_Construct_UClass_UGeomModifier_Split_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeomModifier_Split, UGeomModifier_Edit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMode"), Z_Construct_UClass_UGeomModifier_Split_NoRegister) \
	DECLARE_SERIALIZER(UGeomModifier_Split)


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Split_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Split(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Split) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Split); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Split); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeomModifier_Split(UGeomModifier_Split&&) = delete; \
	UGeomModifier_Split(const UGeomModifier_Split&) = delete; \
	NO_API virtual ~UGeomModifier_Split();


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Split_h_13_PROLOG
#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Split_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Split_h_16_INCLASS \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Split_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeomModifier_Split;

// ********** End Class UGeomModifier_Split ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Split_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
