// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundBase.h"

#ifdef ENGINE_SoundBase_generated_h
#error "SoundBase.generated.h already included, missing '#pragma once' in SoundBase.h"
#endif
#define ENGINE_SoundBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundBaseEditorData **********************************************
struct Z_Construct_UScriptStruct_FSoundBaseEditorData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundBaseEditorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundBaseEditorData;
// ********** End ScriptStruct FSoundBaseEditorData ************************************************

// ********** Begin Class USoundBase ***************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_112_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsAttenuationSettingsEditable);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_112_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundBase, ENGINE_API)


struct Z_Construct_UClass_USoundBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUSoundBase(); \
	friend struct ::Z_Construct_UClass_USoundBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundBase_NoRegister) \
	DECLARE_SERIALIZER(USoundBase) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_112_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USoundBase*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundBase(USoundBase&&) = delete; \
	USoundBase(const USoundBase&) = delete; \
	ENGINE_API virtual ~USoundBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_107_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_112_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_112_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundBase;

// ********** End Class USoundBase *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h

// ********** Begin Enum EVirtualizationMode *******************************************************
#define FOREACH_ENUM_EVIRTUALIZATIONMODE(op) \
	op(EVirtualizationMode::Disabled) \
	op(EVirtualizationMode::PlayWhenSilent) \
	op(EVirtualizationMode::Restart) \
	op(EVirtualizationMode::SeekRestart) 

enum class EVirtualizationMode : uint8;
template<> struct TIsUEnumClass<EVirtualizationMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVirtualizationMode>();
// ********** End Enum EVirtualizationMode *********************************************************

// ********** Begin Enum EUseSubmixOnPreviewMode ***************************************************
#define FOREACH_ENUM_EUSESUBMIXONPREVIEWMODE(op) \
	op(EUseSubmixOnPreviewMode::UseEditorPreference) \
	op(EUseSubmixOnPreviewMode::UseSubmixesOnPreview) \
	op(EUseSubmixOnPreviewMode::PlayPreviewsWithoutSubmixes) 

enum class EUseSubmixOnPreviewMode : uint8;
template<> struct TIsUEnumClass<EUseSubmixOnPreviewMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EUseSubmixOnPreviewMode>();
// ********** End Enum EUseSubmixOnPreviewMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
