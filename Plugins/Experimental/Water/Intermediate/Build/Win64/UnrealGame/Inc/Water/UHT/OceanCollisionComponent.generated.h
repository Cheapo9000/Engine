// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OceanCollisionComponent.h"

#ifdef WATER_OceanCollisionComponent_generated_h
#error "OceanCollisionComponent.generated.h already included, missing '#pragma once' in OceanCollisionComponent.h"
#endif
#define WATER_OceanCollisionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOceanCollisionComponent *************************************************
struct Z_Construct_UClass_UOceanCollisionComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UOceanCollisionComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUOceanCollisionComponent(); \
	friend struct ::Z_Construct_UClass_UOceanCollisionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UOceanCollisionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOceanCollisionComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UOceanCollisionComponent_NoRegister) \
	DECLARE_SERIALIZER(UOceanCollisionComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UOceanCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOceanCollisionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UOceanCollisionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanCollisionComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOceanCollisionComponent(UOceanCollisionComponent&&) = delete; \
	UOceanCollisionComponent(const UOceanCollisionComponent&) = delete; \
	WATER_API virtual ~UOceanCollisionComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOceanCollisionComponent;

// ********** End Class UOceanCollisionComponent ***************************************************

// ********** Begin Class UOceanBoxCollisionComponent **********************************************
struct Z_Construct_UClass_UOceanBoxCollisionComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUOceanBoxCollisionComponent(); \
	friend struct ::Z_Construct_UClass_UOceanBoxCollisionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOceanBoxCollisionComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister) \
	DECLARE_SERIALIZER(UOceanBoxCollisionComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UOceanBoxCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOceanBoxCollisionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UOceanBoxCollisionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOceanBoxCollisionComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOceanBoxCollisionComponent(UOceanBoxCollisionComponent&&) = delete; \
	UOceanBoxCollisionComponent(const UOceanBoxCollisionComponent&) = delete; \
	WATER_API virtual ~UOceanBoxCollisionComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_48_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_51_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOceanBoxCollisionComponent;

// ********** End Class UOceanBoxCollisionComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
