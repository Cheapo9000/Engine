// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISMPool/ISMPoolDebugDrawComponent.h"

#ifdef ISMPOOL_ISMPoolDebugDrawComponent_generated_h
#error "ISMPoolDebugDrawComponent.generated.h already included, missing '#pragma once' in ISMPoolDebugDrawComponent.h"
#endif
#define ISMPOOL_ISMPoolDebugDrawComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UISMPoolDebugDrawComponent ***********************************************
struct Z_Construct_UClass_UISMPoolDebugDrawComponent_Statics;
ISMPOOL_API UClass* Z_Construct_UClass_UISMPoolDebugDrawComponent_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUISMPoolDebugDrawComponent(); \
	friend struct ::Z_Construct_UClass_UISMPoolDebugDrawComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ISMPOOL_API UClass* ::Z_Construct_UClass_UISMPoolDebugDrawComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UISMPoolDebugDrawComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ISMPool"), Z_Construct_UClass_UISMPoolDebugDrawComponent_NoRegister) \
	DECLARE_SERIALIZER(UISMPoolDebugDrawComponent)


#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ISMPOOL_API UISMPoolDebugDrawComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISMPoolDebugDrawComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ISMPOOL_API, UISMPoolDebugDrawComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISMPoolDebugDrawComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UISMPoolDebugDrawComponent(UISMPoolDebugDrawComponent&&) = delete; \
	UISMPoolDebugDrawComponent(const UISMPoolDebugDrawComponent&) = delete; \
	ISMPOOL_API virtual ~UISMPoolDebugDrawComponent();


#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h_17_INCLASS \
	FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UISMPoolDebugDrawComponent;

// ********** End Class UISMPoolDebugDrawComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolDebugDrawComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
