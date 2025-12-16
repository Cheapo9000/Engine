// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gltf/InterchangeGltfTranslator.h"

#ifdef INTERCHANGEIMPORT_InterchangeGltfTranslator_generated_h
#error "InterchangeGltfTranslator.generated.h already included, missing '#pragma once' in InterchangeGltfTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeGltfTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGLTFTranslator ***********************************************
struct Z_Construct_UClass_UInterchangeGLTFTranslator_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeGLTFTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGLTFTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangeGLTFTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeGLTFTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGLTFTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeGLTFTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGLTFTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeGLTFTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGLTFTranslator(UInterchangeGLTFTranslator&&) = delete; \
	UInterchangeGLTFTranslator(const UInterchangeGLTFTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeGLTFTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGLTFTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGLTFTranslator) \
	NO_API virtual ~UInterchangeGLTFTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_25_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGLTFTranslator;

// ********** End Class UInterchangeGLTFTranslator *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
