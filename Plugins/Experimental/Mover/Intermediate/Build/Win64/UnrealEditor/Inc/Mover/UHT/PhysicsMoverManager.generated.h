// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PhysicsMoverManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_PhysicsMoverManager_generated_h
#error "PhysicsMoverManager.generated.h already included, missing '#pragma once' in PhysicsMoverManager.h"
#endif
#define MOVER_PhysicsMoverManager_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsMoverManager(); \
	friend struct Z_Construct_UClass_UPhysicsMoverManager_Statics; \
public: \
	DECLARE_CLASS(UPhysicsMoverManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsMoverManager)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsMoverManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsMoverManager(UPhysicsMoverManager&&); \
	UPhysicsMoverManager(const UPhysicsMoverManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsMoverManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsMoverManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsMoverManager) \
	NO_API virtual ~UPhysicsMoverManager();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UPhysicsMoverManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
