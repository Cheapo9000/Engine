// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneShapeComponentVisualizer.h"

#ifdef ZONEGRAPHEDITOR_ZoneShapeComponentVisualizer_generated_h
#error "ZoneShapeComponentVisualizer.generated.h already included, missing '#pragma once' in ZoneShapeComponentVisualizer.h"
#endif
#define ZONEGRAPHEDITOR_ZoneShapeComponentVisualizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZoneShapeComponentVisualizerSelectionState ******************************
struct Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics;
ZONEGRAPHEDITOR_API UClass* Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneShapeComponentVisualizerSelectionState(); \
	friend struct ::Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPHEDITOR_API UClass* ::Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneShapeComponentVisualizerSelectionState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ZoneGraphEditor"), Z_Construct_UClass_UZoneShapeComponentVisualizerSelectionState_NoRegister) \
	DECLARE_SERIALIZER(UZoneShapeComponentVisualizerSelectionState)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ZONEGRAPHEDITOR_API UZoneShapeComponentVisualizerSelectionState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneShapeComponentVisualizerSelectionState(UZoneShapeComponentVisualizerSelectionState&&) = delete; \
	UZoneShapeComponentVisualizerSelectionState(const UZoneShapeComponentVisualizerSelectionState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPHEDITOR_API, UZoneShapeComponentVisualizerSelectionState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneShapeComponentVisualizerSelectionState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneShapeComponentVisualizerSelectionState) \
	ZONEGRAPHEDITOR_API virtual ~UZoneShapeComponentVisualizerSelectionState();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneShapeComponentVisualizerSelectionState;

// ********** End Class UZoneShapeComponentVisualizerSelectionState ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphEditor_Private_ZoneShapeComponentVisualizer_h

// ********** Begin Enum FZoneShapeControlPointType ************************************************
#define FOREACH_ENUM_FZONESHAPECONTROLPOINTTYPE(op) \
	op(FZoneShapeControlPointType::None) \
	op(FZoneShapeControlPointType::In) \
	op(FZoneShapeControlPointType::Out) 

enum class FZoneShapeControlPointType : uint8;
template<> struct TIsUEnumClass<FZoneShapeControlPointType> { enum { Value = true }; };
template<> ZONEGRAPHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<FZoneShapeControlPointType>();
// ********** End Enum FZoneShapeControlPointType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
