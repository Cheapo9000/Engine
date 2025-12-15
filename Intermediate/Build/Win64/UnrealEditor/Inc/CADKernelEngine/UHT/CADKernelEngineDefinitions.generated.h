// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CADKernelEngineDefinitions.h"

#ifdef CADKERNELENGINE_CADKernelEngineDefinitions_generated_h
#error "CADKernelEngineDefinitions.generated.h already included, missing '#pragma once' in CADKernelEngineDefinitions.h"
#endif
#define CADKERNELENGINE_CADKernelEngineDefinitions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCADKernelModelParameters *****************************************
struct Z_Construct_UScriptStruct_FCADKernelModelParameters_Statics;
#define FID_Engine_Source_Runtime_Datasmith_CADKernel_Engine_Public_CADKernelEngineDefinitions_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCADKernelModelParameters_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCADKernelModelParameters;
// ********** End ScriptStruct FCADKernelModelParameters *******************************************

// ********** Begin ScriptStruct FCADKernelMeshParameters ******************************************
struct Z_Construct_UScriptStruct_FCADKernelMeshParameters_Statics;
#define FID_Engine_Source_Runtime_Datasmith_CADKernel_Engine_Public_CADKernelEngineDefinitions_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCADKernelMeshParameters_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCADKernelMeshParameters;
// ********** End ScriptStruct FCADKernelMeshParameters ********************************************

// ********** Begin ScriptStruct FCADKernelTessellationSettings ************************************
struct Z_Construct_UScriptStruct_FCADKernelTessellationSettings_Statics;
#define FID_Engine_Source_Runtime_Datasmith_CADKernel_Engine_Public_CADKernelEngineDefinitions_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCADKernelTessellationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCADKernelTessellationSettings;
// ********** End ScriptStruct FCADKernelTessellationSettings **************************************

// ********** Begin ScriptStruct FCADKernelRetessellationSettings **********************************
struct Z_Construct_UScriptStruct_FCADKernelRetessellationSettings_Statics;
#define FID_Engine_Source_Runtime_Datasmith_CADKernel_Engine_Public_CADKernelEngineDefinitions_h_214_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCADKernelRetessellationSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FCADKernelTessellationSettings Super;


struct FCADKernelRetessellationSettings;
// ********** End ScriptStruct FCADKernelRetessellationSettings ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Datasmith_CADKernel_Engine_Public_CADKernelEngineDefinitions_h

// ********** Begin Enum ECADKernelModelCoordSystem ************************************************
#define FOREACH_ENUM_ECADKERNELMODELCOORDSYSTEM(op) \
	op(ECADKernelModelCoordSystem::ZUp_LeftHanded) \
	op(ECADKernelModelCoordSystem::ZUp_RightHanded) \
	op(ECADKernelModelCoordSystem::YUp_LeftHanded) \
	op(ECADKernelModelCoordSystem::YUp_RightHanded) \
	op(ECADKernelModelCoordSystem::ZUp_RightHanded_FBXLegacy) 

enum class ECADKernelModelCoordSystem : uint8;
template<> struct TIsUEnumClass<ECADKernelModelCoordSystem> { enum { Value = true }; };
template<> CADKERNELENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECADKernelModelCoordSystem>();
// ********** End Enum ECADKernelModelCoordSystem **************************************************

// ********** Begin Enum ECADKernelStitchingTechnique **********************************************
#define FOREACH_ENUM_ECADKERNELSTITCHINGTECHNIQUE(op) \
	op(ECADKernelStitchingTechnique::StitchingNone) \
	op(ECADKernelStitchingTechnique::StitchingHeal) \
	op(ECADKernelStitchingTechnique::StitchingSew) 

enum class ECADKernelStitchingTechnique : uint8;
template<> struct TIsUEnumClass<ECADKernelStitchingTechnique> { enum { Value = true }; };
template<> CADKERNELENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECADKernelStitchingTechnique>();
// ********** End Enum ECADKernelStitchingTechnique ************************************************

// ********** Begin Enum ECADKernelRetessellationRule **********************************************
#define FOREACH_ENUM_ECADKERNELRETESSELLATIONRULE(op) \
	op(ECADKernelRetessellationRule::AllFaces) \
	op(ECADKernelRetessellationRule::SkipDeletedFaces) 

enum class ECADKernelRetessellationRule : uint8;
template<> struct TIsUEnumClass<ECADKernelRetessellationRule> { enum { Value = true }; };
template<> CADKERNELENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECADKernelRetessellationRule>();
// ********** End Enum ECADKernelRetessellationRule ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
