// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeomModifier.h"

#ifdef GEOMETRYMODE_GeomModifier_generated_h
#error "GeomModifier.generated.h already included, missing '#pragma once' in GeomModifier.h"
#endif
#define GEOMETRYMODE_GeomModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeomModifier ************************************************************
struct Z_Construct_UClass_UGeomModifier_Statics;
GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_NoRegister();

#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUGeomModifier(); \
	friend struct ::Z_Construct_UClass_UGeomModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMODE_API UClass* ::Z_Construct_UClass_UGeomModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeomModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GeometryMode"), Z_Construct_UClass_UGeomModifier_NoRegister) \
	DECLARE_SERIALIZER(UGeomModifier)


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeomModifier(UGeomModifier&&) = delete; \
	UGeomModifier(const UGeomModifier&) = delete; \
	NO_API virtual ~UGeomModifier();


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_23_PROLOG
#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_26_INCLASS \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeomModifier;

// ********** End Class UGeomModifier **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
