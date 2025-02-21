// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionWarpingMoverAdapter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_MotionWarpingMoverAdapter_generated_h
#error "MotionWarpingMoverAdapter.generated.h already included, missing '#pragma once' in MotionWarpingMoverAdapter.h"
#endif
#define MOVER_MotionWarpingMoverAdapter_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingMoverAdapter(); \
	friend struct Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingMoverAdapter, UMotionWarpingBaseAdapter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingMoverAdapter)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingMoverAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMotionWarpingMoverAdapter(UMotionWarpingMoverAdapter&&); \
	UMotionWarpingMoverAdapter(const UMotionWarpingMoverAdapter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingMoverAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingMoverAdapter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingMoverAdapter) \
	NO_API virtual ~UMotionWarpingMoverAdapter();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMotionWarpingMoverAdapter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
