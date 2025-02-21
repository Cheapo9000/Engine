// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandmassActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FLandscapeBrushParameters;
#ifdef LANDMASSEDITOR_LandmassActor_generated_h
#error "LandmassActor.generated.h already included, missing '#pragma once' in LandmassActor.h"
#endif
#define LANDMASSEDITOR_LandmassActor_generated_h

#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_15_DELEGATE \
LANDMASSEDITOR_API void FOnBrushUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBrushUpdatedDelegate);


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ActorSelectionChanged_Implementation(bool bSelected); \
	virtual void RenderLayer_Implementation(FLandscapeBrushParameters const& InParameters); \
	virtual void CustomTick_Implementation(float DeltaSeconds); \
	DECLARE_FUNCTION(execSetMeshExentsMaterial); \
	DECLARE_FUNCTION(execDrawBrushMaterial); \
	DECLARE_FUNCTION(execActorSelectionChanged); \
	DECLARE_FUNCTION(execUpdateBrushExtents); \
	DECLARE_FUNCTION(execSetEditorTickEnabled); \
	DECLARE_FUNCTION(execMoveToBottom); \
	DECLARE_FUNCTION(execMoveToTop); \
	DECLARE_FUNCTION(execMoveBrushDown); \
	DECLARE_FUNCTION(execMoveBrushUp); \
	DECLARE_FUNCTION(execRestoreLandscapeEditing); \
	DECLARE_FUNCTION(execFastPreviewMode); \
	DECLARE_FUNCTION(execRenderLayer); \
	DECLARE_FUNCTION(execRenderLayer_Native); \
	DECLARE_FUNCTION(execCustomTick);


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandmassActor(); \
	friend struct Z_Construct_UClass_ALandmassActor_Statics; \
public: \
	DECLARE_CLASS(ALandmassActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandmassEditor"), NO_API) \
	DECLARE_SERIALIZER(ALandmassActor)


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandmassActor(ALandmassActor&&); \
	ALandmassActor(const ALandmassActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandmassActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandmassActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALandmassActor) \
	NO_API virtual ~ALandmassActor();


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDMASSEDITOR_API UClass* StaticClass<class ALandmassActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h


#define FOREACH_ENUM_EBRUSHBLENDMODE(op) \
	op(EBrushBlendMode::AlphaBlend) \
	op(EBrushBlendMode::Min) \
	op(EBrushBlendMode::Max) \
	op(EBrushBlendMode::Additive) 

enum class EBrushBlendMode : uint8;
template<> struct TIsUEnumClass<EBrushBlendMode> { enum { Value = true }; };
template<> LANDMASSEDITOR_API UEnum* StaticEnum<EBrushBlendMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
