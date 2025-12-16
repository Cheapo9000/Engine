// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Texture/InterchangeBlockedTexturePayloadInterface.h"

#ifdef INTERCHANGEIMPORT_InterchangeBlockedTexturePayloadInterface_generated_h
#error "InterchangeBlockedTexturePayloadInterface.generated.h already included, missing '#pragma once' in InterchangeBlockedTexturePayloadInterface.h"
#endif
#define INTERCHANGEIMPORT_InterchangeBlockedTexturePayloadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterchangeBlockedTexturePayloadInterface ***************************
struct Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeBlockedTexturePayloadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeBlockedTexturePayloadInterface(UInterchangeBlockedTexturePayloadInterface&&) = delete; \
	UInterchangeBlockedTexturePayloadInterface(const UInterchangeBlockedTexturePayloadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeBlockedTexturePayloadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBlockedTexturePayloadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeBlockedTexturePayloadInterface) \
	virtual ~UInterchangeBlockedTexturePayloadInterface() = default;


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterchangeBlockedTexturePayloadInterface(); \
	friend struct ::Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeBlockedTexturePayloadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeBlockedTexturePayloadInterface_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeBlockedTexturePayloadInterface)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterchangeBlockedTexturePayloadInterface() {} \
public: \
	typedef UInterchangeBlockedTexturePayloadInterface UClassType; \
	typedef IInterchangeBlockedTexturePayloadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_16_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeBlockedTexturePayloadInterface;

// ********** End Interface UInterchangeBlockedTexturePayloadInterface *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeBlockedTexturePayloadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
