// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Texture/InterchangeTextureLightProfilePayloadInterface.h"

#ifdef INTERCHANGEIMPORT_InterchangeTextureLightProfilePayloadInterface_generated_h
#error "InterchangeTextureLightProfilePayloadInterface.generated.h already included, missing '#pragma once' in InterchangeTextureLightProfilePayloadInterface.h"
#endif
#define INTERCHANGEIMPORT_InterchangeTextureLightProfilePayloadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterchangeTextureLightProfilePayloadInterface **********************
struct Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeTextureLightProfilePayloadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTextureLightProfilePayloadInterface(UInterchangeTextureLightProfilePayloadInterface&&) = delete; \
	UInterchangeTextureLightProfilePayloadInterface(const UInterchangeTextureLightProfilePayloadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeTextureLightProfilePayloadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureLightProfilePayloadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTextureLightProfilePayloadInterface) \
	virtual ~UInterchangeTextureLightProfilePayloadInterface() = default;


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterchangeTextureLightProfilePayloadInterface(); \
	friend struct ::Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTextureLightProfilePayloadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTextureLightProfilePayloadInterface)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterchangeTextureLightProfilePayloadInterface() {} \
public: \
	typedef UInterchangeTextureLightProfilePayloadInterface UClassType; \
	typedef IInterchangeTextureLightProfilePayloadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTextureLightProfilePayloadInterface;

// ********** End Interface UInterchangeTextureLightProfilePayloadInterface ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTextureLightProfilePayloadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
