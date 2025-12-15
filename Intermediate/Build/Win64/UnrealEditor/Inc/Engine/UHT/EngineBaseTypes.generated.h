// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/EngineBaseTypes.h"

#ifdef ENGINE_EngineBaseTypes_generated_h
#error "EngineBaseTypes.generated.h already included, missing '#pragma once' in EngineBaseTypes.h"
#endif
#define ENGINE_EngineBaseTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTickPrerequisite *************************************************
struct Z_Construct_UScriptStruct_FTickPrerequisite_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTickPrerequisite_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTickPrerequisite;
// ********** End ScriptStruct FTickPrerequisite ***************************************************

// ********** Begin ScriptStruct FTickFunction *****************************************************
struct Z_Construct_UScriptStruct_FTickFunction_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_174_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTickFunction;
// ********** End ScriptStruct FTickFunction *******************************************************

// ********** Begin ScriptStruct FActorTickFunction ************************************************
struct Z_Construct_UScriptStruct_FActorTickFunction_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_527_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FActorTickFunction;
// ********** End ScriptStruct FActorTickFunction **************************************************

// ********** Begin ScriptStruct FActorComponentTickFunction ***************************************
struct Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_572_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FActorComponentTickFunction;
// ********** End ScriptStruct FActorComponentTickFunction *****************************************

// ********** Begin ScriptStruct FURL **************************************************************
struct Z_Construct_UScriptStruct_FURL_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_800_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FURL_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FURL;
// ********** End ScriptStruct FURL ****************************************************************

// ********** Begin Class UViewModeUtils ***********************************************************
struct Z_Construct_UClass_UViewModeUtils_Statics;
ENGINE_API UClass* Z_Construct_UClass_UViewModeUtils_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1074_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModeUtils(); \
	friend struct ::Z_Construct_UClass_UViewModeUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UViewModeUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewModeUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UViewModeUtils_NoRegister) \
	DECLARE_SERIALIZER(UViewModeUtils)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1074_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UViewModeUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewModeUtils(UViewModeUtils&&) = delete; \
	UViewModeUtils(const UViewModeUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UViewModeUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModeUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewModeUtils) \
	ENGINE_API virtual ~UViewModeUtils();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1071_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1074_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1074_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1074_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewModeUtils;

// ********** End Class UViewModeUtils *************************************************************

// ********** Begin ScriptStruct FExposureSettings *************************************************
struct Z_Construct_UScriptStruct_FExposureSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1090_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExposureSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FExposureSettings;
// ********** End ScriptStruct FExposureSettings ***************************************************

// ********** Begin Class UEngineBaseTypes *********************************************************
struct Z_Construct_UClass_UEngineBaseTypes_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEngineBaseTypes_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1130_INCLASS \
private: \
	static void StaticRegisterNativesUEngineBaseTypes(); \
	friend struct ::Z_Construct_UClass_UEngineBaseTypes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEngineBaseTypes_NoRegister(); \
public: \
	DECLARE_CLASS2(UEngineBaseTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEngineBaseTypes_NoRegister) \
	DECLARE_SERIALIZER(UEngineBaseTypes)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineBaseTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineBaseTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineBaseTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineBaseTypes); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEngineBaseTypes(UEngineBaseTypes&&) = delete; \
	UEngineBaseTypes(const UEngineBaseTypes&) = delete; \
	NO_API virtual ~UEngineBaseTypes();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1127_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1130_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEngineBaseTypes;

// ********** End Class UEngineBaseTypes ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h

// ********** Begin Enum EInputEvent ***************************************************************
#define FOREACH_ENUM_EINPUTEVENT(op) \
	op(IE_Pressed) \
	op(IE_Released) \
	op(IE_Repeat) \
	op(IE_DoubleClick) \
	op(IE_Axis) 

enum EInputEvent : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputEvent>();
// ********** End Enum EInputEvent *****************************************************************

// ********** Begin Enum EMouseCaptureMode *********************************************************
#define FOREACH_ENUM_EMOUSECAPTUREMODE(op) \
	op(EMouseCaptureMode::NoCapture) \
	op(EMouseCaptureMode::CapturePermanently) \
	op(EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown) \
	op(EMouseCaptureMode::CaptureDuringMouseDown) \
	op(EMouseCaptureMode::CaptureDuringRightMouseDown) 

enum class EMouseCaptureMode : uint8;
template<> struct TIsUEnumClass<EMouseCaptureMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMouseCaptureMode>();
// ********** End Enum EMouseCaptureMode ***********************************************************

// ********** Begin Enum EMouseLockMode ************************************************************
#define FOREACH_ENUM_EMOUSELOCKMODE(op) \
	op(EMouseLockMode::DoNotLock) \
	op(EMouseLockMode::LockOnCapture) \
	op(EMouseLockMode::LockAlways) \
	op(EMouseLockMode::LockInFullscreen) 

enum class EMouseLockMode : uint8;
template<> struct TIsUEnumClass<EMouseLockMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMouseLockMode>();
// ********** End Enum EMouseLockMode **************************************************************

// ********** Begin Enum ETickingGroup *************************************************************
#define FOREACH_ENUM_ETICKINGGROUP(op) \
	op(TG_PrePhysics) \
	op(TG_StartPhysics) \
	op(TG_DuringPhysics) \
	op(TG_EndPhysics) \
	op(TG_PostPhysics) \
	op(TG_PostUpdateWork) \
	op(TG_LastDemotable) \
	op(TG_NewlySpawned) 

enum ETickingGroup : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETickingGroup>();
// ********** End Enum ETickingGroup ***************************************************************

// ********** Begin Enum ENetworkLagState **********************************************************
#define FOREACH_ENUM_ENETWORKLAGSTATE(op) \
	op(ENetworkLagState::NotLagging) \
	op(ENetworkLagState::Lagging) 

namespace ENetworkLagState { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENetworkLagState::Type>();
// ********** End Enum ENetworkLagState ************************************************************

// ********** Begin Enum ETravelFailure ************************************************************
#define FOREACH_ENUM_ETRAVELFAILURE(op) \
	op(ETravelFailure::NoLevel) \
	op(ETravelFailure::LoadMapFailure) \
	op(ETravelFailure::InvalidURL) \
	op(ETravelFailure::PackageMissing) \
	op(ETravelFailure::PackageVersion) \
	op(ETravelFailure::NoDownload) \
	op(ETravelFailure::TravelFailure) \
	op(ETravelFailure::CheatCommands) \
	op(ETravelFailure::PendingNetGameCreateFailure) \
	op(ETravelFailure::CloudSaveFailure) \
	op(ETravelFailure::ServerTravelFailure) \
	op(ETravelFailure::ClientTravelFailure) 

namespace ETravelFailure { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETravelFailure::Type>();
// ********** End Enum ETravelFailure **************************************************************

// ********** Begin Enum ETravelType ***************************************************************
#define FOREACH_ENUM_ETRAVELTYPE(op) \
	op(TRAVEL_Absolute) \
	op(TRAVEL_Partial) \
	op(TRAVEL_Relative) 

enum ETravelType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETravelType>();
// ********** End Enum ETravelType *****************************************************************

// ********** Begin Enum EDemoPlayFailure **********************************************************
#define FOREACH_ENUM_EDEMOPLAYFAILURE(op) \
	op(EDemoPlayFailure::Generic) \
	op(EDemoPlayFailure::DemoNotFound) \
	op(EDemoPlayFailure::Corrupt) \
	op(EDemoPlayFailure::InvalidVersion) \
	op(EDemoPlayFailure::InitBase) \
	op(EDemoPlayFailure::GameSpecificHeader) \
	op(EDemoPlayFailure::ReplayStreamerInternal) \
	op(EDemoPlayFailure::LoadMap) \
	op(EDemoPlayFailure::Serialization) 

namespace EDemoPlayFailure { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDemoPlayFailure::Type>();
// ********** End Enum EDemoPlayFailure ************************************************************

// ********** Begin Enum EViewModeIndex ************************************************************
#define FOREACH_ENUM_EVIEWMODEINDEX(op) \
	op(VMI_BrushWireframe) \
	op(VMI_Wireframe) \
	op(VMI_Unlit) \
	op(VMI_Lit) \
	op(VMI_Lit_DetailLighting) \
	op(VMI_LightingOnly) \
	op(VMI_LightComplexity) \
	op(VMI_ShaderComplexity) \
	op(VMI_LightmapDensity) \
	op(VMI_LitLightmapDensity) \
	op(VMI_ReflectionOverride) \
	op(VMI_VisualizeBuffer) \
	op(VMI_StationaryLightOverlap) \
	op(VMI_CollisionPawn) \
	op(VMI_CollisionVisibility) \
	op(VMI_LODColoration) \
	op(VMI_QuadOverdraw) \
	op(VMI_PrimitiveDistanceAccuracy) \
	op(VMI_MeshUVDensityAccuracy) \
	op(VMI_ShaderComplexityWithQuadOverdraw) \
	op(VMI_HLODColoration) \
	op(VMI_GroupLODColoration) \
	op(VMI_MaterialTextureScaleAccuracy) \
	op(VMI_RequiredTextureResolution) \
	op(VMI_PathTracing) \
	op(VMI_RayTracingDebug) \
	op(VMI_VisualizeNanite) \
	op(VMI_VisualizeVirtualTexture) \
	op(VMI_VisualizeLumen) \
	op(VMI_VisualizeVirtualShadowMap) \
	op(VMI_VisualizeGPUSkinCache) \
	op(VMI_VisualizeSubstrate) \
	op(VMI_VisualizeGroom) \
	op(VMI_LWCComplexity) \
	op(VMI_Lit_Wireframe) \
	op(VMI_VisualizeActorColoration) \
	op(VMI_ShadowCasters) \
	op(VMI_Clay) \
	op(VMI_Zebra) \
	op(VMI_FrontBackFace) \
	op(VMI_RandomColor) \
	op(VMI_Max) \
	op(VMI_Unknown) 

enum EViewModeIndex : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewModeIndex>();
// ********** End Enum EViewModeIndex **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
