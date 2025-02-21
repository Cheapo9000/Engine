// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/NavMoverComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_NavMoverComponent_generated_h
#error "NavMoverComponent.generated.h already included, missing '#pragma once' in NavMoverComponent.h"
#endif
#define MOVER_NavMoverComponent_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSwimming); \
	DECLARE_FUNCTION(execGetMaxSpeedForNavMovement); \
	DECLARE_FUNCTION(execGetVelocityForNavMovement);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavMoverComponent(); \
	friend struct Z_Construct_UClass_UNavMoverComponent_Statics; \
public: \
	DECLARE_CLASS(UNavMoverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UNavMoverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavMoverComponent*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavMoverComponent(UNavMoverComponent&&); \
	UNavMoverComponent(const UNavMoverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavMoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMoverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavMoverComponent) \
	NO_API virtual ~UNavMoverComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UNavMoverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
