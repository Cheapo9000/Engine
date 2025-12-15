// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeProxy.h"

#ifdef LANDSCAPE_LandscapeProxy_generated_h
#error "LandscapeProxy.generated.h already included, missing '#pragma once' in LandscapeProxy.h"
#endif
#define LANDSCAPE_LandscapeProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALandscape;
class ULandscapeLayerInfoObject;
class UMaterialInterface;
class USplineComponent;
class UTexture;
class UTextureRenderTarget2D;
enum class ERuntimeVirtualTextureMainPassType : uint8;
struct FLinearColor;

// ********** Begin ScriptStruct FLandscapeTargetLayerSettings *************************************
struct Z_Construct_UScriptStruct_FLandscapeTargetLayerSettings_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeTargetLayerSettings_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeTargetLayerSettings;
// ********** End ScriptStruct FLandscapeTargetLayerSettings ***************************************

// ********** Begin ScriptStruct FLandscapeEditorLayerSettings *************************************
struct Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_119_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeEditorLayerSettings;
// ********** End ScriptStruct FLandscapeEditorLayerSettings ***************************************

// ********** Begin ScriptStruct FLandscapeImportLayerInfo *****************************************
struct Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeImportLayerInfo;
// ********** End ScriptStruct FLandscapeImportLayerInfo *******************************************

// ********** Begin ScriptStruct FLandscapeProxyMaterialOverride ***********************************
struct Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_380_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeProxyMaterialOverride;
// ********** End ScriptStruct FLandscapeProxyMaterialOverride *************************************

// ********** Begin Class ALandscapeProxy **********************************************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLandscapeExportHeightmapToRenderTarget); \
	DECLARE_FUNCTION(execGetLandscapeActor); \
	DECLARE_FUNCTION(execSetLandscapeMaterialScalarParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialVectorParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialTextureParameterValue); \
	DECLARE_FUNCTION(execEditorApplySpline); \
	DECLARE_FUNCTION(execEditorSetLandscapeMaterial); \
	DECLARE_FUNCTION(execChangeComponentScreenSizeToUseSubSections); \
	DECLARE_FUNCTION(execChangeLODDistanceFactor); \
	DECLARE_FUNCTION(execSetVirtualTextureRenderPassType);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execDeleteUnusedLayers); \
	DECLARE_FUNCTION(execLandscapeExportWeightmapToRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportWeightmapFromRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportHeightmapFromRenderTarget);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALandscapeProxy, LANDSCAPE_API)


struct Z_Construct_UClass_ALandscapeProxy_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend struct ::Z_Construct_UClass_ALandscapeProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ALandscapeProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandscapeProxy, APartitionActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ALandscapeProxy_NoRegister) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ALandscapeProxy*>(this); }


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandscapeProxy(ALandscapeProxy&&) = delete; \
	ALandscapeProxy(const ALandscapeProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_416_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_419_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALandscapeProxy;

// ********** End Class ALandscapeProxy ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h

// ********** Begin Enum ELandscapeImportAlphamapType **********************************************
#define FOREACH_ENUM_ELANDSCAPEIMPORTALPHAMAPTYPE(op) \
	op(ELandscapeImportAlphamapType::Additive) \
	op(ELandscapeImportAlphamapType::Layered) 

enum class ELandscapeImportAlphamapType : uint8;
template<> struct TIsUEnumClass<ELandscapeImportAlphamapType> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeImportAlphamapType>();
// ********** End Enum ELandscapeImportAlphamapType ************************************************

// ********** Begin Enum ELandscapeLayerPaintingRestriction ****************************************
#define FOREACH_ENUM_ELANDSCAPELAYERPAINTINGRESTRICTION(op) \
	op(ELandscapeLayerPaintingRestriction::None) \
	op(ELandscapeLayerPaintingRestriction::UseMaxLayers) \
	op(ELandscapeLayerPaintingRestriction::ExistingOnly) \
	op(ELandscapeLayerPaintingRestriction::UseComponentAllowList) 

enum class ELandscapeLayerPaintingRestriction : uint8;
template<> struct TIsUEnumClass<ELandscapeLayerPaintingRestriction> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeLayerPaintingRestriction>();
// ********** End Enum ELandscapeLayerPaintingRestriction ******************************************

// ********** Begin Enum ELandscapeLayerDisplayMode ************************************************
#define FOREACH_ENUM_ELANDSCAPELAYERDISPLAYMODE(op) \
	op(ELandscapeLayerDisplayMode::Default) \
	op(ELandscapeLayerDisplayMode::Alphabetical) \
	op(ELandscapeLayerDisplayMode::UserSpecific) \
	op(ELandscapeLayerDisplayMode::ByBlendMethod) 

enum class ELandscapeLayerDisplayMode : uint8;
template<> struct TIsUEnumClass<ELandscapeLayerDisplayMode> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeLayerDisplayMode>();
// ********** End Enum ELandscapeLayerDisplayMode **************************************************

// ********** Begin Enum ELandscapeHLODTextureSizePolicy *******************************************
#define FOREACH_ENUM_ELANDSCAPEHLODTEXTURESIZEPOLICY(op) \
	op(ELandscapeHLODTextureSizePolicy::AutomaticSize) \
	op(ELandscapeHLODTextureSizePolicy::SpecificSize) 

enum class ELandscapeHLODTextureSizePolicy : uint8;
template<> struct TIsUEnumClass<ELandscapeHLODTextureSizePolicy> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeHLODTextureSizePolicy>();
// ********** End Enum ELandscapeHLODTextureSizePolicy *********************************************

// ********** Begin Enum ELandscapeHLODMeshSourceLODPolicy *****************************************
#define FOREACH_ENUM_ELANDSCAPEHLODMESHSOURCELODPOLICY(op) \
	op(ELandscapeHLODMeshSourceLODPolicy::AutomaticLOD) \
	op(ELandscapeHLODMeshSourceLODPolicy::SpecificLOD) \
	op(ELandscapeHLODMeshSourceLODPolicy::LowestDetailLOD) 

enum class ELandscapeHLODMeshSourceLODPolicy : uint8;
template<> struct TIsUEnumClass<ELandscapeHLODMeshSourceLODPolicy> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeHLODMeshSourceLODPolicy>();
// ********** End Enum ELandscapeHLODMeshSourceLODPolicy *******************************************

// ********** Begin Enum ELandscapeLODFalloff ******************************************************
#define FOREACH_ENUM_ELANDSCAPELODFALLOFF(op) \
	op(ELandscapeLODFalloff::Linear) \
	op(ELandscapeLODFalloff::SquareRoot) 

namespace ELandscapeLODFalloff { enum Type : int; }
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeLODFalloff::Type>();
// ********** End Enum ELandscapeLODFalloff ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
