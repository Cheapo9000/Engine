// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/PVPresetLoaderSettings.h"

#ifdef PROCEDURALVEGETATION_PVPresetLoaderSettings_generated_h
#error "PVPresetLoaderSettings.generated.h already included, missing '#pragma once' in PVPresetLoaderSettings.h"
#endif
#define PROCEDURALVEGETATION_PVPresetLoaderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVPresetLoaderSettings **************************************************
struct Z_Construct_UClass_UPVPresetLoaderSettings_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVPresetLoaderSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVPresetLoaderSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVPresetLoaderSettings(); \
	friend struct ::Z_Construct_UClass_UPVPresetLoaderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVPresetLoaderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVPresetLoaderSettings, UPVBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVPresetLoaderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPVPresetLoaderSettings)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVPresetLoaderSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVPresetLoaderSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVPresetLoaderSettings(UPVPresetLoaderSettings&&) = delete; \
	UPVPresetLoaderSettings(const UPVPresetLoaderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVPresetLoaderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVPresetLoaderSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPVPresetLoaderSettings) \
	NO_API virtual ~UPVPresetLoaderSettings();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVPresetLoaderSettings_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVPresetLoaderSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVPresetLoaderSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVPresetLoaderSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVPresetLoaderSettings;

// ********** End Class UPVPresetLoaderSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVPresetLoaderSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
