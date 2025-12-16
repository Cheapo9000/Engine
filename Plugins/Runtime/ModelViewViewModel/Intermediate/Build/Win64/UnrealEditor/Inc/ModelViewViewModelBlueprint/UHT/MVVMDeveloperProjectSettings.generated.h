// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMDeveloperProjectSettings.h"

#ifdef MODELVIEWVIEWMODELBLUEPRINT_MVVMDeveloperProjectSettings_generated_h
#error "MVVMDeveloperProjectSettings.generated.h already included, missing '#pragma once' in MVVMDeveloperProjectSettings.h"
#endif
#define MODELVIEWVIEWMODELBLUEPRINT_MVVMDeveloperProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMVVMDeveloperProjectWidgetSettings *******************************
struct Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMDeveloperProjectWidgetSettings_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


struct FMVVMDeveloperProjectWidgetSettings;
// ********** End ScriptStruct FMVVMDeveloperProjectWidgetSettings *********************************

// ********** Begin ScriptStruct FMVVMViewBindingFilterSettings ************************************
struct Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics;
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMVVMViewBindingFilterSettings_Statics; \
	MODELVIEWVIEWMODELBLUEPRINT_API static class UScriptStruct* StaticStruct();


struct FMVVMViewBindingFilterSettings;
// ********** End ScriptStruct FMVVMViewBindingFilterSettings **************************************

// ********** Begin Class UMVVMDeveloperProjectSettings ********************************************
struct Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics;
MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMDeveloperProjectSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMDeveloperProjectSettings(); \
	friend struct ::Z_Construct_UClass_UMVVMDeveloperProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODELBLUEPRINT_API UClass* ::Z_Construct_UClass_UMVVMDeveloperProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMDeveloperProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModelViewViewModelBlueprint"), Z_Construct_UClass_UMVVMDeveloperProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UMVVMDeveloperProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("ModelViewViewModel");} \



#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_71_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMDeveloperProjectSettings(UMVVMDeveloperProjectSettings&&) = delete; \
	UMVVMDeveloperProjectSettings(const UMVVMDeveloperProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODELBLUEPRINT_API, UMVVMDeveloperProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMDeveloperProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMVVMDeveloperProjectSettings) \
	MODELVIEWVIEWMODELBLUEPRINT_API virtual ~UMVVMDeveloperProjectSettings();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_68_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMDeveloperProjectSettings;

// ********** End Class UMVVMDeveloperProjectSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMDeveloperProjectSettings_h

// ********** Begin Enum EFilterFlag ***************************************************************
#define FOREACH_ENUM_EFILTERFLAG(op) \
	op(EFilterFlag::None) \
	op(EFilterFlag::All) 

enum class EFilterFlag : uint8;
template<> struct TIsUEnumClass<EFilterFlag> { enum { Value = true }; };
template<> MODELVIEWVIEWMODELBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<EFilterFlag>();
// ********** End Enum EFilterFlag *****************************************************************

// ********** Begin Enum EMVVMDeveloperConversionFunctionFilterType ********************************
#define FOREACH_ENUM_EMVVMDEVELOPERCONVERSIONFUNCTIONFILTERTYPE(op) \
	op(EMVVMDeveloperConversionFunctionFilterType::BlueprintActionRegistry) \
	op(EMVVMDeveloperConversionFunctionFilterType::AllowedList) 

enum class EMVVMDeveloperConversionFunctionFilterType : uint8;
template<> struct TIsUEnumClass<EMVVMDeveloperConversionFunctionFilterType> { enum { Value = true }; };
template<> MODELVIEWVIEWMODELBLUEPRINT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMVVMDeveloperConversionFunctionFilterType>();
// ********** End Enum EMVVMDeveloperConversionFunctionFilterType **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
