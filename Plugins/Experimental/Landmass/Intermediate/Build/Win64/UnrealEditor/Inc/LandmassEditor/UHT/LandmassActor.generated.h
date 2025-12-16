// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandmassActor.h"

#ifdef LANDMASSEDITOR_LandmassActor_generated_h
#error "LandmassActor.generated.h already included, missing '#pragma once' in LandmassActor.h"
#endif
#define LANDMASSEDITOR_LandmassActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FLandscapeBrushParameters;

// ********** Begin Delegate FOnBrushUpdatedDelegate ***********************************************
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_15_DELEGATE \
LANDMASSEDITOR_API void FOnBrushUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBrushUpdatedDelegate);


// ********** End Delegate FOnBrushUpdatedDelegate *************************************************

// ********** Begin Class ALandmassActor ***********************************************************
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
struct Z_Construct_UClass_ALandmassActor_Statics;
LANDMASSEDITOR_API UClass* Z_Construct_UClass_ALandmassActor_NoRegister();

#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandmassActor(); \
	friend struct ::Z_Construct_UClass_ALandmassActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDMASSEDITOR_API UClass* ::Z_Construct_UClass_ALandmassActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandmassActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandmassEditor"), Z_Construct_UClass_ALandmassActor_NoRegister) \
	DECLARE_SERIALIZER(ALandmassActor)


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandmassActor(ALandmassActor&&) = delete; \
	ALandmassActor(const ALandmassActor&) = delete; \
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


class ALandmassActor;

// ********** End Class ALandmassActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h

// ********** Begin Enum EBrushBlendMode ***********************************************************
#define FOREACH_ENUM_EBRUSHBLENDMODE(op) \
	op(EBrushBlendMode::AlphaBlend) \
	op(EBrushBlendMode::Min) \
	op(EBrushBlendMode::Max) \
	op(EBrushBlendMode::Additive) 

enum class EBrushBlendMode : uint8;
template<> struct TIsUEnumClass<EBrushBlendMode> { enum { Value = true }; };
template<> LANDMASSEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBrushBlendMode>();
// ********** End Enum EBrushBlendMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
