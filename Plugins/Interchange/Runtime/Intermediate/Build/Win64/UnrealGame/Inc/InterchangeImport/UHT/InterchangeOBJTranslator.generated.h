// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mesh/InterchangeOBJTranslator.h"

#ifdef INTERCHANGEIMPORT_InterchangeOBJTranslator_generated_h
#error "InterchangeOBJTranslator.generated.h already included, missing '#pragma once' in InterchangeOBJTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeOBJTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeOBJTranslator ************************************************
struct Z_Construct_UClass_UInterchangeOBJTranslator_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeOBJTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeOBJTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangeOBJTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeOBJTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeOBJTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeOBJTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeOBJTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeOBJTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeOBJTranslator(UInterchangeOBJTranslator&&) = delete; \
	UInterchangeOBJTranslator(const UInterchangeOBJTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeOBJTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeOBJTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeOBJTranslator)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_19_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeOBJTranslator;

// ********** End Class UInterchangeOBJTranslator **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
