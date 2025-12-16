// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGActorSelector.h"

#ifdef PCG_PCGActorSelector_generated_h
#error "PCGActorSelector.generated.h already included, missing '#pragma once' in PCGActorSelector.h"
#endif
#define PCG_PCGActorSelector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGCustomSelectionKey ********************************************
struct Z_Construct_UScriptStruct_FPCGCustomSelectionKey_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGCustomSelectionKey_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGCustomSelectionKey;
// ********** End ScriptStruct FPCGCustomSelectionKey **********************************************

// ********** Begin ScriptStruct FPCGSelectionKey **************************************************
struct Z_Construct_UScriptStruct_FPCGSelectionKey_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSelectionKey_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSelectionKey;
// ********** End ScriptStruct FPCGSelectionKey ****************************************************

// ********** Begin ScriptStruct FPCGActorSelectorSettings *****************************************
struct Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_206_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGActorSelectorSettings_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGActorSelectorSettings;
// ********** End ScriptStruct FPCGActorSelectorSettings *******************************************

// ********** Begin ScriptStruct FPCGComponentSelectorSettings *************************************
struct Z_Construct_UScriptStruct_FPCGComponentSelectorSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h_287_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGComponentSelectorSettings_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGComponentSelectorSettings;
// ********** End ScriptStruct FPCGComponentSelectorSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGActorSelector_h

// ********** Begin Enum EPCGActorSelection ********************************************************
#define FOREACH_ENUM_EPCGACTORSELECTION(op) \
	op(EPCGActorSelection::ByTag) \
	op(EPCGActorSelection::ByName) \
	op(EPCGActorSelection::ByClass) \
	op(EPCGActorSelection::ByPath) \
	op(EPCGActorSelection::Unknown) 

enum class EPCGActorSelection : uint8;
template<> struct TIsUEnumClass<EPCGActorSelection> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGActorSelection>();
// ********** End Enum EPCGActorSelection **********************************************************

// ********** Begin Enum EPCGComponentSelection ****************************************************
#define FOREACH_ENUM_EPCGCOMPONENTSELECTION(op) \
	op(EPCGComponentSelection::ByTag) \
	op(EPCGComponentSelection::ByClass) \
	op(EPCGComponentSelection::Unknown) 

enum class EPCGComponentSelection : uint8;
template<> struct TIsUEnumClass<EPCGComponentSelection> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGComponentSelection>();
// ********** End Enum EPCGComponentSelection ******************************************************

// ********** Begin Enum EPCGActorFilter ***********************************************************
#define FOREACH_ENUM_EPCGACTORFILTER(op) \
	op(EPCGActorFilter::Self) \
	op(EPCGActorFilter::Parent) \
	op(EPCGActorFilter::Root) \
	op(EPCGActorFilter::AllWorldActors) \
	op(EPCGActorFilter::Original) \
	op(EPCGActorFilter::FromInput) 

enum class EPCGActorFilter : uint8;
template<> struct TIsUEnumClass<EPCGActorFilter> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGActorFilter>();
// ********** End Enum EPCGActorFilter *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
