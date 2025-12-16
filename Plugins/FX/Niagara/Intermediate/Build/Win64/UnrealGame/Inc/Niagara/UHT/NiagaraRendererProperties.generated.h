// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraRendererProperties.h"

#ifdef NIAGARA_NiagaraRendererProperties_generated_h
#error "NiagaraRendererProperties.generated.h already included, missing '#pragma once' in NiagaraRendererProperties.h"
#endif
#define NIAGARA_NiagaraRendererProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraRendererMaterialScalarParameter ***************************
struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_197_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraRendererMaterialScalarParameter;
// ********** End ScriptStruct FNiagaraRendererMaterialScalarParameter *****************************

// ********** Begin ScriptStruct FNiagaraRendererMaterialVectorParameter ***************************
struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_209_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraRendererMaterialVectorParameter;
// ********** End ScriptStruct FNiagaraRendererMaterialVectorParameter *****************************

// ********** Begin ScriptStruct FNiagaraRendererMaterialTextureParameter **************************
struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_221_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraRendererMaterialTextureParameter;
// ********** End ScriptStruct FNiagaraRendererMaterialTextureParameter ****************************

// ********** Begin ScriptStruct FNiagaraRendererMaterialStaticBoolParameter ***********************
struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_233_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraRendererMaterialStaticBoolParameter;
// ********** End ScriptStruct FNiagaraRendererMaterialStaticBoolParameter *************************

// ********** Begin ScriptStruct FNiagaraRendererMaterialParameters ********************************
struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_253_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraRendererMaterialParameters;
// ********** End ScriptStruct FNiagaraRendererMaterialParameters **********************************

// ********** Begin Class UNiagaraRendererProperties ***********************************************
struct Z_Construct_UClass_UNiagaraRendererProperties_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_297_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraRendererProperties(); \
	friend struct ::Z_Construct_UClass_UNiagaraRendererProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraRendererProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraRendererProperties, UNiagaraMergeable, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraRendererProperties_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraRendererProperties)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_297_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraRendererProperties(UNiagaraRendererProperties&&) = delete; \
	UNiagaraRendererProperties(const UNiagaraRendererProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraRendererProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraRendererProperties); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNiagaraRendererProperties) \
	NIAGARA_API virtual ~UNiagaraRendererProperties();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_294_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_297_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_297_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_297_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraRendererProperties;

// ********** End Class UNiagaraRendererProperties *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h

// ********** Begin Enum ENiagaraRendererSortPrecision *********************************************
#define FOREACH_ENUM_ENIAGARARENDERERSORTPRECISION(op) \
	op(ENiagaraRendererSortPrecision::Default) \
	op(ENiagaraRendererSortPrecision::Low) \
	op(ENiagaraRendererSortPrecision::High) 

enum class ENiagaraRendererSortPrecision : uint8;
template<> struct TIsUEnumClass<ENiagaraRendererSortPrecision> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraRendererSortPrecision>();
// ********** End Enum ENiagaraRendererSortPrecision ***********************************************

// ********** Begin Enum ENiagaraRendererGpuTranslucentLatency *************************************
#define FOREACH_ENUM_ENIAGARARENDERERGPUTRANSLUCENTLATENCY(op) \
	op(ENiagaraRendererGpuTranslucentLatency::ProjectDefault) \
	op(ENiagaraRendererGpuTranslucentLatency::Immediate) \
	op(ENiagaraRendererGpuTranslucentLatency::Latent) 

enum class ENiagaraRendererGpuTranslucentLatency : uint8;
template<> struct TIsUEnumClass<ENiagaraRendererGpuTranslucentLatency> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraRendererGpuTranslucentLatency>();
// ********** End Enum ENiagaraRendererGpuTranslucentLatency ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
