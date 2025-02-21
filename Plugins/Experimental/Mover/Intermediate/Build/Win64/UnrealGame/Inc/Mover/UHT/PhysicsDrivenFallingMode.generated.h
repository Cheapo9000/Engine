// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/Modes/PhysicsDrivenFallingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_PhysicsDrivenFallingMode_generated_h
#error "PhysicsDrivenFallingMode.generated.h already included, missing '#pragma once' in PhysicsDrivenFallingMode.h"
#endif
#define MOVER_PhysicsDrivenFallingMode_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsDrivenFallingMode(); \
	friend struct Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics; \
public: \
	DECLARE_CLASS(UPhysicsDrivenFallingMode, UFallingMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsDrivenFallingMode) \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsDrivenFallingMode*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsDrivenFallingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsDrivenFallingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsDrivenFallingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsDrivenFallingMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsDrivenFallingMode(UPhysicsDrivenFallingMode&&); \
	UPhysicsDrivenFallingMode(const UPhysicsDrivenFallingMode&); \
public: \
	NO_API virtual ~UPhysicsDrivenFallingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UPhysicsDrivenFallingMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
