// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimTypes.h"

#ifdef ENGINE_AnimTypes_generated_h
#error "AnimTypes.generated.h already included, missing '#pragma once' in AnimTypes.h"
#endif
#define ENGINE_AnimTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRawAnimSequenceTrack;

// ********** Begin ScriptStruct FPerBoneBlendWeight ***********************************************
struct Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPerBoneBlendWeight;
// ********** End ScriptStruct FPerBoneBlendWeight *************************************************

// ********** Begin ScriptStruct FPerBoneBlendWeights **********************************************
struct Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPerBoneBlendWeights;
// ********** End ScriptStruct FPerBoneBlendWeights ************************************************

// ********** Begin ScriptStruct FAnimNotifyEvent **************************************************
struct Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_278_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


struct FAnimNotifyEvent;
// ********** End ScriptStruct FAnimNotifyEvent ****************************************************

// ********** Begin ScriptStruct FAnimSyncMarker ***************************************************
struct Z_Construct_UScriptStruct_FAnimSyncMarker_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_483_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimSyncMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimSyncMarker;
// ********** End ScriptStruct FAnimSyncMarker *****************************************************

// ********** Begin ScriptStruct FAnimNotifyTrack **************************************************
struct Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_545_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimNotifyTrack;
// ********** End ScriptStruct FAnimNotifyTrack ****************************************************

// ********** Begin ScriptStruct FMarkerSyncData ***************************************************
struct Z_Construct_UScriptStruct_FMarkerSyncData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_639_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMarkerSyncData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMarkerSyncData;
// ********** End ScriptStruct FMarkerSyncData *****************************************************

// ********** Begin ScriptStruct FTrackToSkeletonMap ***********************************************
struct Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_823_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTrackToSkeletonMap;
// ********** End ScriptStruct FTrackToSkeletonMap *************************************************

// ********** Begin ScriptStruct FRawAnimSequenceTrack *********************************************
struct Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_854_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRawAnimSequenceTrack;
// ********** End ScriptStruct FRawAnimSequenceTrack ***********************************************

// ********** Begin Class URawAnimSequenceTrackExtensions ******************************************
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_936_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScaleKeys); \
	DECLARE_FUNCTION(execGetRotationalKeys); \
	DECLARE_FUNCTION(execGetPositionalKeys);


struct Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics;
ENGINE_API UClass* Z_Construct_UClass_URawAnimSequenceTrackExtensions_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_936_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURawAnimSequenceTrackExtensions(); \
	friend struct ::Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URawAnimSequenceTrackExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(URawAnimSequenceTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URawAnimSequenceTrackExtensions_NoRegister) \
	DECLARE_SERIALIZER(URawAnimSequenceTrackExtensions)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_936_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URawAnimSequenceTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URawAnimSequenceTrackExtensions(URawAnimSequenceTrackExtensions&&) = delete; \
	URawAnimSequenceTrackExtensions(const URawAnimSequenceTrackExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URawAnimSequenceTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawAnimSequenceTrackExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawAnimSequenceTrackExtensions) \
	ENGINE_API virtual ~URawAnimSequenceTrackExtensions();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_933_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_936_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_936_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_936_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_936_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URawAnimSequenceTrackExtensions;

// ********** End Class URawAnimSequenceTrackExtensions ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h

// ********** Begin Enum EBoneAxis *****************************************************************
#define FOREACH_ENUM_EBONEAXIS(op) \
	op(BA_X) \
	op(BA_Y) \
	op(BA_Z) 

enum EBoneAxis : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoneAxis>();
// ********** End Enum EBoneAxis *******************************************************************

// ********** Begin Enum EBoneControlSpace *********************************************************
#define FOREACH_ENUM_EBONECONTROLSPACE(op) \
	op(BCS_WorldSpace) \
	op(BCS_ComponentSpace) \
	op(BCS_ParentBoneSpace) \
	op(BCS_BoneSpace) 

enum EBoneControlSpace : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoneControlSpace>();
// ********** End Enum EBoneControlSpace ***********************************************************

// ********** Begin Enum EBoneRotationSource *******************************************************
#define FOREACH_ENUM_EBONEROTATIONSOURCE(op) \
	op(BRS_KeepComponentSpaceRotation) \
	op(BRS_KeepLocalSpaceRotation) \
	op(BRS_CopyFromTarget) 

enum EBoneRotationSource : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoneRotationSource>();
// ********** End Enum EBoneRotationSource *********************************************************

// ********** Begin Enum EMontageNotifyTickType ****************************************************
#define FOREACH_ENUM_EMONTAGENOTIFYTICKTYPE(op) \
	op(EMontageNotifyTickType::Queued) \
	op(EMontageNotifyTickType::BranchingPoint) 

namespace EMontageNotifyTickType { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMontageNotifyTickType::Type>();
// ********** End Enum EMontageNotifyTickType ******************************************************

// ********** Begin Enum ENotifyFilterType *********************************************************
#define FOREACH_ENUM_ENOTIFYFILTERTYPE(op) \
	op(ENotifyFilterType::NoFiltering) \
	op(ENotifyFilterType::LOD) 

namespace ENotifyFilterType { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENotifyFilterType::Type>();
// ********** End Enum ENotifyFilterType ***********************************************************

// ********** Begin Enum EAdditiveAnimationType ****************************************************
#define FOREACH_ENUM_EADDITIVEANIMATIONTYPE(op) \
	op(AAT_None) \
	op(AAT_LocalSpaceBase) \
	op(AAT_RotationOffsetMeshSpace) 

enum EAdditiveAnimationType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAdditiveAnimationType>();
// ********** End Enum EAdditiveAnimationType ******************************************************

// ********** Begin Enum ECurveBlendOption *********************************************************
#define FOREACH_ENUM_ECURVEBLENDOPTION(op) \
	op(ECurveBlendOption::Override) \
	op(ECurveBlendOption::DoNotOverride) \
	op(ECurveBlendOption::NormalizeByWeight) \
	op(ECurveBlendOption::BlendByWeight) \
	op(ECurveBlendOption::UseBasePose) \
	op(ECurveBlendOption::UseMaxValue) \
	op(ECurveBlendOption::UseMinValue) 

namespace ECurveBlendOption { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECurveBlendOption::Type>();
// ********** End Enum ECurveBlendOption ***********************************************************

// ********** Begin Enum EAnimInterpolationType ****************************************************
#define FOREACH_ENUM_EANIMINTERPOLATIONTYPE(op) \
	op(EAnimInterpolationType::Linear) \
	op(EAnimInterpolationType::Step) 

enum class EAnimInterpolationType : uint8;
template<> struct TIsUEnumClass<EAnimInterpolationType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimInterpolationType>();
// ********** End Enum EAnimInterpolationType ******************************************************

// ********** Begin Enum EAxisOption ***************************************************************
#define FOREACH_ENUM_EAXISOPTION(op) \
	op(EAxisOption::X) \
	op(EAxisOption::Y) \
	op(EAxisOption::Z) \
	op(EAxisOption::X_Neg) \
	op(EAxisOption::Y_Neg) \
	op(EAxisOption::Z_Neg) \
	op(EAxisOption::Custom) 

namespace EAxisOption { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAxisOption::Type>();
// ********** End Enum EAxisOption *****************************************************************

// ********** Begin Enum EComponentType ************************************************************
#define FOREACH_ENUM_ECOMPONENTTYPE(op) \
	op(EComponentType::None) \
	op(EComponentType::TranslationX) \
	op(EComponentType::TranslationY) \
	op(EComponentType::TranslationZ) \
	op(EComponentType::RotationX) \
	op(EComponentType::RotationY) \
	op(EComponentType::RotationZ) \
	op(EComponentType::Scale) \
	op(EComponentType::ScaleX) \
	op(EComponentType::ScaleY) \
	op(EComponentType::ScaleZ) 

namespace EComponentType { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EComponentType::Type>();
// ********** End Enum EComponentType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
