// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsAsset.h"

#ifdef ENGINE_PhysicsAsset_generated_h
#error "PhysicsAsset.generated.h already included, missing '#pragma once' in PhysicsAsset.h"
#endif
#define ENGINE_PhysicsAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConstraintInstanceAccessor;

// ********** Begin ScriptStruct FPhysicsAssetSolverSettings ***************************************
struct Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPhysicsAssetSolverSettings;
// ********** End ScriptStruct FPhysicsAssetSolverSettings *****************************************

// ********** Begin ScriptStruct FSolverIterations *************************************************
struct Z_Construct_UScriptStruct_FSolverIterations_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSolverIterations_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSolverIterations;
// ********** End ScriptStruct FSolverIterations ***************************************************

// ********** Begin Class UPhysicsAsset ************************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execGetConstraints); \
	DECLARE_FUNCTION(execGetConstraintByBoneNames); \
	DECLARE_FUNCTION(execGetConstraintByName);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsAsset, ENGINE_API)


struct Z_Construct_UClass_UPhysicsAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAsset(); \
	friend struct ::Z_Construct_UClass_UPhysicsAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicsAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAsset, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicsAsset_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsAsset*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAsset(UPhysicsAsset&&) = delete; \
	UPhysicsAsset(const UPhysicsAsset&) = delete; \
	ENGINE_API virtual ~UPhysicsAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_170_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAsset;

// ********** End Class UPhysicsAsset **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h

// ********** Begin Enum EPhysicsAssetSolverType ***************************************************
#define FOREACH_ENUM_EPHYSICSASSETSOLVERTYPE(op) \
	op(EPhysicsAssetSolverType::RBAN) \
	op(EPhysicsAssetSolverType::World) 

enum class EPhysicsAssetSolverType : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetSolverType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhysicsAssetSolverType>();
// ********** End Enum EPhysicsAssetSolverType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
