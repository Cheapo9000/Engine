// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeOpenVDBTranslator.h"

#ifdef INTERCHANGEOPENVDBIMPORT_InterchangeOpenVDBTranslator_generated_h
#error "InterchangeOpenVDBTranslator.generated.h already included, missing '#pragma once' in InterchangeOpenVDBTranslator.h"
#endif
#define INTERCHANGEOPENVDBIMPORT_InterchangeOpenVDBTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeOpenVDBTranslator ********************************************
struct Z_Construct_UClass_UInterchangeOpenVDBTranslator_Statics;
INTERCHANGEOPENVDBIMPORT_API UClass* Z_Construct_UClass_UInterchangeOpenVDBTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Extensions_OpenVDB_Source_Import_Public_InterchangeOpenVDBTranslator_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeOpenVDBTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangeOpenVDBTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEOPENVDBIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeOpenVDBTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeOpenVDBTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeOpenVDBImport"), Z_Construct_UClass_UInterchangeOpenVDBTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeOpenVDBTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeOpenVDBTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Extensions_OpenVDB_Source_Import_Public_InterchangeOpenVDBTranslator_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeOpenVDBTranslator(UInterchangeOpenVDBTranslator&&) = delete; \
	UInterchangeOpenVDBTranslator(const UInterchangeOpenVDBTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeOpenVDBTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeOpenVDBTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeOpenVDBTranslator) \
	NO_API virtual ~UInterchangeOpenVDBTranslator();


#define FID_Engine_Plugins_Interchange_Extensions_OpenVDB_Source_Import_Public_InterchangeOpenVDBTranslator_h_23_PROLOG
#define FID_Engine_Plugins_Interchange_Extensions_OpenVDB_Source_Import_Public_InterchangeOpenVDBTranslator_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Extensions_OpenVDB_Source_Import_Public_InterchangeOpenVDBTranslator_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Extensions_OpenVDB_Source_Import_Public_InterchangeOpenVDBTranslator_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeOpenVDBTranslator;

// ********** End Class UInterchangeOpenVDBTranslator **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Extensions_OpenVDB_Source_Import_Public_InterchangeOpenVDBTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
