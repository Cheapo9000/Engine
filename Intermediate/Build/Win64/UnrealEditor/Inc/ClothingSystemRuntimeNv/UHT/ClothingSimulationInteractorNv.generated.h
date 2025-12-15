// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothingSimulationInteractorNv.h"

#ifdef CLOTHINGSYSTEMRUNTIMENV_ClothingSimulationInteractorNv_generated_h
#error "ClothingSimulationInteractorNv.generated.h already included, missing '#pragma once' in ClothingSimulationInteractorNv.h"
#endif
#define CLOTHINGSYSTEMRUNTIMENV_ClothingSimulationInteractorNv_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothingSimulationInteractorNv ******************************************
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimDriveDamperStiffness);


struct Z_Construct_UClass_UClothingSimulationInteractorNv_Statics;
CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingSimulationInteractorNv(); \
	friend struct ::Z_Construct_UClass_UClothingSimulationInteractorNv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHINGSYSTEMRUNTIMENV_API UClass* ::Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothingSimulationInteractorNv, UClothingSimulationInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeNv"), Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister) \
	DECLARE_SERIALIZER(UClothingSimulationInteractorNv)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLOTHINGSYSTEMRUNTIMENV_API UClothingSimulationInteractorNv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothingSimulationInteractorNv(UClothingSimulationInteractorNv&&) = delete; \
	UClothingSimulationInteractorNv(const UClothingSimulationInteractorNv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMENV_API, UClothingSimulationInteractorNv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingSimulationInteractorNv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingSimulationInteractorNv) \
	CLOTHINGSYSTEMRUNTIMENV_API virtual ~UClothingSimulationInteractorNv();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_25_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothingSimulationInteractorNv;

// ********** End Class UClothingSimulationInteractorNv ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
