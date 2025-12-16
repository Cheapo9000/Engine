// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/PVCarveSettings.h"

#ifdef PROCEDURALVEGETATION_PVCarveSettings_generated_h
#error "PVCarveSettings.generated.h already included, missing '#pragma once' in PVCarveSettings.h"
#endif
#define PROCEDURALVEGETATION_PVCarveSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVCarveSettings *********************************************************
struct Z_Construct_UClass_UPVCarveSettings_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVCarveSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVCarveSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVCarveSettings(); \
	friend struct ::Z_Construct_UClass_UPVCarveSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVCarveSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVCarveSettings, UPVBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVCarveSettings_NoRegister) \
	DECLARE_SERIALIZER(UPVCarveSettings)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVCarveSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVCarveSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVCarveSettings(UPVCarveSettings&&) = delete; \
	UPVCarveSettings(const UPVCarveSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVCarveSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVCarveSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPVCarveSettings) \
	NO_API virtual ~UPVCarveSettings();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVCarveSettings_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVCarveSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVCarveSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVCarveSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVCarveSettings;

// ********** End Class UPVCarveSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Private_Nodes_PVCarveSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
