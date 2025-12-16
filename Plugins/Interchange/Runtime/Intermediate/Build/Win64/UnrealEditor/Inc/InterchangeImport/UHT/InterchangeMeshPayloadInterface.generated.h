// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mesh/InterchangeMeshPayloadInterface.h"

#ifdef INTERCHANGEIMPORT_InterchangeMeshPayloadInterface_generated_h
#error "InterchangeMeshPayloadInterface.generated.h already included, missing '#pragma once' in InterchangeMeshPayloadInterface.h"
#endif
#define INTERCHANGEIMPORT_InterchangeMeshPayloadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterchangeMeshPayloadInterface *************************************
struct Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeMeshPayloadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMeshPayloadInterface(UInterchangeMeshPayloadInterface&&) = delete; \
	UInterchangeMeshPayloadInterface(const UInterchangeMeshPayloadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeMeshPayloadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMeshPayloadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeMeshPayloadInterface) \
	virtual ~UInterchangeMeshPayloadInterface() = default;


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterchangeMeshPayloadInterface(); \
	friend struct ::Z_Construct_UClass_UInterchangeMeshPayloadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMeshPayloadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMeshPayloadInterface)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterchangeMeshPayloadInterface() {} \
public: \
	typedef UInterchangeMeshPayloadInterface UClassType; \
	typedef IInterchangeMeshPayloadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_18_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMeshPayloadInterface;

// ********** End Interface UInterchangeMeshPayloadInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeMeshPayloadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
