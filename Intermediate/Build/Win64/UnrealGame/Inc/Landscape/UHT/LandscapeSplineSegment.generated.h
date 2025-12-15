// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSplineSegment.h"

#ifdef LANDSCAPE_LandscapeSplineSegment_generated_h
#error "LandscapeSplineSegment.generated.h already included, missing '#pragma once' in LandscapeSplineSegment.h"
#endif
#define LANDSCAPE_LandscapeSplineSegment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandscapeSplineInterpPoint ***************************************
struct Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeSplineInterpPoint;
// ********** End ScriptStruct FLandscapeSplineInterpPoint *****************************************

// ********** Begin ScriptStruct FLandscapeSplineSegmentConnection *********************************
struct Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeSplineSegmentConnection;
// ********** End ScriptStruct FLandscapeSplineSegmentConnection ***********************************

// ********** Begin ScriptStruct FLandscapeSplineMeshEntry *****************************************
struct Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeSplineMeshEntry;
// ********** End ScriptStruct FLandscapeSplineMeshEntry *******************************************

// ********** Begin Class ULandscapeSplineSegment **************************************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_196_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplineSegment, LANDSCAPE_API)


struct Z_Construct_UClass_ULandscapeSplineSegment_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_196_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplineSegment(); \
	friend struct ::Z_Construct_UClass_ULandscapeSplineSegment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeSplineSegment_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeSplineSegment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeSplineSegment_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeSplineSegment) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_196_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_196_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineSegment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineSegment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineSegment); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeSplineSegment(ULandscapeSplineSegment&&) = delete; \
	ULandscapeSplineSegment(const ULandscapeSplineSegment&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeSplineSegment();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_193_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_196_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_196_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_196_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeSplineSegment;

// ********** End Class ULandscapeSplineSegment ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h

// ********** Begin Enum LandscapeSplineMeshOrientation ********************************************
#define FOREACH_ENUM_LANDSCAPESPLINEMESHORIENTATION(op) \
	op(LSMO_XUp) \
	op(LSMO_YUp) 

enum LandscapeSplineMeshOrientation : int;
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<LandscapeSplineMeshOrientation>();
// ********** End Enum LandscapeSplineMeshOrientation **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
