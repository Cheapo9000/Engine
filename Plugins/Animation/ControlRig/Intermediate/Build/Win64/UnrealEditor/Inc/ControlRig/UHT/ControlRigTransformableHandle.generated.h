// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Constraints/ControlRigTransformableHandle.h"

#ifdef CONTROLRIG_ControlRigTransformableHandle_generated_h
#error "ControlRigTransformableHandle.generated.h already included, missing '#pragma once' in ControlRigTransformableHandle.h"
#endif
#define CONTROLRIG_ControlRigTransformableHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransformableControlHandle **********************************************
struct Z_Construct_UClass_UTransformableControlHandle_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UTransformableControlHandle_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformableControlHandle(); \
	friend struct ::Z_Construct_UClass_UTransformableControlHandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UTransformableControlHandle_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformableControlHandle, UTransformableHandle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UTransformableControlHandle_NoRegister) \
	DECLARE_SERIALIZER(UTransformableControlHandle)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UTransformableControlHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformableControlHandle(UTransformableControlHandle&&) = delete; \
	UTransformableControlHandle(const UTransformableControlHandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UTransformableControlHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformableControlHandle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformableControlHandle)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_37_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformableControlHandle;

// ********** End Class UTransformableControlHandle ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Constraints_ControlRigTransformableHandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
