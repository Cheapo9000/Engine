// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeomModifier_Weld.h"

#ifdef GEOMETRYMODE_GeomModifier_Weld_generated_h
#error "GeomModifier_Weld.generated.h already included, missing '#pragma once' in GeomModifier_Weld.h"
#endif
#define GEOMETRYMODE_GeomModifier_Weld_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeomModifier_Weld *******************************************************
struct Z_Construct_UClass_UGeomModifier_Weld_Statics;
GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Weld_NoRegister();

#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Weld_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGeomModifier_Weld(); \
	friend struct ::Z_Construct_UClass_UGeomModifier_Weld_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMODE_API UClass* ::Z_Construct_UClass_UGeomModifier_Weld_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeomModifier_Weld, UGeomModifier_Edit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMode"), Z_Construct_UClass_UGeomModifier_Weld_NoRegister) \
	DECLARE_SERIALIZER(UGeomModifier_Weld)


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Weld_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Weld(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Weld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Weld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Weld); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeomModifier_Weld(UGeomModifier_Weld&&) = delete; \
	UGeomModifier_Weld(const UGeomModifier_Weld&) = delete; \
	NO_API virtual ~UGeomModifier_Weld();


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Weld_h_12_PROLOG
#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Weld_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Weld_h_15_INCLASS \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Weld_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeomModifier_Weld;

// ********** End Class UGeomModifier_Weld *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Weld_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
