// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigGizmoActor.h"

#ifdef CONTROLRIG_ControlRigGizmoActor_generated_h
#error "ControlRigGizmoActor.generated.h already included, missing '#pragma once' in ControlRigGizmoActor.h"
#endif
#define CONTROLRIG_ControlRigGizmoActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlShapeActorCreationParam ***********************************
struct Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlShapeActorCreationParam;
// ********** End ScriptStruct FControlShapeActorCreationParam *************************************

// ********** Begin Class AControlRigShapeActor ****************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGlobalTransform); \
	DECLARE_FUNCTION(execSetGlobalTransform); \
	DECLARE_FUNCTION(execIsHovered); \
	DECLARE_FUNCTION(execSetHovered); \
	DECLARE_FUNCTION(execSetSelectable); \
	DECLARE_FUNCTION(execIsSelectedInEditor); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_59_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AControlRigShapeActor_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_AControlRigShapeActor_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControlRigShapeActor(); \
	friend struct ::Z_Construct_UClass_AControlRigShapeActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_AControlRigShapeActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AControlRigShapeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_AControlRigShapeActor_NoRegister) \
	DECLARE_SERIALIZER(AControlRigShapeActor) \
	virtual UObject* _getUObject() const override { return const_cast<AControlRigShapeActor*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AControlRigShapeActor(AControlRigShapeActor&&) = delete; \
	AControlRigShapeActor(const AControlRigShapeActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, AControlRigShapeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlRigShapeActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlRigShapeActor) \
	CONTROLRIG_API virtual ~AControlRigShapeActor();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_56_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_59_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AControlRigShapeActor;

// ********** End Class AControlRigShapeActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
