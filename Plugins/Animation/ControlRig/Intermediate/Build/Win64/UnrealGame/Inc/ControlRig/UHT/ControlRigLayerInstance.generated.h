// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/ControlRigLayerInstance.h"

#ifdef CONTROLRIG_ControlRigLayerInstance_generated_h
#error "ControlRigLayerInstance.generated.h already included, missing '#pragma once' in ControlRigLayerInstance.h"
#endif
#define CONTROLRIG_ControlRigLayerInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigLayerInstance *************************************************
struct Z_Construct_UClass_UControlRigLayerInstance_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigLayerInstance_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigLayerInstance(); \
	friend struct ::Z_Construct_UClass_UControlRigLayerInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigLayerInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigLayerInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigLayerInstance_NoRegister) \
	DECLARE_SERIALIZER(UControlRigLayerInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UControlRigLayerInstance*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigLayerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigLayerInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigLayerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigLayerInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigLayerInstance(UControlRigLayerInstance&&) = delete; \
	UControlRigLayerInstance(const UControlRigLayerInstance&) = delete; \
	CONTROLRIG_API virtual ~UControlRigLayerInstance();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_19_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_22_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigLayerInstance;

// ********** End Class UControlRigLayerInstance ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
