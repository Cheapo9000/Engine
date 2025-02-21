// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Viewport/AvaCineCameraActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHE_AvaCineCameraActor_generated_h
#error "AvaCineCameraActor.generated.h already included, missing '#pragma once' in AvaCineCameraActor.h"
#endif
#define AVALANCHE_AvaCineCameraActor_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_AvaCineCameraActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaCineCameraActor(); \
	friend struct Z_Construct_UClass_AAvaCineCameraActor_Statics; \
public: \
	DECLARE_CLASS(AAvaCineCameraActor, ACineCameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Avalanche"), AVALANCHE_API) \
	DECLARE_SERIALIZER(AAvaCineCameraActor)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_AvaCineCameraActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAvaCineCameraActor(AAvaCineCameraActor&&); \
	AAvaCineCameraActor(const AAvaCineCameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, AAvaCineCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaCineCameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAvaCineCameraActor) \
	AVALANCHE_API virtual ~AAvaCineCameraActor();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_AvaCineCameraActor_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_AvaCineCameraActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_AvaCineCameraActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_AvaCineCameraActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class AAvaCineCameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_Viewport_AvaCineCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
