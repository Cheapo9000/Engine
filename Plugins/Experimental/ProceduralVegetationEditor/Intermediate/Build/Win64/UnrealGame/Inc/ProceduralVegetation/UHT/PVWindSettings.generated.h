// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PVWindSettings.h"

#ifdef PROCEDURALVEGETATION_PVWindSettings_generated_h
#error "PVWindSettings.generated.h already included, missing '#pragma once' in PVWindSettings.h"
#endif
#define PROCEDURALVEGETATION_PVWindSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVWindSettings **********************************************************
struct Z_Construct_UClass_UPVWindSettings_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVWindSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_PVWindSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVWindSettings(); \
	friend struct ::Z_Construct_UClass_UPVWindSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVWindSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVWindSettings, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVWindSettings_NoRegister) \
	DECLARE_SERIALIZER(UPVWindSettings)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_PVWindSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALVEGETATION_API UPVWindSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVWindSettings(UPVWindSettings&&) = delete; \
	UPVWindSettings(const UPVWindSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALVEGETATION_API, UPVWindSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVWindSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPVWindSettings) \
	PROCEDURALVEGETATION_API virtual ~UPVWindSettings();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_PVWindSettings_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_PVWindSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_PVWindSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_PVWindSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVWindSettings;

// ********** End Class UPVWindSettings ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_PVWindSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
