// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Implementations/PVMaterialSettings.h"

#ifdef PROCEDURALVEGETATION_PVMaterialSettings_generated_h
#error "PVMaterialSettings.generated.h already included, missing '#pragma once' in PVMaterialSettings.h"
#endif
#define PROCEDURALVEGETATION_PVMaterialSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTrunkGenerationMaterialSetup *************************************
struct Z_Construct_UScriptStruct_FTrunkGenerationMaterialSetup_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVMaterialSettings_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTrunkGenerationMaterialSetup_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct();


struct FTrunkGenerationMaterialSetup;
// ********** End ScriptStruct FTrunkGenerationMaterialSetup ***************************************

// ********** Begin ScriptStruct FPVMaterialSettings ***********************************************
struct Z_Construct_UScriptStruct_FPVMaterialSettings_Statics;
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVMaterialSettings_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPVMaterialSettings_Statics; \
	PROCEDURALVEGETATION_API static class UScriptStruct* StaticStruct();


struct FPVMaterialSettings;
// ********** End ScriptStruct FPVMaterialSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Implementations_PVMaterialSettings_h

// ********** Begin Enum EGenerationOffsetMethod ***************************************************
#define FOREACH_ENUM_EGENERATIONOFFSETMETHOD(op) \
	op(EGenerationOffsetMethod::Clamped) \
	op(EGenerationOffsetMethod::Refit) 

enum class EGenerationOffsetMethod : uint8;
template<> struct TIsUEnumClass<EGenerationOffsetMethod> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EGenerationOffsetMethod>();
// ********** End Enum EGenerationOffsetMethod *****************************************************

// ********** Begin Enum EMaterialDistributionMethod ***********************************************
#define FOREACH_ENUM_EMATERIALDISTRIBUTIONMETHOD(op) \
	op(EMaterialDistributionMethod::Repeat) \
	op(EMaterialDistributionMethod::Fit) 

enum class EMaterialDistributionMethod : uint8;
template<> struct TIsUEnumClass<EMaterialDistributionMethod> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialDistributionMethod>();
// ********** End Enum EMaterialDistributionMethod *************************************************

// ********** Begin Enum EYTextureMode *************************************************************
#define FOREACH_ENUM_EYTEXTUREMODE(op) \
	op(EYTextureMode::Default) \
	op(EYTextureMode::Fit0_1) 

enum class EYTextureMode : uint8;
template<> struct TIsUEnumClass<EYTextureMode> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EYTextureMode>();
// ********** End Enum EYTextureMode ***************************************************************

// ********** Begin Enum EUVMaterialMode ***********************************************************
#define FOREACH_ENUM_EUVMATERIALMODE(op) \
	op(EUVMaterialMode::Generation) \
	op(EUVMaterialMode::Age) \
	op(EUVMaterialMode::Radius) 

enum class EUVMaterialMode : uint8;
template<> struct TIsUEnumClass<EUVMaterialMode> { enum { Value = true }; };
template<> PROCEDURALVEGETATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EUVMaterialMode>();
// ********** End Enum EUVMaterialMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
