// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/PVScaleSettings.h"

#ifdef PROCEDURALVEGETATION_PVScaleSettings_generated_h
#error "PVScaleSettings.generated.h already included, missing '#pragma once' in PVScaleSettings.h"
#endif
#define PROCEDURALVEGETATION_PVScaleSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVScaleSettings *********************************************************
struct Z_Construct_UClass_UPVScaleSettings_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVScaleSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVScaleSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVScaleSettings(); \
	friend struct ::Z_Construct_UClass_UPVScaleSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVScaleSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVScaleSettings, UPVBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVScaleSettings_NoRegister) \
	DECLARE_SERIALIZER(UPVScaleSettings)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVScaleSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVScaleSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVScaleSettings(UPVScaleSettings&&) = delete; \
	UPVScaleSettings(const UPVScaleSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVScaleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVScaleSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPVScaleSettings) \
	NO_API virtual ~UPVScaleSettings();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVScaleSettings_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVScaleSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVScaleSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVScaleSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVScaleSettings;

// ********** End Class UPVScaleSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVScaleSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
