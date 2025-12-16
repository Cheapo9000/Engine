// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensComponent.h"

#ifdef LENSCOMPONENT_LensComponent_generated_h
#error "LensComponent.generated.h already included, missing '#pragma once' in LensComponent.h"
#endif
#define LENSCOMPONENT_LensComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULensDistortionModelHandlerBase;
class ULensFile;
class ULensModel;
class USceneComponent;
enum class EDistortionSource : uint8;
enum class EFilmbackOverrideSource : uint8;
enum class EFIZEvaluationMode : uint8;
struct FCameraFilmbackSettings;
struct FLensDistortionState;
struct FLensFileEvaluationInputs;
struct FLensFilePicker;

// ********** Begin Class ULensComponent ***********************************************************
#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLensDistortionHandler); \
	DECLARE_FUNCTION(execApplyNodalOffset); \
	DECLARE_FUNCTION(execWasDistortionEvaluated); \
	DECLARE_FUNCTION(execWasNodalOffsetAppliedThisTick); \
	DECLARE_FUNCTION(execSetLensFileEvaluationInputs); \
	DECLARE_FUNCTION(execGetLensFileEvaluationInputs); \
	DECLARE_FUNCTION(execGetOriginalFocalLength); \
	DECLARE_FUNCTION(execClearDistortionState); \
	DECLARE_FUNCTION(execSetDistortionState); \
	DECLARE_FUNCTION(execGetDistortionState); \
	DECLARE_FUNCTION(execSetLensModel); \
	DECLARE_FUNCTION(execGetLensModel); \
	DECLARE_FUNCTION(execSetApplyDistortion); \
	DECLARE_FUNCTION(execShouldApplyDistortion); \
	DECLARE_FUNCTION(execSetDistortionSource); \
	DECLARE_FUNCTION(execGetDistortionSource); \
	DECLARE_FUNCTION(execSetApplyNodalOffsetOnTick); \
	DECLARE_FUNCTION(execShouldApplyNodalOffsetOnTick); \
	DECLARE_FUNCTION(execSetCroppedFilmback); \
	DECLARE_FUNCTION(execGetCroppedFilmback); \
	DECLARE_FUNCTION(execSetFilmbackOverrideSetting); \
	DECLARE_FUNCTION(execGetFilmbackOverrideSetting); \
	DECLARE_FUNCTION(execSetOverscanMultiplier); \
	DECLARE_FUNCTION(execGetOverscanMultiplier); \
	DECLARE_FUNCTION(execSetFIZEvaluationMode); \
	DECLARE_FUNCTION(execGetFIZEvaluationMode); \
	DECLARE_FUNCTION(execSetLensFile); \
	DECLARE_FUNCTION(execSetLensFilePicker); \
	DECLARE_FUNCTION(execGetLensFile); \
	DECLARE_FUNCTION(execGetLensFilePicker);


#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_ACCESSORS \
static void GetbApplyDistortion_WrapperImpl(const void* Object, void* OutValue); \
static void SetbApplyDistortion_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULensComponent, LENSCOMPONENT_API)


struct Z_Construct_UClass_ULensComponent_Statics;
LENSCOMPONENT_API UClass* Z_Construct_UClass_ULensComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensComponent(); \
	friend struct ::Z_Construct_UClass_ULensComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LENSCOMPONENT_API UClass* ::Z_Construct_UClass_ULensComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LensComponent"), Z_Construct_UClass_ULensComponent_NoRegister) \
	DECLARE_SERIALIZER(ULensComponent) \
	FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensComponent(ULensComponent&&) = delete; \
	ULensComponent(const ULensComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LENSCOMPONENT_API, ULensComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULensComponent) \
	LENSCOMPONENT_API virtual ~ULensComponent();


#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_64_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensComponent;

// ********** End Class ULensComponent *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LensComponent_Source_LensComponent_Public_LensComponent_h

// ********** Begin Enum EFIZEvaluationMode ********************************************************
#define FOREACH_ENUM_EFIZEVALUATIONMODE(op) \
	op(EFIZEvaluationMode::UseLiveLink) \
	op(EFIZEvaluationMode::UseCameraSettings) \
	op(EFIZEvaluationMode::UseRecordedValues) \
	op(EFIZEvaluationMode::Manual) \
	op(EFIZEvaluationMode::DoNotEvaluate) 

enum class EFIZEvaluationMode : uint8;
template<> struct TIsUEnumClass<EFIZEvaluationMode> { enum { Value = true }; };
template<> LENSCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EFIZEvaluationMode>();
// ********** End Enum EFIZEvaluationMode **********************************************************

// ********** Begin Enum EFilmbackOverrideSource ***************************************************
#define FOREACH_ENUM_EFILMBACKOVERRIDESOURCE(op) \
	op(EFilmbackOverrideSource::LensFile) \
	op(EFilmbackOverrideSource::CroppedFilmbackSetting) \
	op(EFilmbackOverrideSource::DoNotOverride) 

enum class EFilmbackOverrideSource : uint8;
template<> struct TIsUEnumClass<EFilmbackOverrideSource> { enum { Value = true }; };
template<> LENSCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EFilmbackOverrideSource>();
// ********** End Enum EFilmbackOverrideSource *****************************************************

// ********** Begin Enum EDistortionSource *********************************************************
#define FOREACH_ENUM_EDISTORTIONSOURCE(op) \
	op(EDistortionSource::LensFile) \
	op(EDistortionSource::LiveLinkLensSubject) \
	op(EDistortionSource::Manual) 

enum class EDistortionSource : uint8;
template<> struct TIsUEnumClass<EDistortionSource> { enum { Value = true }; };
template<> LENSCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistortionSource>();
// ********** End Enum EDistortionSource ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
