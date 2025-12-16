// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PVEditorSettings.h"

#ifdef PROCEDURALVEGETATIONEDITOR_PVEditorSettings_generated_h
#error "PVEditorSettings.generated.h already included, missing '#pragma once' in PVEditorSettings.h"
#endif
#define PROCEDURALVEGETATIONEDITOR_PVEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPVEditorSettings ********************************************************
struct Z_Construct_UClass_UPVEditorSettings_Statics;
PROCEDURALVEGETATIONEDITOR_API UClass* Z_Construct_UClass_UPVEditorSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Public_PVEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVEditorSettings(); \
	friend struct ::Z_Construct_UClass_UPVEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALVEGETATIONEDITOR_API UClass* ::Z_Construct_UClass_UPVEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPVEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralVegetationEditor"), Z_Construct_UClass_UPVEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPVEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Public_PVEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALVEGETATIONEDITOR_API UPVEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPVEditorSettings(UPVEditorSettings&&) = delete; \
	UPVEditorSettings(const UPVEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALVEGETATIONEDITOR_API, UPVEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPVEditorSettings) \
	PROCEDURALVEGETATIONEDITOR_API virtual ~UPVEditorSettings();


#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Public_PVEditorSettings_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Public_PVEditorSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Public_PVEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Public_PVEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPVEditorSettings;

// ********** End Class UPVEditorSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ProceduralVegetationEditor_Source_ProceduralVegetationEditor_Public_PVEditorSettings_h

// ********** Begin Enum EPVExportType *************************************************************
#define FOREACH_ENUM_EPVEXPORTTYPE(op) \
	op(EPVExportType::Selection) \
	op(EPVExportType::BatchExport) 

enum class EPVExportType;
template<> struct TIsUEnumClass<EPVExportType> { enum { Value = true }; };
template<> PROCEDURALVEGETATIONEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPVExportType>();
// ********** End Enum EPVExportType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
