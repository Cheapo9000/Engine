// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterMeshComponent.h"

#ifdef WATER_WaterMeshComponent_generated_h
#error "WaterMeshComponent.generated.h already included, missing '#pragma once' in WaterMeshComponent.h"
#endif
#define WATER_WaterMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterMeshComponent ******************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEnabled);


struct Z_Construct_UClass_UWaterMeshComponent_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterMeshComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterMeshComponent(); \
	friend struct ::Z_Construct_UClass_UWaterMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UWaterMeshComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterMeshComponent(UWaterMeshComponent&&) = delete; \
	UWaterMeshComponent(const UWaterMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterMeshComponent) \
	WATER_API virtual ~UWaterMeshComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterMeshComponent;

// ********** End Class UWaterMeshComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
