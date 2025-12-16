// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Volume/InterchangeVolumePayloadInterface.h"

#ifdef INTERCHANGEIMPORT_InterchangeVolumePayloadInterface_generated_h
#error "InterchangeVolumePayloadInterface.generated.h already included, missing '#pragma once' in InterchangeVolumePayloadInterface.h"
#endif
#define INTERCHANGEIMPORT_InterchangeVolumePayloadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterchangeVolumePayloadInterface ***********************************
struct Z_Construct_UClass_UInterchangeVolumePayloadInterface_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeVolumePayloadInterface_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeVolumePayloadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeVolumePayloadInterface(UInterchangeVolumePayloadInterface&&) = delete; \
	UInterchangeVolumePayloadInterface(const UInterchangeVolumePayloadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeVolumePayloadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeVolumePayloadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeVolumePayloadInterface) \
	virtual ~UInterchangeVolumePayloadInterface() = default;


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterchangeVolumePayloadInterface(); \
	friend struct ::Z_Construct_UClass_UInterchangeVolumePayloadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeVolumePayloadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeVolumePayloadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeVolumePayloadInterface_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeVolumePayloadInterface)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterchangeVolumePayloadInterface() {} \
public: \
	typedef UInterchangeVolumePayloadInterface UClassType; \
	typedef IInterchangeVolumePayloadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeVolumePayloadInterface;

// ********** End Interface UInterchangeVolumePayloadInterface *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Volume_InterchangeVolumePayloadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
