// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DrawDebugLibrary.h"

#ifdef DRAWDEBUGLIBRARY_DrawDebugLibrary_generated_h
#error "DrawDebugLibrary.generated.h already included, missing '#pragma once' in DrawDebugLibrary.h"
#endif
#define DRAWDEBUGLIBRARY_DrawDebugLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USkinnedMeshComponent;
enum class EDrawDebugLineType : uint8;
enum class EDrawDebugLogVerbosity : uint8;
struct FDebugDrawer;
struct FDrawDebugArrowSettings;
struct FDrawDebugChairSettings;
struct FDrawDebugDoorSettings;
struct FDrawDebugGraphAxesSettings;
struct FDrawDebugLineStyle;
struct FDrawDebugPointStyle;
struct FDrawDebugSkeletonSettings;
struct FDrawDebugStringSettings;
struct FLinearColor;
struct FTransformTrajectory;

// ********** Begin ScriptStruct FDrawDebugPointStyle **********************************************
struct Z_Construct_UScriptStruct_FDrawDebugPointStyle_Statics;
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDrawDebugPointStyle_Statics; \
	DRAWDEBUGLIBRARY_API static class UScriptStruct* StaticStruct();


struct FDrawDebugPointStyle;
// ********** End ScriptStruct FDrawDebugPointStyle ************************************************

// ********** Begin ScriptStruct FDrawDebugLineStyle ***********************************************
struct Z_Construct_UScriptStruct_FDrawDebugLineStyle_Statics;
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDrawDebugLineStyle_Statics; \
	DRAWDEBUGLIBRARY_API static class UScriptStruct* StaticStruct();


struct FDrawDebugLineStyle;
// ********** End ScriptStruct FDrawDebugLineStyle *************************************************

// ********** Begin ScriptStruct FDrawDebugArrowSettings *******************************************
struct Z_Construct_UScriptStruct_FDrawDebugArrowSettings_Statics;
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDrawDebugArrowSettings_Statics; \
	DRAWDEBUGLIBRARY_API static class UScriptStruct* StaticStruct();


struct FDrawDebugArrowSettings;
// ********** End ScriptStruct FDrawDebugArrowSettings *********************************************

// ********** Begin ScriptStruct FDrawDebugChairSettings *******************************************
struct Z_Construct_UScriptStruct_FDrawDebugChairSettings_Statics;
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_211_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDrawDebugChairSettings_Statics; \
	DRAWDEBUGLIBRARY_API static class UScriptStruct* StaticStruct();


struct FDrawDebugChairSettings;
// ********** End ScriptStruct FDrawDebugChairSettings *********************************************

// ********** Begin ScriptStruct FDrawDebugDoorSettings ********************************************
struct Z_Construct_UScriptStruct_FDrawDebugDoorSettings_Statics;
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_234_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDrawDebugDoorSettings_Statics; \
	DRAWDEBUGLIBRARY_API static class UScriptStruct* StaticStruct();


struct FDrawDebugDoorSettings;
// ********** End ScriptStruct FDrawDebugDoorSettings **********************************************

// ********** Begin ScriptStruct FDrawDebugSkeletonSettings ****************************************
struct Z_Construct_UScriptStruct_FDrawDebugSkeletonSettings_Statics;
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_289_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDrawDebugSkeletonSettings_Statics; \
	DRAWDEBUGLIBRARY_API static class UScriptStruct* StaticStruct();


struct FDrawDebugSkeletonSettings;
// ********** End ScriptStruct FDrawDebugSkeletonSettings ******************************************

// ********** Begin ScriptStruct FDrawDebugStringSettings ******************************************
struct Z_Construct_UScriptStruct_FDrawDebugStringSettings_Statics;
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_320_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDrawDebugStringSettings_Statics; \
	DRAWDEBUGLIBRARY_API static class UScriptStruct* StaticStruct();


struct FDrawDebugStringSettings;
// ********** End ScriptStruct FDrawDebugStringSettings ********************************************

// ********** Begin ScriptStruct FDrawDebugGraphAxesSettings ***************************************
struct Z_Construct_UScriptStruct_FDrawDebugGraphAxesSettings_Statics;
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_351_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDrawDebugGraphAxesSettings_Statics; \
	DRAWDEBUGLIBRARY_API static class UScriptStruct* StaticStruct();


struct FDrawDebugGraphAxesSettings;
// ********** End ScriptStruct FDrawDebugGraphAxesSettings *****************************************

// ********** Begin ScriptStruct FDebugDrawer ******************************************************
struct Z_Construct_UScriptStruct_FDebugDrawer_Statics;
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_382_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDebugDrawer_Statics; \
	DRAWDEBUGLIBRARY_API static class UScriptStruct* StaticStruct();


struct FDebugDrawer;
// ********** End ScriptStruct FDebugDrawer ********************************************************

// ********** Begin Class UDrawDebugLibrary ********************************************************
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_484_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawDebugGraphLegend); \
	DECLARE_FUNCTION(execDrawDebugGraphLine); \
	DECLARE_FUNCTION(execDrawDebugGraphAxes); \
	DECLARE_FUNCTION(execDrawDebugGraph); \
	DECLARE_FUNCTION(execVisualLoggerDrawText); \
	DECLARE_FUNCTION(execVisualLoggerDrawName); \
	DECLARE_FUNCTION(execVisualLoggerDrawString); \
	DECLARE_FUNCTION(execDrawDebugText); \
	DECLARE_FUNCTION(execDrawDebugName); \
	DECLARE_FUNCTION(execDrawDebugString); \
	DECLARE_FUNCTION(execDrawDebugNameDimensions); \
	DECLARE_FUNCTION(execDrawDebugTextDimensions); \
	DECLARE_FUNCTION(execDrawDebugStringDimensions); \
	DECLARE_FUNCTION(execDrawDebugStringSegmentNum); \
	DECLARE_FUNCTION(execDrawDebugPose); \
	DECLARE_FUNCTION(execDrawDebugSkeletonFromSkinnedMeshComponent); \
	DECLARE_FUNCTION(execDrawDebugBoneLink); \
	DECLARE_FUNCTION(execDrawDebugBone); \
	DECLARE_FUNCTION(execGetDefaultBoneRadius); \
	DECLARE_FUNCTION(execGetDefaultBoneColor); \
	DECLARE_FUNCTION(execDrawDebugMoverOrientation); \
	DECLARE_FUNCTION(execDrawDebugTransformTrajectory); \
	DECLARE_FUNCTION(execDrawDebugTrajectory); \
	DECLARE_FUNCTION(execDrawDebugCamera); \
	DECLARE_FUNCTION(execDrawDebugDoor); \
	DECLARE_FUNCTION(execDrawDebugChair); \
	DECLARE_FUNCTION(execDrawDebugEvent); \
	DECLARE_FUNCTION(execDrawDebugTransform); \
	DECLARE_FUNCTION(execDrawDebugVelocities); \
	DECLARE_FUNCTION(execDrawDebugVelocity); \
	DECLARE_FUNCTION(execDrawDebugDirection); \
	DECLARE_FUNCTION(execDrawDebugRotation); \
	DECLARE_FUNCTION(execDrawDebugLocations); \
	DECLARE_FUNCTION(execDrawDebugLocation); \
	DECLARE_FUNCTION(execDrawDebugAngle); \
	DECLARE_FUNCTION(execDrawDebugCatmullRomSpline); \
	DECLARE_FUNCTION(execDrawDebugCatmullRomSplineSection); \
	DECLARE_FUNCTION(execDrawDebugCatmullRomSplineEnd); \
	DECLARE_FUNCTION(execDrawDebugCatmullRomSplineStart); \
	DECLARE_FUNCTION(execDrawDebugCircleArrow); \
	DECLARE_FUNCTION(execDrawDebugFlatArrow); \
	DECLARE_FUNCTION(execDrawDebugGroundTargetArrow); \
	DECLARE_FUNCTION(execDrawDebugOrientedArrow); \
	DECLARE_FUNCTION(execDrawDebugArrow); \
	DECLARE_FUNCTION(execDrawDebugFrustum); \
	DECLARE_FUNCTION(execDrawDebugCapsuleLine); \
	DECLARE_FUNCTION(execDrawDebugCapsule); \
	DECLARE_FUNCTION(execDrawDebugSimpleSphere); \
	DECLARE_FUNCTION(execDrawDebugSphere); \
	DECLARE_FUNCTION(execDrawDebugBox); \
	DECLARE_FUNCTION(execDrawDebugCrossLocator); \
	DECLARE_FUNCTION(execDrawDebugLocator); \
	DECLARE_FUNCTION(execDrawDebugRegularPolygon); \
	DECLARE_FUNCTION(execDrawDebugDecagon); \
	DECLARE_FUNCTION(execDrawDebugNonagon); \
	DECLARE_FUNCTION(execDrawDebugOctagon); \
	DECLARE_FUNCTION(execDrawDebugHeptagon); \
	DECLARE_FUNCTION(execDrawDebugHexagon); \
	DECLARE_FUNCTION(execDrawDebugPentagon); \
	DECLARE_FUNCTION(execDrawDebugDiamond); \
	DECLARE_FUNCTION(execDrawDebugSquare); \
	DECLARE_FUNCTION(execDrawDebugTriangle); \
	DECLARE_FUNCTION(execDrawDebugCircleOutline); \
	DECLARE_FUNCTION(execDrawDebugCircleTicks); \
	DECLARE_FUNCTION(execDrawDebugCircleTick); \
	DECLARE_FUNCTION(execDrawDebugCircle); \
	DECLARE_FUNCTION(execDrawDebugArc); \
	DECLARE_FUNCTION(execDrawDebugCone); \
	DECLARE_FUNCTION(execDrawDebugSquareBasePyramid); \
	DECLARE_FUNCTION(execDrawDebugTriangularBasePyramid); \
	DECLARE_FUNCTION(execDrawDebugLines); \
	DECLARE_FUNCTION(execDrawDebugLine); \
	DECLARE_FUNCTION(execDrawDebugPoints); \
	DECLARE_FUNCTION(execDrawDebugPoint); \
	DECLARE_FUNCTION(execDrawDebugLineStyleWithType); \
	DECLARE_FUNCTION(execDrawDebugLineStyleWithThickness); \
	DECLARE_FUNCTION(execDrawDebugLineStyleWithColorNoOpacity); \
	DECLARE_FUNCTION(execDrawDebugLineStyleWithColor); \
	DECLARE_FUNCTION(execDrawDebugLineStyleColor); \
	DECLARE_FUNCTION(execDrawDebugPointStyleColor); \
	DECLARE_FUNCTION(execDrawDebugLineStyleFromPointStyle); \
	DECLARE_FUNCTION(execDrawDebugPointStyleFromLineStyle); \
	DECLARE_FUNCTION(execMakeDrawDebugLineStyleFromColor); \
	DECLARE_FUNCTION(execMakeDrawDebugPointStyleFromColor); \
	DECLARE_FUNCTION(execAddToVectorHistoryArray); \
	DECLARE_FUNCTION(execAddToFloatHistoryArray); \
	DECLARE_FUNCTION(execMakeLinearlySpacedFloatArray); \
	DECLARE_FUNCTION(execVisualLoggerLogText); \
	DECLARE_FUNCTION(execVisualLoggerLogString); \
	DECLARE_FUNCTION(execMakeMergedDebugDrawer); \
	DECLARE_FUNCTION(execMakeVisualLoggerDebugDrawerFromObject); \
	DECLARE_FUNCTION(execMakeVisualLoggerDebugDrawer); \
	DECLARE_FUNCTION(execMakeObjectDebugDrawer); \
	DECLARE_FUNCTION(execMakeDebugDrawer); \
	DECLARE_FUNCTION(execMakeNullDebugDrawer);


struct Z_Construct_UClass_UDrawDebugLibrary_Statics;
DRAWDEBUGLIBRARY_API UClass* Z_Construct_UClass_UDrawDebugLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_484_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDrawDebugLibrary(); \
	friend struct ::Z_Construct_UClass_UDrawDebugLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DRAWDEBUGLIBRARY_API UClass* ::Z_Construct_UClass_UDrawDebugLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDrawDebugLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DrawDebugLibrary"), Z_Construct_UClass_UDrawDebugLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDrawDebugLibrary)


#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_484_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDrawDebugLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDrawDebugLibrary(UDrawDebugLibrary&&) = delete; \
	UDrawDebugLibrary(const UDrawDebugLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDrawDebugLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrawDebugLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDrawDebugLibrary) \
	NO_API virtual ~UDrawDebugLibrary();


#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_481_PROLOG
#define FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_484_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_484_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_484_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h_484_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDrawDebugLibrary;

// ********** End Class UDrawDebugLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DrawDebugLibrary_Source_DrawDebugLibrary_Public_DrawDebugLibrary_h

// ********** Begin Enum EDrawDebugLogVerbosity ****************************************************
#define FOREACH_ENUM_EDRAWDEBUGLOGVERBOSITY(op) \
	op(EDrawDebugLogVerbosity::Fatal) \
	op(EDrawDebugLogVerbosity::Error) \
	op(EDrawDebugLogVerbosity::Warning) \
	op(EDrawDebugLogVerbosity::Display) \
	op(EDrawDebugLogVerbosity::Log) \
	op(EDrawDebugLogVerbosity::Verbose) \
	op(EDrawDebugLogVerbosity::VeryVerbose) 

enum class EDrawDebugLogVerbosity : uint8;
template<> struct TIsUEnumClass<EDrawDebugLogVerbosity> { enum { Value = true }; };
template<> DRAWDEBUGLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EDrawDebugLogVerbosity>();
// ********** End Enum EDrawDebugLogVerbosity ******************************************************

// ********** Begin Enum EDrawDebugLineType ********************************************************
#define FOREACH_ENUM_EDRAWDEBUGLINETYPE(op) \
	op(EDrawDebugLineType::Solid) \
	op(EDrawDebugLineType::Dashed) \
	op(EDrawDebugLineType::Dotted) 

enum class EDrawDebugLineType : uint8;
template<> struct TIsUEnumClass<EDrawDebugLineType> { enum { Value = true }; };
template<> DRAWDEBUGLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EDrawDebugLineType>();
// ********** End Enum EDrawDebugLineType **********************************************************

// ********** Begin Enum EDrawDebugArrowHead *******************************************************
#define FOREACH_ENUM_EDRAWDEBUGARROWHEAD(op) \
	op(EDrawDebugArrowHead::Simple) \
	op(EDrawDebugArrowHead::FourWay) \
	op(EDrawDebugArrowHead::TriangularPyramid) \
	op(EDrawDebugArrowHead::SquarePyramid) \
	op(EDrawDebugArrowHead::Cone) \
	op(EDrawDebugArrowHead::Triangle) \
	op(EDrawDebugArrowHead::Square) \
	op(EDrawDebugArrowHead::Diamond) \
	op(EDrawDebugArrowHead::Circle) \
	op(EDrawDebugArrowHead::Sphere) \
	op(EDrawDebugArrowHead::Box) 

enum class EDrawDebugArrowHead : uint8;
template<> struct TIsUEnumClass<EDrawDebugArrowHead> { enum { Value = true }; };
template<> DRAWDEBUGLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EDrawDebugArrowHead>();
// ********** End Enum EDrawDebugArrowHead *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
