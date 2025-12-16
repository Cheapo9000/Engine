// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/InterchangeAudioSoundWaveFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeAudioSoundWaveFactory_generated_h
#error "InterchangeAudioSoundWaveFactory.generated.h already included, missing '#pragma once' in InterchangeAudioSoundWaveFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeAudioSoundWaveFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeAudioSoundWaveFactory ****************************************
struct Z_Construct_UClass_UInterchangeAudioSoundWaveFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAudioSoundWaveFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAudioSoundWaveFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeAudioSoundWaveFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeAudioSoundWaveFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAudioSoundWaveFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeAudioSoundWaveFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAudioSoundWaveFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeAudioSoundWaveFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAudioSoundWaveFactory(UInterchangeAudioSoundWaveFactory&&) = delete; \
	UInterchangeAudioSoundWaveFactory(const UInterchangeAudioSoundWaveFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeAudioSoundWaveFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAudioSoundWaveFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAudioSoundWaveFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeAudioSoundWaveFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h_15_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAudioSoundWaveFactory;

// ********** End Class UInterchangeAudioSoundWaveFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioSoundWaveFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
