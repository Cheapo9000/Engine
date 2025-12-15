// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISMPool/ISMPoolComponent.h"

#ifdef ISMPOOL_ISMPoolComponent_generated_h
#error "ISMPoolComponent.generated.h already included, missing '#pragma once' in ISMPoolComponent.h"
#endif
#define ISMPOOL_ISMPoolComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UISMPoolComponent ********************************************************
struct Z_Construct_UClass_UISMPoolComponent_Statics;
ISMPOOL_API UClass* Z_Construct_UClass_UISMPoolComponent_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h_340_INCLASS \
private: \
	static void StaticRegisterNativesUISMPoolComponent(); \
	friend struct ::Z_Construct_UClass_UISMPoolComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ISMPOOL_API UClass* ::Z_Construct_UClass_UISMPoolComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UISMPoolComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ISMPool"), Z_Construct_UClass_UISMPoolComponent_NoRegister) \
	DECLARE_SERIALIZER(UISMPoolComponent)


#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h_340_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ISMPOOL_API UISMPoolComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISMPoolComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ISMPOOL_API, UISMPoolComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISMPoolComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UISMPoolComponent(UISMPoolComponent&&) = delete; \
	UISMPoolComponent(const UISMPoolComponent&) = delete; \
	ISMPOOL_API virtual ~UISMPoolComponent();


#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h_337_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h_340_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h_340_INCLASS \
	FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h_340_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UISMPoolComponent;

// ********** End Class UISMPoolComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ISMPool_Public_ISMPool_ISMPoolComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
