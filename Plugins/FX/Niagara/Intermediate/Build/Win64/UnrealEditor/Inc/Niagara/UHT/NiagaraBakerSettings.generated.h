// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraBakerSettings.h"

#ifdef NIAGARA_NiagaraBakerSettings_generated_h
#error "NiagaraBakerSettings.generated.h already included, missing '#pragma once' in NiagaraBakerSettings.h"
#endif
#define NIAGARA_NiagaraBakerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraBakerCameraSettings ***************************************
struct Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraBakerCameraSettings;
// ********** End ScriptStruct FNiagaraBakerCameraSettings *****************************************

// ********** Begin ScriptStruct FNiagaraBakerTextureSettings **************************************
struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraBakerTextureSettings;
// ********** End ScriptStruct FNiagaraBakerTextureSettings ****************************************

// ********** Begin Class UNiagaraBakerSettings ****************************************************
struct Z_Construct_UClass_UNiagaraBakerSettings_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerSettings_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraBakerSettings(); \
	friend struct ::Z_Construct_UClass_UNiagaraBakerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraBakerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraBakerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraBakerSettings_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraBakerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_143_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraBakerSettings(UNiagaraBakerSettings&&) = delete; \
	UNiagaraBakerSettings(const UNiagaraBakerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraBakerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBakerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBakerSettings) \
	NIAGARA_API virtual ~UNiagaraBakerSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_140_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraBakerSettings;

// ********** End Class UNiagaraBakerSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h

// ********** Begin Enum ENiagaraBakerViewMode *****************************************************
#define FOREACH_ENUM_ENIAGARABAKERVIEWMODE(op) \
	op(ENiagaraBakerViewMode::Perspective) \
	op(ENiagaraBakerViewMode::OrthoFront) \
	op(ENiagaraBakerViewMode::OrthoBack) \
	op(ENiagaraBakerViewMode::OrthoLeft) \
	op(ENiagaraBakerViewMode::OrthoRight) \
	op(ENiagaraBakerViewMode::OrthoTop) \
	op(ENiagaraBakerViewMode::OrthoBottom) \
	op(ENiagaraBakerViewMode::Num) 

enum class ENiagaraBakerViewMode;
template<> struct TIsUEnumClass<ENiagaraBakerViewMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraBakerViewMode>();
// ********** End Enum ENiagaraBakerViewMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
