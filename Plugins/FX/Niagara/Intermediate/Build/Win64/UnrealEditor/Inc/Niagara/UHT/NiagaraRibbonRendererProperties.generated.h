// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraRibbonRendererProperties.h"

#ifdef NIAGARA_NiagaraRibbonRendererProperties_generated_h
#error "NiagaraRibbonRendererProperties.generated.h already included, missing '#pragma once' in NiagaraRibbonRendererProperties.h"
#endif
#define NIAGARA_NiagaraRibbonRendererProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraRibbonShapeCustomVertex ***********************************
struct Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraRibbonShapeCustomVertex;
// ********** End ScriptStruct FNiagaraRibbonShapeCustomVertex *************************************

// ********** Begin ScriptStruct FNiagaraRibbonUVSettings ******************************************
struct Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraRibbonUVSettings;
// ********** End ScriptStruct FNiagaraRibbonUVSettings ********************************************

// ********** Begin Class UNiagaraRibbonRendererProperties *****************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_196_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UNiagaraRibbonRendererProperties, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_196_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraRibbonRendererProperties(); \
	friend struct ::Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraRibbonRendererProperties, UNiagaraRendererProperties, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraRibbonRendererProperties) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_196_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_196_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraRibbonRendererProperties(UNiagaraRibbonRendererProperties&&) = delete; \
	UNiagaraRibbonRendererProperties(const UNiagaraRibbonRendererProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraRibbonRendererProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraRibbonRendererProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraRibbonRendererProperties) \
	NIAGARA_API virtual ~UNiagaraRibbonRendererProperties();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_192_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_196_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_196_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_196_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraRibbonRendererProperties;

// ********** End Class UNiagaraRibbonRendererProperties *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h

// ********** Begin Enum ENiagaraRibbonFacingMode **************************************************
#define FOREACH_ENUM_ENIAGARARIBBONFACINGMODE(op) \
	op(ENiagaraRibbonFacingMode::Screen) \
	op(ENiagaraRibbonFacingMode::Custom) \
	op(ENiagaraRibbonFacingMode::CustomSideVector) 

enum class ENiagaraRibbonFacingMode : uint8;
template<> struct TIsUEnumClass<ENiagaraRibbonFacingMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraRibbonFacingMode>();
// ********** End Enum ENiagaraRibbonFacingMode ****************************************************

// ********** Begin Enum ENiagaraRibbonAgeOffsetMode ***********************************************
#define FOREACH_ENUM_ENIAGARARIBBONAGEOFFSETMODE(op) \
	op(ENiagaraRibbonAgeOffsetMode::Scale) \
	op(ENiagaraRibbonAgeOffsetMode::Clip) 

enum class ENiagaraRibbonAgeOffsetMode : uint8;
template<> struct TIsUEnumClass<ENiagaraRibbonAgeOffsetMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraRibbonAgeOffsetMode>();
// ********** End Enum ENiagaraRibbonAgeOffsetMode *************************************************

// ********** Begin Enum ENiagaraRibbonDrawDirection ***********************************************
#define FOREACH_ENUM_ENIAGARARIBBONDRAWDIRECTION(op) \
	op(ENiagaraRibbonDrawDirection::FrontToBack) \
	op(ENiagaraRibbonDrawDirection::BackToFront) 

enum class ENiagaraRibbonDrawDirection : uint8;
template<> struct TIsUEnumClass<ENiagaraRibbonDrawDirection> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraRibbonDrawDirection>();
// ********** End Enum ENiagaraRibbonDrawDirection *************************************************

// ********** Begin Enum ENiagaraRibbonShapeMode ***************************************************
#define FOREACH_ENUM_ENIAGARARIBBONSHAPEMODE(op) \
	op(ENiagaraRibbonShapeMode::Plane) \
	op(ENiagaraRibbonShapeMode::MultiPlane) \
	op(ENiagaraRibbonShapeMode::Tube) \
	op(ENiagaraRibbonShapeMode::Custom) 

enum class ENiagaraRibbonShapeMode : uint8;
template<> struct TIsUEnumClass<ENiagaraRibbonShapeMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraRibbonShapeMode>();
// ********** End Enum ENiagaraRibbonShapeMode *****************************************************

// ********** Begin Enum ENiagaraRibbonTessellationMode ********************************************
#define FOREACH_ENUM_ENIAGARARIBBONTESSELLATIONMODE(op) \
	op(ENiagaraRibbonTessellationMode::Automatic) \
	op(ENiagaraRibbonTessellationMode::Custom) \
	op(ENiagaraRibbonTessellationMode::Disabled) 

enum class ENiagaraRibbonTessellationMode : uint8;
template<> struct TIsUEnumClass<ENiagaraRibbonTessellationMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraRibbonTessellationMode>();
// ********** End Enum ENiagaraRibbonTessellationMode **********************************************

// ********** Begin Enum ENiagaraRibbonUVEdgeMode **************************************************
#define FOREACH_ENUM_ENIAGARARIBBONUVEDGEMODE(op) \
	op(ENiagaraRibbonUVEdgeMode::SmoothTransition) \
	op(ENiagaraRibbonUVEdgeMode::Locked) 

enum class ENiagaraRibbonUVEdgeMode : uint8;
template<> struct TIsUEnumClass<ENiagaraRibbonUVEdgeMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraRibbonUVEdgeMode>();
// ********** End Enum ENiagaraRibbonUVEdgeMode ****************************************************

// ********** Begin Enum ENiagaraRibbonUVDistributionMode ******************************************
#define FOREACH_ENUM_ENIAGARARIBBONUVDISTRIBUTIONMODE(op) \
	op(ENiagaraRibbonUVDistributionMode::ScaledUniformly) \
	op(ENiagaraRibbonUVDistributionMode::ScaledUsingRibbonSegmentLength) \
	op(ENiagaraRibbonUVDistributionMode::TiledOverRibbonLength) \
	op(ENiagaraRibbonUVDistributionMode::TiledFromStartOverRibbonLength) 

enum class ENiagaraRibbonUVDistributionMode : uint8;
template<> struct TIsUEnumClass<ENiagaraRibbonUVDistributionMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraRibbonUVDistributionMode>();
// ********** End Enum ENiagaraRibbonUVDistributionMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
