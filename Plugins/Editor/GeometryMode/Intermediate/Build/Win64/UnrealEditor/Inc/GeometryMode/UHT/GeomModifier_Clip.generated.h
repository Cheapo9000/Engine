// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeomModifier_Clip.h"

#ifdef GEOMETRYMODE_GeomModifier_Clip_generated_h
#error "GeomModifier_Clip.generated.h already included, missing '#pragma once' in GeomModifier_Clip.h"
#endif
#define GEOMETRYMODE_GeomModifier_Clip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeomModifier_Clip *******************************************************
struct Z_Construct_UClass_UGeomModifier_Clip_Statics;
GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Clip_NoRegister();

#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGeomModifier_Clip(); \
	friend struct ::Z_Construct_UClass_UGeomModifier_Clip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMODE_API UClass* ::Z_Construct_UClass_UGeomModifier_Clip_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeomModifier_Clip, UGeomModifier_Edit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryMode"), Z_Construct_UClass_UGeomModifier_Clip_NoRegister) \
	DECLARE_SERIALIZER(UGeomModifier_Clip)


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeomModifier_Clip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeomModifier_Clip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeomModifier_Clip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeomModifier_Clip); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeomModifier_Clip(UGeomModifier_Clip&&) = delete; \
	UGeomModifier_Clip(const UGeomModifier_Clip&) = delete; \
	NO_API virtual ~UGeomModifier_Clip();


#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_19_PROLOG
#define FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_22_INCLASS \
	FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeomModifier_Clip;

// ********** End Class UGeomModifier_Clip *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
