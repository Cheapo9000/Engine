// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Texture/InterchangeSlicedTexturePayloadInterface.h"

#ifdef INTERCHANGEIMPORT_InterchangeSlicedTexturePayloadInterface_generated_h
#error "InterchangeSlicedTexturePayloadInterface.generated.h already included, missing '#pragma once' in InterchangeSlicedTexturePayloadInterface.h"
#endif
#define INTERCHANGEIMPORT_InterchangeSlicedTexturePayloadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterchangeSlicedTexturePayloadInterface ****************************
struct Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeSlicedTexturePayloadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSlicedTexturePayloadInterface(UInterchangeSlicedTexturePayloadInterface&&) = delete; \
	UInterchangeSlicedTexturePayloadInterface(const UInterchangeSlicedTexturePayloadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeSlicedTexturePayloadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSlicedTexturePayloadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSlicedTexturePayloadInterface) \
	virtual ~UInterchangeSlicedTexturePayloadInterface() = default;


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterchangeSlicedTexturePayloadInterface(); \
	friend struct ::Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSlicedTexturePayloadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSlicedTexturePayloadInterface)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterchangeSlicedTexturePayloadInterface() {} \
public: \
	typedef UInterchangeSlicedTexturePayloadInterface UClassType; \
	typedef IInterchangeSlicedTexturePayloadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSlicedTexturePayloadInterface;

// ********** End Interface UInterchangeSlicedTexturePayloadInterface ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
