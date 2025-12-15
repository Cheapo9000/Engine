// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/RendererSettings.h"

#ifdef ENGINE_RendererSettings_generated_h
#error "RendererSettings.generated.h already included, missing '#pragma once' in RendererSettings.h"
#endif
#define ENGINE_RendererSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URendererSettings ********************************************************
struct Z_Construct_UClass_URendererSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_URendererSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_310_INCLASS \
private: \
	static void StaticRegisterNativesURendererSettings(); \
	friend struct ::Z_Construct_UClass_URendererSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URendererSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URendererSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URendererSettings_NoRegister) \
	DECLARE_SERIALIZER(URendererSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_310_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URendererSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URendererSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URendererSettings(URendererSettings&&) = delete; \
	URendererSettings(const URendererSettings&) = delete; \
	ENGINE_API virtual ~URendererSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_307_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_310_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_310_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_310_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URendererSettings;

// ********** End Class URendererSettings **********************************************************

// ********** Begin Class URendererOverrideSettings ************************************************
struct Z_Construct_UClass_URendererOverrideSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_URendererOverrideSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1575_INCLASS \
private: \
	static void StaticRegisterNativesURendererOverrideSettings(); \
	friend struct ::Z_Construct_UClass_URendererOverrideSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URendererOverrideSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URendererOverrideSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_ProjectUserConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URendererOverrideSettings_NoRegister) \
	DECLARE_SERIALIZER(URendererOverrideSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1575_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URendererOverrideSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URendererOverrideSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URendererOverrideSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URendererOverrideSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URendererOverrideSettings(URendererOverrideSettings&&) = delete; \
	URendererOverrideSettings(const URendererOverrideSettings&) = delete; \
	ENGINE_API virtual ~URendererOverrideSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1572_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1575_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1575_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_1575_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URendererOverrideSettings;

// ********** End Class URendererOverrideSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h

// ********** Begin Enum EClearSceneOptions ********************************************************
#define FOREACH_ENUM_ECLEARSCENEOPTIONS(op) \
	op(EClearSceneOptions::NoClear) \
	op(EClearSceneOptions::HardwareClear) \
	op(EClearSceneOptions::QuadAtMaxZ) 

namespace EClearSceneOptions { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EClearSceneOptions::Type>();
// ********** End Enum EClearSceneOptions **********************************************************

// ********** Begin Enum ECompositingSampleCount ***************************************************
#define FOREACH_ENUM_ECOMPOSITINGSAMPLECOUNT(op) \
	op(ECompositingSampleCount::One) \
	op(ECompositingSampleCount::Two) \
	op(ECompositingSampleCount::Four) \
	op(ECompositingSampleCount::Eight) 

namespace ECompositingSampleCount { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositingSampleCount::Type>();
// ********** End Enum ECompositingSampleCount *****************************************************

// ********** Begin Enum ECustomDepthStencil *******************************************************
#define FOREACH_ENUM_ECUSTOMDEPTHSTENCIL(op) \
	op(ECustomDepthStencil::Disabled) \
	op(ECustomDepthStencil::Enabled) \
	op(ECustomDepthStencil::EnabledOnDemand) \
	op(ECustomDepthStencil::EnabledWithStencil) 

namespace ECustomDepthStencil { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomDepthStencil::Type>();
// ********** End Enum ECustomDepthStencil *********************************************************

// ********** Begin Enum EEarlyZPass ***************************************************************
#define FOREACH_ENUM_EEARLYZPASS(op) \
	op(EEarlyZPass::None) \
	op(EEarlyZPass::OpaqueOnly) \
	op(EEarlyZPass::OpaqueAndMasked) \
	op(EEarlyZPass::Auto) 

namespace EEarlyZPass { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEarlyZPass::Type>();
// ********** End Enum EEarlyZPass *****************************************************************

// ********** Begin Enum EVelocityOutputPass *******************************************************
#define FOREACH_ENUM_EVELOCITYOUTPUTPASS(op) \
	op(EVelocityOutputPass::DepthPass) \
	op(EVelocityOutputPass::BasePass) \
	op(EVelocityOutputPass::AfterBasePass) 

namespace EVelocityOutputPass { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVelocityOutputPass::Type>();
// ********** End Enum EVelocityOutputPass *********************************************************

// ********** Begin Enum EVertexDeformationOutputsVelocity *****************************************
#define FOREACH_ENUM_EVERTEXDEFORMATIONOUTPUTSVELOCITY(op) \
	op(EVertexDeformationOutputsVelocity::Off) \
	op(EVertexDeformationOutputsVelocity::On) \
	op(EVertexDeformationOutputsVelocity::Auto) 

namespace EVertexDeformationOutputsVelocity { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVertexDeformationOutputsVelocity::Type>();
// ********** End Enum EVertexDeformationOutputsVelocity *******************************************

// ********** Begin Enum EAlphaChannelMode *********************************************************
#define FOREACH_ENUM_EALPHACHANNELMODE(op) \
	op(EAlphaChannelMode::Disabled) \
	op(EAlphaChannelMode::Enabled) \
	op(EAlphaChannelMode::LinearColorSpaceOnly) \
	op(EAlphaChannelMode::AllowThroughTonemapper) 

namespace EAlphaChannelMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAlphaChannelMode::Type>();
// ********** End Enum EAlphaChannelMode ***********************************************************

// ********** Begin Enum EAutoExposureMethodUI *****************************************************
#define FOREACH_ENUM_EAUTOEXPOSUREMETHODUI(op) \
	op(EAutoExposureMethodUI::AEM_Histogram) \
	op(EAutoExposureMethodUI::AEM_Basic) \
	op(EAutoExposureMethodUI::AEM_Manual) 

namespace EAutoExposureMethodUI { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutoExposureMethodUI::Type>();
// ********** End Enum EAutoExposureMethodUI *******************************************************

// ********** Begin Enum EDefaultBackBufferPixelFormat *********************************************
#define FOREACH_ENUM_EDEFAULTBACKBUFFERPIXELFORMAT(op) \
	op(EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8) \
	op(EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED) \
	op(EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED) \
	op(EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA) \
	op(EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10) 

namespace EDefaultBackBufferPixelFormat { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDefaultBackBufferPixelFormat::Type>();
// ********** End Enum EDefaultBackBufferPixelFormat ***********************************************

// ********** Begin Enum EFixedFoveationLevels *****************************************************
#define FOREACH_ENUM_EFIXEDFOVEATIONLEVELS(op) \
	op(EFixedFoveationLevels::Disabled) \
	op(EFixedFoveationLevels::Low) \
	op(EFixedFoveationLevels::Medium) \
	op(EFixedFoveationLevels::High) \
	op(EFixedFoveationLevels::HighTop) 

namespace EFixedFoveationLevels { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFixedFoveationLevels::Type>();
// ********** End Enum EFixedFoveationLevels *******************************************************

// ********** Begin Enum EMobileAntiAliasingMethod *************************************************
#define FOREACH_ENUM_EMOBILEANTIALIASINGMETHOD(op) \
	op(EMobileAntiAliasingMethod::None) \
	op(EMobileAntiAliasingMethod::FXAA) \
	op(EMobileAntiAliasingMethod::TemporalAA) \
	op(EMobileAntiAliasingMethod::MSAA) \
	op(EMobileAntiAliasingMethod::TSR) \
	op(EMobileAntiAliasingMethod::SMAA) 

namespace EMobileAntiAliasingMethod { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMobileAntiAliasingMethod::Type>();
// ********** End Enum EMobileAntiAliasingMethod ***************************************************

// ********** Begin Enum EMobileFloatPrecisionMode *************************************************
#define FOREACH_ENUM_EMOBILEFLOATPRECISIONMODE(op) \
	op(EMobileFloatPrecisionMode::Half) \
	op(EMobileFloatPrecisionMode::Full_MaterialExpressionOnly) \
	op(EMobileFloatPrecisionMode::Full) 

namespace EMobileFloatPrecisionMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMobileFloatPrecisionMode::Type>();
// ********** End Enum EMobileFloatPrecisionMode ***************************************************

// ********** Begin Enum EMobileShadingPath ********************************************************
#define FOREACH_ENUM_EMOBILESHADINGPATH(op) \
	op(EMobileShadingPath::Forward) \
	op(EMobileShadingPath::Deferred) 

namespace EMobileShadingPath { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMobileShadingPath::Type>();
// ********** End Enum EMobileShadingPath **********************************************************

// ********** Begin Enum ELightFunctionAtlasPixelFormat ********************************************
#define FOREACH_ENUM_ELIGHTFUNCTIONATLASPIXELFORMAT(op) \
	op(ELightFunctionAtlasPixelFormat::LFAPF_R8) \
	op(ELightFunctionAtlasPixelFormat::LFAPF_R8G8B8) 

namespace ELightFunctionAtlasPixelFormat { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELightFunctionAtlasPixelFormat::Type>();
// ********** End Enum ELightFunctionAtlasPixelFormat **********************************************

// ********** Begin Enum EShaderCompressionFormat **************************************************
#define FOREACH_ENUM_ESHADERCOMPRESSIONFORMAT(op) \
	op(EShaderCompressionFormat::None) \
	op(EShaderCompressionFormat::LZ4) \
	op(EShaderCompressionFormat::Oodle) \
	op(EShaderCompressionFormat::Zlib) 

namespace EShaderCompressionFormat { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EShaderCompressionFormat::Type>();
// ********** End Enum EShaderCompressionFormat ****************************************************

// ********** Begin Enum ELumenSoftwareTracingMode *************************************************
#define FOREACH_ENUM_ELUMENSOFTWARETRACINGMODE(op) \
	op(ELumenSoftwareTracingMode::DetailTracing) \
	op(ELumenSoftwareTracingMode::GlobalTracing) 

namespace ELumenSoftwareTracingMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELumenSoftwareTracingMode::Type>();
// ********** End Enum ELumenSoftwareTracingMode ***************************************************

// ********** Begin Enum ELumenRayLightingMode *****************************************************
#define FOREACH_ENUM_ELUMENRAYLIGHTINGMODE(op) \
	op(ELumenRayLightingMode::SurfaceCache) \
	op(ELumenRayLightingMode::HitLightingForReflections) \
	op(ELumenRayLightingMode::HitLighting) 

enum class ELumenRayLightingMode : uint8;
template<> struct TIsUEnumClass<ELumenRayLightingMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELumenRayLightingMode>();
// ********** End Enum ELumenRayLightingMode *******************************************************

// ********** Begin Enum ELumenScreenTracingSource *************************************************
#define FOREACH_ENUM_ELUMENSCREENTRACINGSOURCE(op) \
	op(ELumenScreenTracingSource::SceneColor) \
	op(ELumenScreenTracingSource::AntialiasedSceneColorWithTranslucency) 

enum class ELumenScreenTracingSource : uint8;
template<> struct TIsUEnumClass<ELumenScreenTracingSource> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELumenScreenTracingSource>();
// ********** End Enum ELumenScreenTracingSource ***************************************************

// ********** Begin Enum EWorkingColorSpace ********************************************************
#define FOREACH_ENUM_EWORKINGCOLORSPACE(op) \
	op(EWorkingColorSpace::sRGB) \
	op(EWorkingColorSpace::Rec2020) \
	op(EWorkingColorSpace::ACESAP0) \
	op(EWorkingColorSpace::ACESAP1) \
	op(EWorkingColorSpace::P3DCI) \
	op(EWorkingColorSpace::P3D65) \
	op(EWorkingColorSpace::Custom) 

namespace EWorkingColorSpace { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWorkingColorSpace::Type>();
// ********** End Enum EWorkingColorSpace **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
