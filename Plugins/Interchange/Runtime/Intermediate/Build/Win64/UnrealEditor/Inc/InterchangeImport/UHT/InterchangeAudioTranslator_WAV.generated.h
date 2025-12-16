// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/Formats/InterchangeAudioTranslator_WAV.h"

#ifdef INTERCHANGEIMPORT_InterchangeAudioTranslator_WAV_generated_h
#error "InterchangeAudioTranslator_WAV.generated.h already included, missing '#pragma once' in InterchangeAudioTranslator_WAV.h"
#endif
#define INTERCHANGEIMPORT_InterchangeAudioTranslator_WAV_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeAudioTranslator_WAV ******************************************
struct Z_Construct_UClass_UInterchangeAudioTranslator_WAV_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAudioTranslator_WAV_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAudioTranslator_WAV(); \
	friend struct ::Z_Construct_UClass_UInterchangeAudioTranslator_WAV_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeAudioTranslator_WAV_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAudioTranslator_WAV, UInterchangeAudioTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeAudioTranslator_WAV_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAudioTranslator_WAV)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeAudioTranslator_WAV(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAudioTranslator_WAV(UInterchangeAudioTranslator_WAV&&) = delete; \
	UInterchangeAudioTranslator_WAV(const UInterchangeAudioTranslator_WAV&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeAudioTranslator_WAV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAudioTranslator_WAV); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAudioTranslator_WAV) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeAudioTranslator_WAV();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h_9_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAudioTranslator_WAV;

// ********** End Class UInterchangeAudioTranslator_WAV ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_Formats_InterchangeAudioTranslator_WAV_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
