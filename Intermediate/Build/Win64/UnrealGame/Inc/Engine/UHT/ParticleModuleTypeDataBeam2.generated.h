// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/TypeData/ParticleModuleTypeDataBeam2.h"

#ifdef ENGINE_ParticleModuleTypeDataBeam2_generated_h
#error "ParticleModuleTypeDataBeam2.generated.h already included, missing '#pragma once' in ParticleModuleTypeDataBeam2.h"
#endif
#define ENGINE_ParticleModuleTypeDataBeam2_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBeamTargetData ***************************************************
struct Z_Construct_UScriptStruct_FBeamTargetData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBeamTargetData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBeamTargetData;
// ********** End ScriptStruct FBeamTargetData *****************************************************

// ********** Begin Class UParticleModuleTypeDataBeam2 *********************************************
struct Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataBeam2(); \
	friend struct ::Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleTypeDataBeam2, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataBeam2)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataBeam2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataBeam2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataBeam2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataBeam2); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleTypeDataBeam2(UParticleModuleTypeDataBeam2&&) = delete; \
	UParticleModuleTypeDataBeam2(const UParticleModuleTypeDataBeam2&) = delete; \
	ENGINE_API virtual ~UParticleModuleTypeDataBeam2();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_67_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleTypeDataBeam2;

// ********** End Class UParticleModuleTypeDataBeam2 ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h

// ********** Begin Enum EBeam2Method **************************************************************
#define FOREACH_ENUM_EBEAM2METHOD(op) \
	op(PEB2M_Distance) \
	op(PEB2M_Target) \
	op(PEB2M_Branch) 

enum EBeam2Method : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBeam2Method>();
// ********** End Enum EBeam2Method ****************************************************************

// ********** Begin Enum EBeamTaperMethod **********************************************************
#define FOREACH_ENUM_EBEAMTAPERMETHOD(op) \
	op(PEBTM_None) \
	op(PEBTM_Full) \
	op(PEBTM_Partial) 

enum EBeamTaperMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBeamTaperMethod>();
// ********** End Enum EBeamTaperMethod ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
