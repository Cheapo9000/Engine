// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigControlActor.h"

#ifdef CONTROLRIG_ControlRigControlActor_generated_h
#error "ControlRigControlActor.generated.h already included, missing '#pragma once' in ControlRigControlActor.h"
#endif
#define CONTROLRIG_ControlRigControlActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AControlRigControlActor **************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefresh); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execResetControlActor);


struct Z_Construct_UClass_AControlRigControlActor_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_AControlRigControlActor_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControlRigControlActor(); \
	friend struct ::Z_Construct_UClass_AControlRigControlActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_AControlRigControlActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AControlRigControlActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_AControlRigControlActor_NoRegister) \
	DECLARE_SERIALIZER(AControlRigControlActor)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AControlRigControlActor(AControlRigControlActor&&) = delete; \
	AControlRigControlActor(const AControlRigControlActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, AControlRigControlActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlRigControlActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlRigControlActor)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_19_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AControlRigControlActor;

// ********** End Class AControlRigControlActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
