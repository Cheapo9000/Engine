// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Customizations/SimCache/NiagaraMemoryBufferSimCacheVisualizer.h"

#ifdef NIAGARAEDITOR_NiagaraMemoryBufferSimCacheVisualizer_generated_h
#error "NiagaraMemoryBufferSimCacheVisualizer.generated.h already included, missing '#pragma once' in NiagaraMemoryBufferSimCacheVisualizer.h"
#endif
#define NIAGARAEDITOR_NiagaraMemoryBufferSimCacheVisualizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFNiagaraMemoryBufferSimCacheVisualizerSettings **************************
struct Z_Construct_UClass_UFNiagaraMemoryBufferSimCacheVisualizerSettings_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UFNiagaraMemoryBufferSimCacheVisualizerSettings_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_SimCache_NiagaraMemoryBufferSimCacheVisualizer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFNiagaraMemoryBufferSimCacheVisualizerSettings(); \
	friend struct ::Z_Construct_UClass_UFNiagaraMemoryBufferSimCacheVisualizerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UFNiagaraMemoryBufferSimCacheVisualizerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFNiagaraMemoryBufferSimCacheVisualizerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UFNiagaraMemoryBufferSimCacheVisualizerSettings_NoRegister) \
	DECLARE_SERIALIZER(UFNiagaraMemoryBufferSimCacheVisualizerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_SimCache_NiagaraMemoryBufferSimCacheVisualizer_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFNiagaraMemoryBufferSimCacheVisualizerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFNiagaraMemoryBufferSimCacheVisualizerSettings(UFNiagaraMemoryBufferSimCacheVisualizerSettings&&) = delete; \
	UFNiagaraMemoryBufferSimCacheVisualizerSettings(const UFNiagaraMemoryBufferSimCacheVisualizerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFNiagaraMemoryBufferSimCacheVisualizerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFNiagaraMemoryBufferSimCacheVisualizerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFNiagaraMemoryBufferSimCacheVisualizerSettings) \
	NO_API virtual ~UFNiagaraMemoryBufferSimCacheVisualizerSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_SimCache_NiagaraMemoryBufferSimCacheVisualizer_h_19_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_SimCache_NiagaraMemoryBufferSimCacheVisualizer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_SimCache_NiagaraMemoryBufferSimCacheVisualizer_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_SimCache_NiagaraMemoryBufferSimCacheVisualizer_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFNiagaraMemoryBufferSimCacheVisualizerSettings;

// ********** End Class UFNiagaraMemoryBufferSimCacheVisualizerSettings ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_SimCache_NiagaraMemoryBufferSimCacheVisualizer_h

// ********** Begin Enum ENDIMemoryBufferViewType **************************************************
#define FOREACH_ENUM_ENDIMEMORYBUFFERVIEWTYPE(op) \
	op(ENDIMemoryBufferViewType::Float) \
	op(ENDIMemoryBufferViewType::Integer) \
	op(ENDIMemoryBufferViewType::UnsignedInteger) \
	op(ENDIMemoryBufferViewType::Hex) 

enum class ENDIMemoryBufferViewType;
template<> struct TIsUEnumClass<ENDIMemoryBufferViewType> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENDIMemoryBufferViewType>();
// ********** End Enum ENDIMemoryBufferViewType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
