// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/PVSlopeSettings.h"

#ifdef PROCEDURALVEGETATION_PVSlopeSettings_generated_h
#error "PVSlopeSettings.generated.h already included, missing '#pragma once' in PVSlopeSettings.h"
#endif
#define PROCEDURALVEGETATION_PVSlopeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVSlopeSettings *********************************************************
struct Z_Construct_UClass_UPVSlopeSettings_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVSlopeSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVSlopeSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVSlopeSettings(); \
	friend struct ::Z_Construct_UClass_UPVSlopeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVSlopeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVSlopeSettings, UPVBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVSlopeSettings_NoRegister) \
	DECLARE_SERIALIZER(UPVSlopeSettings)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVSlopeSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVSlopeSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVSlopeSettings(UPVSlopeSettings&&) = delete; \
	UPVSlopeSettings(const UPVSlopeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVSlopeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVSlopeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPVSlopeSettings) \
	NO_API virtual ~UPVSlopeSettings();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVSlopeSettings_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVSlopeSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVSlopeSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVSlopeSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVSlopeSettings;

// ********** End Class UPVSlopeSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVSlopeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
