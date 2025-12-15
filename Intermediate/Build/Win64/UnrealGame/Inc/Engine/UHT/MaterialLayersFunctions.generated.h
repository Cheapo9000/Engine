// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialLayersFunctions.h"

#ifdef ENGINE_MaterialLayersFunctions_generated_h
#error "MaterialLayersFunctions.generated.h already included, missing '#pragma once' in MaterialLayersFunctions.h"
#endif
#define ENGINE_MaterialLayersFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialLayersFunctionsEditorOnlyData ****************************
struct Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialLayersFunctions_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialLayersFunctionsEditorOnlyData;
// ********** End ScriptStruct FMaterialLayersFunctionsEditorOnlyData ******************************

// ********** Begin ScriptStruct FMaterialLayersFunctionsRuntimeData *******************************
struct Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialLayersFunctions_h_132_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialLayersFunctionsRuntimeData;
// ********** End ScriptStruct FMaterialLayersFunctionsRuntimeData *********************************

// ********** Begin ScriptStruct FMaterialLayersFunctions ******************************************
struct Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialLayersFunctions_h_222_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FMaterialLayersFunctionsRuntimeData Super;


struct FMaterialLayersFunctions;
// ********** End ScriptStruct FMaterialLayersFunctions ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialLayersFunctions_h

// ********** Begin Enum EMaterialLayerLinkState ***************************************************
#define FOREACH_ENUM_EMATERIALLAYERLINKSTATE(op) \
	op(EMaterialLayerLinkState::Uninitialized) \
	op(EMaterialLayerLinkState::LinkedToParent) \
	op(EMaterialLayerLinkState::UnlinkedFromParent) \
	op(EMaterialLayerLinkState::NotFromParent) 

enum class EMaterialLayerLinkState : uint8;
template<> struct TIsUEnumClass<EMaterialLayerLinkState> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialLayerLinkState>();
// ********** End Enum EMaterialLayerLinkState *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
