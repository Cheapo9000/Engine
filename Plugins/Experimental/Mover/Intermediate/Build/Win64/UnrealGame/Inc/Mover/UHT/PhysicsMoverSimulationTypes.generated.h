// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PhysicsMoverSimulationTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_PhysicsMoverSimulationTypes_generated_h
#error "PhysicsMoverSimulationTypes.generated.h already included, missing '#pragma once' in PhysicsMoverSimulationTypes.h"
#endif
#define MOVER_PhysicsMoverSimulationTypes_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPhysicsCharacterMovementModeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsCharacterMovementModeInterface(UPhysicsCharacterMovementModeInterface&&); \
	UPhysicsCharacterMovementModeInterface(const UPhysicsCharacterMovementModeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsCharacterMovementModeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsCharacterMovementModeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsCharacterMovementModeInterface) \
	MOVER_API virtual ~UPhysicsCharacterMovementModeInterface();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_86_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPhysicsCharacterMovementModeInterface(); \
	friend struct Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_Statics; \
public: \
	DECLARE_CLASS(UPhysicsCharacterMovementModeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mover"), MOVER_API) \
	DECLARE_SERIALIZER(UPhysicsCharacterMovementModeInterface)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_86_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_86_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_86_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_86_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPhysicsCharacterMovementModeInterface() {} \
public: \
	typedef UPhysicsCharacterMovementModeInterface UClassType; \
	typedef IPhysicsCharacterMovementModeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_83_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_86_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UPhysicsCharacterMovementModeInterface>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FMovementSettingsInputs>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverAIInputs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverAIInputs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
