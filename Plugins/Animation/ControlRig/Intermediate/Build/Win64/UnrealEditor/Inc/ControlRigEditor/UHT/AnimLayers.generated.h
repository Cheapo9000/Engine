// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/AnimLayers/AnimLayers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;
#ifdef CONTROLRIGEDITOR_AnimLayers_generated_h
#error "AnimLayers.generated.h already included, missing '#pragma once' in AnimLayers.h"
#endif
#define CONTROLRIGEDITOR_AnimLayers_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLayerPropertyAndChannels_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FAnimLayerPropertyAndChannels>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLayerSelectionSet_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FAnimLayerSelectionSet>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLayerSectionItem_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FAnimLayerSectionItem>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLayerItem_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FAnimLayerItem>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLayerState_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FAnimLayerState>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLayerControlRigObject_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FAnimLayerControlRigObject>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLayerSceneObject_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FAnimLayerSceneObject>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLayerObjects_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FAnimLayerObjects>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_166_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimLayerWeightProxy(); \
	friend struct Z_Construct_UClass_UAnimLayerWeightProxy_Statics; \
public: \
	DECLARE_CLASS(UAnimLayerWeightProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UAnimLayerWeightProxy)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_166_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimLayerWeightProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimLayerWeightProxy(UAnimLayerWeightProxy&&); \
	UAnimLayerWeightProxy(const UAnimLayerWeightProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimLayerWeightProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimLayerWeightProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimLayerWeightProxy) \
	NO_API virtual ~UAnimLayerWeightProxy();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_163_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_166_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_166_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_166_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGEDITOR_API UClass* StaticClass<class UAnimLayerWeightProxy>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_186_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveSelectedInSequencer); \
	DECLARE_FUNCTION(execAddSelectedInSequencer); \
	DECLARE_FUNCTION(execSetType); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execSetWeight); \
	DECLARE_FUNCTION(execGetWeight); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execSetLock); \
	DECLARE_FUNCTION(execGetLock); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execGetActive); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execSetKeyed); \
	DECLARE_FUNCTION(execGetKeyed);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_186_INCLASS \
private: \
	static void StaticRegisterNativesUAnimLayer(); \
	friend struct Z_Construct_UClass_UAnimLayer_Statics; \
public: \
	DECLARE_CLASS(UAnimLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), CONTROLRIGEDITOR_API) \
	DECLARE_SERIALIZER(UAnimLayer)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_186_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UAnimLayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UAnimLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimLayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimLayer(UAnimLayer&&); \
	UAnimLayer(const UAnimLayer&); \
public: \
	CONTROLRIGEDITOR_API virtual ~UAnimLayer();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_183_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_186_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_186_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_186_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_186_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGEDITOR_API UClass* StaticClass<class UAnimLayer>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_264_INCLASS \
private: \
	static void StaticRegisterNativesUAnimLayers(); \
	friend struct Z_Construct_UClass_UAnimLayers_Statics; \
public: \
	DECLARE_CLASS(UAnimLayers, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), CONTROLRIGEDITOR_API) \
	DECLARE_SERIALIZER(UAnimLayers)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_264_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UAnimLayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimLayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UAnimLayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimLayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimLayers(UAnimLayers&&); \
	UAnimLayers(const UAnimLayers&); \
public: \
	CONTROLRIGEDITOR_API virtual ~UAnimLayers();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_261_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_264_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_264_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h_264_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGEDITOR_API UClass* StaticClass<class UAnimLayers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_AnimLayers_AnimLayers_h


#define FOREACH_ENUM_EANIMLAYERTYPE(op) \
	op(Base) \
	op(Additive) \
	op(Override) 

enum EAnimLayerType : uint32;
template<> CONTROLRIGEDITOR_API UEnum* StaticEnum<EAnimLayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
