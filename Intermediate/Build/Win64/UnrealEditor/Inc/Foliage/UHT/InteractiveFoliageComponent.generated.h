// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveFoliageComponent.h"

#ifdef FOLIAGE_InteractiveFoliageComponent_generated_h
#error "InteractiveFoliageComponent.generated.h already included, missing '#pragma once' in InteractiveFoliageComponent.h"
#endif
#define FOLIAGE_InteractiveFoliageComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInteractiveFoliageComponent *********************************************
struct Z_Construct_UClass_UInteractiveFoliageComponent_Statics;
FOLIAGE_API UClass* Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister();

#define FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInteractiveFoliageComponent(); \
	friend struct ::Z_Construct_UClass_UInteractiveFoliageComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGE_API UClass* ::Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveFoliageComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveFoliageComponent)


#define FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveFoliageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveFoliageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveFoliageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveFoliageComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveFoliageComponent(UInteractiveFoliageComponent&&) = delete; \
	UInteractiveFoliageComponent(const UInteractiveFoliageComponent&) = delete; \
	NO_API virtual ~UInteractiveFoliageComponent();


#define FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveFoliageComponent;

// ********** End Class UInteractiveFoliageComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
