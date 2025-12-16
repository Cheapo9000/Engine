// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelingComponentsSettings.h"

#ifdef MODELINGCOMPONENTS_ModelingComponentsSettings_generated_h
#error "ModelingComponentsSettings.generated.h already included, missing '#pragma once' in ModelingComponentsSettings.h"
#endif
#define MODELINGCOMPONENTS_ModelingComponentsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModelingComponentsSettings **********************************************
struct Z_Construct_UClass_UModelingComponentsSettings_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingComponentsSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingComponentsSettings(); \
	friend struct ::Z_Construct_UClass_UModelingComponentsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UModelingComponentsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelingComponentsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UModelingComponentsSettings_NoRegister) \
	DECLARE_SERIALIZER(UModelingComponentsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UModelingComponentsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelingComponentsSettings(UModelingComponentsSettings&&) = delete; \
	UModelingComponentsSettings(const UModelingComponentsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UModelingComponentsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingComponentsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingComponentsSettings) \
	MODELINGCOMPONENTS_API virtual ~UModelingComponentsSettings();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModelingComponentsSettings;

// ********** End Class UModelingComponentsSettings ************************************************

// ********** Begin Class UModelingComponentsEditorSettings ****************************************
struct Z_Construct_UClass_UModelingComponentsEditorSettings_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingComponentsEditorSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingComponentsEditorSettings(); \
	friend struct ::Z_Construct_UClass_UModelingComponentsEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UModelingComponentsEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelingComponentsEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UModelingComponentsEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UModelingComponentsEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UModelingComponentsEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelingComponentsEditorSettings(UModelingComponentsEditorSettings&&) = delete; \
	UModelingComponentsEditorSettings(const UModelingComponentsEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UModelingComponentsEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingComponentsEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingComponentsEditorSettings) \
	MODELINGCOMPONENTS_API virtual ~UModelingComponentsEditorSettings();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_89_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModelingComponentsEditorSettings;

// ********** End Class UModelingComponentsEditorSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h

// ********** Begin Enum EModelingComponentsPlaneVisualizationMode *********************************
#define FOREACH_ENUM_EMODELINGCOMPONENTSPLANEVISUALIZATIONMODE(op) \
	op(EModelingComponentsPlaneVisualizationMode::SimpleGrid) \
	op(EModelingComponentsPlaneVisualizationMode::HierarchicalGrid) \
	op(EModelingComponentsPlaneVisualizationMode::FixedScreenAreaGrid) 

enum class EModelingComponentsPlaneVisualizationMode : uint8;
template<> struct TIsUEnumClass<EModelingComponentsPlaneVisualizationMode> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EModelingComponentsPlaneVisualizationMode>();
// ********** End Enum EModelingComponentsPlaneVisualizationMode ***********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
