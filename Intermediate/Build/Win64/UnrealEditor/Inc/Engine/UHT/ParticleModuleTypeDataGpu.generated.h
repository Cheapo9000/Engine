// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/TypeData/ParticleModuleTypeDataGpu.h"

#ifdef ENGINE_ParticleModuleTypeDataGpu_generated_h
#error "ParticleModuleTypeDataGpu.generated.h already included, missing '#pragma once' in ParticleModuleTypeDataGpu.h"
#endif
#define ENGINE_ParticleModuleTypeDataGpu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGPUSpriteLocalVectorFieldInfo ************************************
struct Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FGPUSpriteLocalVectorFieldInfo;
// ********** End ScriptStruct FGPUSpriteLocalVectorFieldInfo **************************************

// ********** Begin ScriptStruct FGPUSpriteEmitterInfo *********************************************
struct Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FGPUSpriteEmitterInfo;
// ********** End ScriptStruct FGPUSpriteEmitterInfo ***********************************************

// ********** Begin ScriptStruct FGPUSpriteResourceData ********************************************
struct Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_252_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FGPUSpriteResourceData;
// ********** End ScriptStruct FGPUSpriteResourceData **********************************************

// ********** Begin Class UParticleModuleTypeDataGpu ***********************************************
struct Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics;
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataGpu(); \
	friend struct ::Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister(); \
public: \
	DECLARE_CLASS2(UParticleModuleTypeDataGpu, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataGpu)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataGpu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataGpu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataGpu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataGpu); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParticleModuleTypeDataGpu(UParticleModuleTypeDataGpu&&) = delete; \
	UParticleModuleTypeDataGpu(const UParticleModuleTypeDataGpu&) = delete; \
	ENGINE_API virtual ~UParticleModuleTypeDataGpu();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_456_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_459_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParticleModuleTypeDataGpu;

// ********** End Class UParticleModuleTypeDataGpu *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
