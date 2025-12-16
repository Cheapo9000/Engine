// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/PVBaseSettings.h"

#ifdef PROCEDURALVEGETATION_PVBaseSettings_generated_h
#error "PVBaseSettings.generated.h already included, missing '#pragma once' in PVBaseSettings.h"
#endif
#define PROCEDURALVEGETATION_PVBaseSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVBaseSettings **********************************************************
struct Z_Construct_UClass_UPVBaseSettings_Statics;
PROCEDURALVEGETATION_API UClass* Z_Construct_UClass_UPVBaseSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_Nodes_PVBaseSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVBaseSettings(); \
	friend struct ::Z_Construct_UClass_UPVBaseSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATION_API UClass* ::Z_Construct_UClass_UPVBaseSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVBaseSettings, UPCGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ProceduralVegetation"), Z_Construct_UClass_UPVBaseSettings_NoRegister) \
	DECLARE_SERIALIZER(UPVBaseSettings)


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_Nodes_PVBaseSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVBaseSettings(UPVBaseSettings&&) = delete; \
	UPVBaseSettings(const UPVBaseSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVBaseSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVBaseSettings); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPVBaseSettings) \
	NO_API virtual ~UPVBaseSettings();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_Nodes_PVBaseSettings_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_Nodes_PVBaseSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_Nodes_PVBaseSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_Nodes_PVBaseSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVBaseSettings;

// ********** End Class UPVBaseSettings ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetation_Public_Nodes_PVBaseSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
