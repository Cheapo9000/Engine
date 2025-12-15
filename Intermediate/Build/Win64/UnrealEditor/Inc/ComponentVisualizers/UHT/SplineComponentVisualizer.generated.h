// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineComponentVisualizer.h"

#ifdef COMPONENTVISUALIZERS_SplineComponentVisualizer_generated_h
#error "SplineComponentVisualizer.generated.h already included, missing '#pragma once' in SplineComponentVisualizer.h"
#endif
#define COMPONENTVISUALIZERS_SplineComponentVisualizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USplineComponentVisualizerSelectionState *********************************
struct Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics;
COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_USplineComponentVisualizerSelectionState_NoRegister();

#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineComponentVisualizerSelectionState(); \
	friend struct ::Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPONENTVISUALIZERS_API UClass* ::Z_Construct_UClass_USplineComponentVisualizerSelectionState_NoRegister(); \
public: \
	DECLARE_CLASS2(USplineComponentVisualizerSelectionState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ComponentVisualizers"), Z_Construct_UClass_USplineComponentVisualizerSelectionState_NoRegister) \
	DECLARE_SERIALIZER(USplineComponentVisualizerSelectionState)


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPONENTVISUALIZERS_API USplineComponentVisualizerSelectionState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplineComponentVisualizerSelectionState(USplineComponentVisualizerSelectionState&&) = delete; \
	USplineComponentVisualizerSelectionState(const USplineComponentVisualizerSelectionState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPONENTVISUALIZERS_API, USplineComponentVisualizerSelectionState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineComponentVisualizerSelectionState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineComponentVisualizerSelectionState) \
	COMPONENTVISUALIZERS_API virtual ~USplineComponentVisualizerSelectionState();


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_187_PROLOG
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplineComponentVisualizerSelectionState;

// ********** End Class USplineComponentVisualizerSelectionState ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h

// ********** Begin Enum ESelectedTangentHandle ****************************************************
#define FOREACH_ENUM_ESELECTEDTANGENTHANDLE(op) \
	op(ESelectedTangentHandle::None) \
	op(ESelectedTangentHandle::Leave) \
	op(ESelectedTangentHandle::Arrive) 

enum class ESelectedTangentHandle;
template<> struct TIsUEnumClass<ESelectedTangentHandle> { enum { Value = true }; };
template<> COMPONENTVISUALIZERS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESelectedTangentHandle>();
// ********** End Enum ESelectedTangentHandle ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
