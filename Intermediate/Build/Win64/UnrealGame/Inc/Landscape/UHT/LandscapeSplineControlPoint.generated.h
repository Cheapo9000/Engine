// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSplineControlPoint.h"

#ifdef LANDSCAPE_LandscapeSplineControlPoint_generated_h
#error "LandscapeSplineControlPoint.generated.h already included, missing '#pragma once' in LandscapeSplineControlPoint.h"
#endif
#define LANDSCAPE_LandscapeSplineControlPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandscapeSplineConnection ****************************************
struct Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeSplineConnection;
// ********** End ScriptStruct FLandscapeSplineConnection ******************************************

// ********** Begin Class ULandscapeSplineControlPoint *********************************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplineControlPoint, LANDSCAPE_API)


struct Z_Construct_UClass_ULandscapeSplineControlPoint_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplineControlPoint(); \
	friend struct ::Z_Construct_UClass_ULandscapeSplineControlPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeSplineControlPoint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeSplineControlPoint) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineControlPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineControlPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineControlPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineControlPoint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeSplineControlPoint(ULandscapeSplineControlPoint&&) = delete; \
	ULandscapeSplineControlPoint(const ULandscapeSplineControlPoint&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeSplineControlPoint();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_49_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeSplineControlPoint;

// ********** End Class ULandscapeSplineControlPoint ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
