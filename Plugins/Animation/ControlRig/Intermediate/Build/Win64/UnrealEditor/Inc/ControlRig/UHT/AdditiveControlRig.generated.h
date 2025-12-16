// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/AdditiveControlRig.h"

#ifdef CONTROLRIG_AdditiveControlRig_generated_h
#error "AdditiveControlRig.generated.h already included, missing '#pragma once' in AdditiveControlRig.h"
#endif
#define CONTROLRIG_AdditiveControlRig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAdditiveControlRig ******************************************************
struct Z_Construct_UClass_UAdditiveControlRig_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UAdditiveControlRig_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAdditiveControlRig(); \
	friend struct ::Z_Construct_UClass_UAdditiveControlRig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UAdditiveControlRig_NoRegister(); \
public: \
	DECLARE_CLASS2(UAdditiveControlRig, UControlRig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UAdditiveControlRig_NoRegister) \
	DECLARE_SERIALIZER(UAdditiveControlRig)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UAdditiveControlRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdditiveControlRig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UAdditiveControlRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdditiveControlRig); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAdditiveControlRig(UAdditiveControlRig&&) = delete; \
	UAdditiveControlRig(const UAdditiveControlRig&) = delete; \
	CONTROLRIG_API virtual ~UAdditiveControlRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_15_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_18_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAdditiveControlRig;

// ********** End Class UAdditiveControlRig ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_AdditiveControlRig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
