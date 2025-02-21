// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/Modes/PhysicsDrivenWalkingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_PhysicsDrivenWalkingMode_generated_h
#error "PhysicsDrivenWalkingMode.generated.h already included, missing '#pragma once' in PhysicsDrivenWalkingMode.h"
#endif
#define MOVER_PhysicsDrivenWalkingMode_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsDrivenWalkingMode(); \
	friend struct Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics; \
public: \
	DECLARE_CLASS(UPhysicsDrivenWalkingMode, UWalkingMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsDrivenWalkingMode) \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsDrivenWalkingMode*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsDrivenWalkingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsDrivenWalkingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsDrivenWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsDrivenWalkingMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsDrivenWalkingMode(UPhysicsDrivenWalkingMode&&); \
	UPhysicsDrivenWalkingMode(const UPhysicsDrivenWalkingMode&); \
public: \
	NO_API virtual ~UPhysicsDrivenWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UPhysicsDrivenWalkingMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
