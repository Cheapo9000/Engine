// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/PVGravitySettings.h"

#ifdef PROCEDURALVEGETATION_PVGravitySettings_generated_h
#error "PVGravitySettings.generated.h already included, missing '#pragma once' in PVGravitySettings.h"
#endif
#define PROCEDURALVEGETATION_PVGravitySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVGravitySettings *******************************************************
struct Z_Construct_UClass_UPVGravitySettings_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVGravitySettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVGravitySettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVGravitySettings(); \
	friend struct ::Z_Construct_UClass_UPVGravitySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVGravitySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVGravitySettings, UPVBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVGravitySettings_NoRegister) \
	DECLARE_SERIALIZER(UPVGravitySettings)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVGravitySettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVGravitySettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVGravitySettings(UPVGravitySettings&&) = delete; \
	UPVGravitySettings(const UPVGravitySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVGravitySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVGravitySettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPVGravitySettings) \
	NO_API virtual ~UPVGravitySettings();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVGravitySettings_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVGravitySettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVGravitySettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVGravitySettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVGravitySettings;

// ********** End Class UPVGravitySettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVGravitySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
