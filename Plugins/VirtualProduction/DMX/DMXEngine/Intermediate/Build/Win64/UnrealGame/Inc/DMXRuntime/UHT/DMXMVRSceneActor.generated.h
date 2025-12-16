// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVR/DMXMVRSceneActor.h"

#ifdef DMXRUNTIME_DMXMVRSceneActor_generated_h
#error "DMXMVRSceneActor.generated.h already included, missing '#pragma once' in DMXMVRSceneActor.h"
#endif
#define DMXRUNTIME_DMXMVRSceneActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDMXMVRSceneFixtureTypeToActorClassPair ***************************
struct Z_Construct_UScriptStruct_FDMXMVRSceneFixtureTypeToActorClassPair_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXMVRSceneFixtureTypeToActorClassPair_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXMVRSceneFixtureTypeToActorClassPair;
// ********** End ScriptStruct FDMXMVRSceneFixtureTypeToActorClassPair *****************************

// ********** Begin ScriptStruct FDMXMVRSceneGDTFToActorClassPair **********************************
struct Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXMVRSceneGDTFToActorClassPair;
// ********** End ScriptStruct FDMXMVRSceneGDTFToActorClassPair ************************************

// ********** Begin Class ADMXMVRSceneActor ********************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_55_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ADMXMVRSceneActor, NO_API)


struct Z_Construct_UClass_ADMXMVRSceneActor_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_ADMXMVRSceneActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMXMVRSceneActor(); \
	friend struct ::Z_Construct_UClass_ADMXMVRSceneActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_ADMXMVRSceneActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADMXMVRSceneActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_ADMXMVRSceneActor_NoRegister) \
	DECLARE_SERIALIZER(ADMXMVRSceneActor) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_55_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADMXMVRSceneActor(ADMXMVRSceneActor&&) = delete; \
	ADMXMVRSceneActor(const ADMXMVRSceneActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMXMVRSceneActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMXMVRSceneActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMXMVRSceneActor)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_51_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADMXMVRSceneActor;

// ********** End Class ADMXMVRSceneActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
