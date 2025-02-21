// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYMASK_GeometryMaskSettings_generated_h
#error "GeometryMaskSettings.generated.h already included, missing '#pragma once' in GeometryMaskSettings.h"
#endif
#define GEOMETRYMASK_GeometryMaskSettings_generated_h

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Private_GeometryMaskSettings_h_12_ACCESSORS \
static void GetDefaultResolutionMultiplier_WrapperImpl(const void* Object, void* OutValue); \
static void SetDefaultResolutionMultiplier_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Private_GeometryMaskSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskSettings(); \
	friend struct Z_Construct_UClass_UGeometryMaskSettings_Statics; \
public: \
	DECLARE_CLASS(UGeometryMaskSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryMask"), GEOMETRYMASK_API) \
	DECLARE_SERIALIZER(UGeometryMaskSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Private_GeometryMaskSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYMASK_API UGeometryMaskSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryMaskSettings(UGeometryMaskSettings&&); \
	UGeometryMaskSettings(const UGeometryMaskSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYMASK_API, UGeometryMaskSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryMaskSettings) \
	GEOMETRYMASK_API virtual ~UGeometryMaskSettings();


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Private_GeometryMaskSettings_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Private_GeometryMaskSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Private_GeometryMaskSettings_h_12_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Private_GeometryMaskSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Private_GeometryMaskSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYMASK_API UClass* StaticClass<class UGeometryMaskSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Private_GeometryMaskSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
