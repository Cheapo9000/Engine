// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBrushActorInterface.h"

#ifdef WATER_WaterBrushActorInterface_generated_h
#error "WaterBrushActorInterface.generated.h already included, missing '#pragma once' in WaterBrushActorInterface.h"
#endif
#define WATER_WaterBrushActorInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UWaterBrushActorInterface ********************************************
struct Z_Construct_UClass_UWaterBrushActorInterface_Statics;
WATER_API UClass* Z_Construct_UClass_UWaterBrushActorInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UWaterBrushActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBrushActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UWaterBrushActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBrushActorInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBrushActorInterface(UWaterBrushActorInterface&&) = delete; \
	UWaterBrushActorInterface(const UWaterBrushActorInterface&) = delete; \
	virtual ~UWaterBrushActorInterface() = default;


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWaterBrushActorInterface(); \
	friend struct ::Z_Construct_UClass_UWaterBrushActorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UWaterBrushActorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBrushActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UWaterBrushActorInterface_NoRegister) \
	DECLARE_SERIALIZER(UWaterBrushActorInterface)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IWaterBrushActorInterface() {} \
public: \
	typedef UWaterBrushActorInterface UClassType; \
	typedef IWaterBrushActorInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBrushActorInterface;

// ********** End Interface UWaterBrushActorInterface **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushActorInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
