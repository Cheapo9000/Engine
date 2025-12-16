// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/InterchangeAudioPayloadInterface.h"

#ifdef INTERCHANGEIMPORT_InterchangeAudioPayloadInterface_generated_h
#error "InterchangeAudioPayloadInterface.generated.h already included, missing '#pragma once' in InterchangeAudioPayloadInterface.h"
#endif
#define INTERCHANGEIMPORT_InterchangeAudioPayloadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterchangeAudioPayloadInterface ************************************
struct Z_Construct_UClass_UInterchangeAudioPayloadInterface_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAudioPayloadInterface_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeAudioPayloadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAudioPayloadInterface(UInterchangeAudioPayloadInterface&&) = delete; \
	UInterchangeAudioPayloadInterface(const UInterchangeAudioPayloadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeAudioPayloadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAudioPayloadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAudioPayloadInterface) \
	virtual ~UInterchangeAudioPayloadInterface() = default;


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterchangeAudioPayloadInterface(); \
	friend struct ::Z_Construct_UClass_UInterchangeAudioPayloadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeAudioPayloadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAudioPayloadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeAudioPayloadInterface_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAudioPayloadInterface)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterchangeAudioPayloadInterface() {} \
public: \
	typedef UInterchangeAudioPayloadInterface UClassType; \
	typedef IInterchangeAudioPayloadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAudioPayloadInterface;

// ********** End Interface UInterchangeAudioPayloadInterface **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Audio_InterchangeAudioPayloadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
