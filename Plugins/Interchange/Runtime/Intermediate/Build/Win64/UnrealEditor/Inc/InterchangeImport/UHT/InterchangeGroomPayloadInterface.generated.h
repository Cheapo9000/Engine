// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Groom/InterchangeGroomPayloadInterface.h"

#ifdef INTERCHANGEIMPORT_InterchangeGroomPayloadInterface_generated_h
#error "InterchangeGroomPayloadInterface.generated.h already included, missing '#pragma once' in InterchangeGroomPayloadInterface.h"
#endif
#define INTERCHANGEIMPORT_InterchangeGroomPayloadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterchangeGroomPayloadInterface ************************************
struct Z_Construct_UClass_UInterchangeGroomPayloadInterface_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeGroomPayloadInterface_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeGroomPayloadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGroomPayloadInterface(UInterchangeGroomPayloadInterface&&) = delete; \
	UInterchangeGroomPayloadInterface(const UInterchangeGroomPayloadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeGroomPayloadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGroomPayloadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGroomPayloadInterface) \
	virtual ~UInterchangeGroomPayloadInterface() = default;


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterchangeGroomPayloadInterface(); \
	friend struct ::Z_Construct_UClass_UInterchangeGroomPayloadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeGroomPayloadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGroomPayloadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeGroomPayloadInterface_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGroomPayloadInterface)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterchangeGroomPayloadInterface() {} \
public: \
	typedef UInterchangeGroomPayloadInterface UClassType; \
	typedef IInterchangeGroomPayloadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGroomPayloadInterface;

// ********** End Interface UInterchangeGroomPayloadInterface **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Groom_InterchangeGroomPayloadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
