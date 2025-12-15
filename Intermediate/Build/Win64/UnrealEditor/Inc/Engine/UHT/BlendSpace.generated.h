// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/BlendSpace.h"

#ifdef ENGINE_BlendSpace_generated_h
#error "BlendSpace.generated.h already included, missing '#pragma once' in BlendSpace.h"
#endif
#define ENGINE_BlendSpace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnalysisProperties ******************************************************
struct Z_Construct_UClass_UAnalysisProperties_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnalysisProperties_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnalysisProperties(); \
	friend struct ::Z_Construct_UClass_UAnalysisProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnalysisProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnalysisProperties, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnalysisProperties_NoRegister) \
	DECLARE_SERIALIZER(UAnalysisProperties)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnalysisProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnalysisProperties(UAnalysisProperties&&) = delete; \
	UAnalysisProperties(const UAnalysisProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnalysisProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalysisProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalysisProperties) \
	ENGINE_API virtual ~UAnalysisProperties();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnalysisProperties;

// ********** End Class UAnalysisProperties ********************************************************

// ********** Begin ScriptStruct FBlendSpaceBlendProfile *******************************************
struct Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendSpaceBlendProfile;
// ********** End ScriptStruct FBlendSpaceBlendProfile *********************************************

// ********** Begin ScriptStruct FInterpolationParameter *******************************************
struct Z_Construct_UScriptStruct_FInterpolationParameter_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterpolationParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInterpolationParameter;
// ********** End ScriptStruct FInterpolationParameter *********************************************

// ********** Begin ScriptStruct FBlendParameter ***************************************************
struct Z_Construct_UScriptStruct_FBlendParameter_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendParameter;
// ********** End ScriptStruct FBlendParameter *****************************************************

// ********** Begin ScriptStruct FBlendSample ******************************************************
struct Z_Construct_UScriptStruct_FBlendSample_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendSample_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendSample;
// ********** End ScriptStruct FBlendSample ********************************************************

// ********** Begin ScriptStruct FBlendSpaceSegment ************************************************
struct Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_239_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendSpaceSegment;
// ********** End ScriptStruct FBlendSpaceSegment **************************************************

// ********** Begin ScriptStruct FBlendSpaceTriangleEdgeInfo ***************************************
struct Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_257_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendSpaceTriangleEdgeInfo;
// ********** End ScriptStruct FBlendSpaceTriangleEdgeInfo *****************************************

// ********** Begin ScriptStruct FBlendSpaceTriangle ***********************************************
struct Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_289_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendSpaceTriangle;
// ********** End ScriptStruct FBlendSpaceTriangle *************************************************

// ********** Begin ScriptStruct FWeightedBlendSample **********************************************
struct Z_Construct_UScriptStruct_FWeightedBlendSample_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_313_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWeightedBlendSample_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWeightedBlendSample;
// ********** End ScriptStruct FWeightedBlendSample ************************************************

// ********** Begin ScriptStruct FBlendSpaceData ***************************************************
struct Z_Construct_UScriptStruct_FBlendSpaceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_333_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendSpaceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlendSpaceData;
// ********** End ScriptStruct FBlendSpaceData *****************************************************

// ********** Begin ScriptStruct FEditorElement ****************************************************
struct Z_Construct_UScriptStruct_FEditorElement_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_378_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEditorElement_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FEditorElement;
// ********** End ScriptStruct FEditorElement ******************************************************

// ********** Begin ScriptStruct FGridBlendSample **************************************************
struct Z_Construct_UScriptStruct_FGridBlendSample_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_404_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGridBlendSample_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FGridBlendSample;
// ********** End ScriptStruct FGridBlendSample ****************************************************

// ********** Begin ScriptStruct FPerBoneInterpolation *********************************************
struct Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_422_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPerBoneInterpolation;
// ********** End ScriptStruct FPerBoneInterpolation ***********************************************

// ********** Begin Class UBlendSpace **************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_468_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBlendSpace, ENGINE_API)


struct Z_Construct_UClass_UBlendSpace_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_468_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpace(); \
	friend struct ::Z_Construct_UClass_UBlendSpace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlendSpace_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendSpace, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlendSpace_NoRegister) \
	DECLARE_SERIALIZER(UBlendSpace) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_468_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_468_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpace); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendSpace(UBlendSpace&&) = delete; \
	UBlendSpace(const UBlendSpace&) = delete; \
	ENGINE_API virtual ~UBlendSpace();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_465_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_468_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_468_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_468_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendSpace;

// ********** End Class UBlendSpace ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h

// ********** Begin Enum EBlendSpaceAxis ***********************************************************
#define FOREACH_ENUM_EBLENDSPACEAXIS(op) \
	op(BSA_None) \
	op(BSA_X) \
	op(BSA_Y) 

enum EBlendSpaceAxis : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendSpaceAxis>();
// ********** End Enum EBlendSpaceAxis *************************************************************

// ********** Begin Enum EPreferredTriangulationDirection ******************************************
#define FOREACH_ENUM_EPREFERREDTRIANGULATIONDIRECTION(op) \
	op(EPreferredTriangulationDirection::None) \
	op(EPreferredTriangulationDirection::Tangential) \
	op(EPreferredTriangulationDirection::Radial) 

enum class EPreferredTriangulationDirection : uint8;
template<> struct TIsUEnumClass<EPreferredTriangulationDirection> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPreferredTriangulationDirection>();
// ********** End Enum EPreferredTriangulationDirection ********************************************

// ********** Begin Enum EBlendSpacePerBoneBlendMode ***********************************************
#define FOREACH_ENUM_EBLENDSPACEPERBONEBLENDMODE(op) \
	op(EBlendSpacePerBoneBlendMode::ManualPerBoneOverride) \
	op(EBlendSpacePerBoneBlendMode::BlendProfile) 

enum class EBlendSpacePerBoneBlendMode : uint8;
template<> struct TIsUEnumClass<EBlendSpacePerBoneBlendMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendSpacePerBoneBlendMode>();
// ********** End Enum EBlendSpacePerBoneBlendMode *************************************************

// ********** Begin Enum ENotifyTriggerMode ********************************************************
#define FOREACH_ENUM_ENOTIFYTRIGGERMODE(op) \
	op(ENotifyTriggerMode::AllAnimations) \
	op(ENotifyTriggerMode::HighestWeightedAnimation) \
	op(ENotifyTriggerMode::None) 

namespace ENotifyTriggerMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENotifyTriggerMode::Type>();
// ********** End Enum ENotifyTriggerMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
