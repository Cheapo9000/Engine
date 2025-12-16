// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scene/InterchangeVariantSetPayloadInterface.h"

#ifdef INTERCHANGEIMPORT_InterchangeVariantSetPayloadInterface_generated_h
#error "InterchangeVariantSetPayloadInterface.generated.h already included, missing '#pragma once' in InterchangeVariantSetPayloadInterface.h"
#endif
#define INTERCHANGEIMPORT_InterchangeVariantSetPayloadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterchangeVariantSetPayloadInterface *******************************
struct Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeVariantSetPayloadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeVariantSetPayloadInterface(UInterchangeVariantSetPayloadInterface&&) = delete; \
	UInterchangeVariantSetPayloadInterface(const UInterchangeVariantSetPayloadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeVariantSetPayloadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeVariantSetPayloadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeVariantSetPayloadInterface) \
	virtual ~UInterchangeVariantSetPayloadInterface() = default;


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_59_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterchangeVariantSetPayloadInterface(); \
	friend struct ::Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeVariantSetPayloadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeVariantSetPayloadInterface)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_59_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_59_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_59_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_59_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterchangeVariantSetPayloadInterface() {} \
public: \
	typedef UInterchangeVariantSetPayloadInterface UClassType; \
	typedef IInterchangeVariantSetPayloadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_56_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h_59_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeVariantSetPayloadInterface;

// ********** End Interface UInterchangeVariantSetPayloadInterface *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeVariantSetPayloadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
