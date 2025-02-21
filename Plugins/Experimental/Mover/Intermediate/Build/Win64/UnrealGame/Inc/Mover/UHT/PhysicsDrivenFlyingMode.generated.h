// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/Modes/PhysicsDrivenFlyingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_PhysicsDrivenFlyingMode_generated_h
#error "PhysicsDrivenFlyingMode.generated.h already included, missing '#pragma once' in PhysicsDrivenFlyingMode.h"
#endif
#define MOVER_PhysicsDrivenFlyingMode_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsDrivenFlyingMode(); \
	friend struct Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics; \
public: \
	DECLARE_CLASS(UPhysicsDrivenFlyingMode, UFlyingMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsDrivenFlyingMode) \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsDrivenFlyingMode*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsDrivenFlyingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsDrivenFlyingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsDrivenFlyingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsDrivenFlyingMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsDrivenFlyingMode(UPhysicsDrivenFlyingMode&&); \
	UPhysicsDrivenFlyingMode(const UPhysicsDrivenFlyingMode&); \
public: \
	NO_API virtual ~UPhysicsDrivenFlyingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UPhysicsDrivenFlyingMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
