// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProductionSettings.h"

#ifdef CINEASSEMBLYTOOLSEDITOR_ProductionSettings_generated_h
#error "ProductionSettings.generated.h already included, missing '#pragma once' in ProductionSettings.h"
#endif
#define CINEASSEMBLYTOOLSEDITOR_ProductionSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFolderTemplate ***************************************************
struct Z_Construct_UScriptStruct_FFolderTemplate_Statics;
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Public_ProductionSettings_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFolderTemplate_Statics; \
	CINEASSEMBLYTOOLSEDITOR_API static class UScriptStruct* StaticStruct();


struct FFolderTemplate;
// ********** End ScriptStruct FFolderTemplate *****************************************************

// ********** Begin ScriptStruct FCinematicProduction **********************************************
struct Z_Construct_UScriptStruct_FCinematicProduction_Statics;
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Public_ProductionSettings_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCinematicProduction_Statics; \
	CINEASSEMBLYTOOLSEDITOR_API static class UScriptStruct* StaticStruct();


struct FCinematicProduction;
// ********** End ScriptStruct FCinematicProduction ************************************************

// ********** Begin Class UProductionSettings ******************************************************
struct Z_Construct_UClass_UProductionSettings_Statics;
CINEASSEMBLYTOOLSEDITOR_API UClass* Z_Construct_UClass_UProductionSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Public_ProductionSettings_h_201_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProductionSettings(); \
	friend struct ::Z_Construct_UClass_UProductionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEASSEMBLYTOOLSEDITOR_API UClass* ::Z_Construct_UClass_UProductionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UProductionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineAssemblyToolsEditor"), Z_Construct_UClass_UProductionSettings_NoRegister) \
	DECLARE_SERIALIZER(UProductionSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Public_ProductionSettings_h_201_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProductionSettings(UProductionSettings&&) = delete; \
	UProductionSettings(const UProductionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProductionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProductionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProductionSettings) \
	NO_API virtual ~UProductionSettings();


#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Public_ProductionSettings_h_198_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Public_ProductionSettings_h_201_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Public_ProductionSettings_h_201_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Public_ProductionSettings_h_201_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProductionSettings;

// ********** End Class UProductionSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Public_ProductionSettings_h

// ********** Begin Enum ESubsequencePriority ******************************************************
#define FOREACH_ENUM_ESUBSEQUENCEPRIORITY(op) \
	op(ESubsequencePriority::TopDown) \
	op(ESubsequencePriority::BottomUp) 

enum class ESubsequencePriority : uint8;
template<> struct TIsUEnumClass<ESubsequencePriority> { enum { Value = true }; };
template<> CINEASSEMBLYTOOLSEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubsequencePriority>();
// ********** End Enum ESubsequencePriority ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
