// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosCloth/ChaosClothingSimulationInteractor.h"

#ifdef CHAOSCLOTH_ChaosClothingSimulationInteractor_generated_h
#error "ChaosClothingSimulationInteractor.generated.h already included, missing '#pragma once' in ChaosClothingSimulationInteractor.h"
#endif
#define CHAOSCLOTH_ChaosClothingSimulationInteractor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosClothingInteractor *************************************************
#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetAndTeleport); \
	DECLARE_FUNCTION(execSetVelocityClamps); \
	DECLARE_FUNCTION(execSetVelocityScale); \
	DECLARE_FUNCTION(execSetAnimDrive); \
	DECLARE_FUNCTION(execSetAnimDriveLinear); \
	DECLARE_FUNCTION(execSetGravity); \
	DECLARE_FUNCTION(execSetPressure); \
	DECLARE_FUNCTION(execSetWind); \
	DECLARE_FUNCTION(execSetAerodynamics); \
	DECLARE_FUNCTION(execSetDamping); \
	DECLARE_FUNCTION(execSetBackstop); \
	DECLARE_FUNCTION(execSetCollision); \
	DECLARE_FUNCTION(execSetLongRangeAttachment); \
	DECLARE_FUNCTION(execSetLongRangeAttachmentLinear); \
	DECLARE_FUNCTION(execSetMaterialBuckling); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetMaterialLinear);


struct Z_Construct_UClass_UChaosClothingInteractor_Statics;
CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingInteractor_NoRegister();

#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothingInteractor(); \
	friend struct ::Z_Construct_UClass_UChaosClothingInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTH_API UClass* ::Z_Construct_UClass_UChaosClothingInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothingInteractor, UClothingInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCloth"), Z_Construct_UClass_UChaosClothingInteractor_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothingInteractor)


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTH_API UChaosClothingInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothingInteractor(UChaosClothingInteractor&&) = delete; \
	UChaosClothingInteractor(const UChaosClothingInteractor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTH_API, UChaosClothingInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothingInteractor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothingInteractor) \
	CHAOSCLOTH_API virtual ~UChaosClothingInteractor();


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_32_PROLOG
#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothingInteractor;

// ********** End Class UChaosClothingInteractor ***************************************************

// ********** Begin Class UChaosClothingSimulationInteractor ***************************************
struct Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics;
CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor_NoRegister();

#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothingSimulationInteractor(); \
	friend struct ::Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCLOTH_API UClass* ::Z_Construct_UClass_UChaosClothingSimulationInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosClothingSimulationInteractor, UClothingSimulationInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCloth"), Z_Construct_UClass_UChaosClothingSimulationInteractor_NoRegister) \
	DECLARE_SERIALIZER(UChaosClothingSimulationInteractor)


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTH_API UChaosClothingSimulationInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosClothingSimulationInteractor(UChaosClothingSimulationInteractor&&) = delete; \
	UChaosClothingSimulationInteractor(const UChaosClothingSimulationInteractor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTH_API, UChaosClothingSimulationInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothingSimulationInteractor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothingSimulationInteractor) \
	CHAOSCLOTH_API virtual ~UChaosClothingSimulationInteractor();


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_101_PROLOG
#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosClothingSimulationInteractor;

// ********** End Class UChaosClothingSimulationInteractor *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
