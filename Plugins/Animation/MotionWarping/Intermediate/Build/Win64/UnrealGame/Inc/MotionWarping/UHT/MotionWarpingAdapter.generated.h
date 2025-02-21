// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionWarpingAdapter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTIONWARPING_MotionWarpingAdapter_generated_h
#error "MotionWarpingAdapter.generated.h already included, missing '#pragma once' in MotionWarpingAdapter.h"
#endif
#define MOTIONWARPING_MotionWarpingAdapter_generated_h

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingBaseAdapter(); \
	friend struct Z_Construct_UClass_UMotionWarpingBaseAdapter_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingBaseAdapter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingBaseAdapter)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingBaseAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMotionWarpingBaseAdapter(UMotionWarpingBaseAdapter&&); \
	UMotionWarpingBaseAdapter(const UMotionWarpingBaseAdapter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingBaseAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingBaseAdapter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingBaseAdapter)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h_15_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UMotionWarpingBaseAdapter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingAdapter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
