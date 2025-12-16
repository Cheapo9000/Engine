// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialX/InterchangeMaterialXTranslator.h"

#ifdef INTERCHANGEIMPORT_InterchangeMaterialXTranslator_generated_h
#error "InterchangeMaterialXTranslator.generated.h already included, missing '#pragma once' in InterchangeMaterialXTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeMaterialXTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeMaterialXTranslator ******************************************
struct Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMaterialXTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialXTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeMaterialXTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialXTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeMaterialXTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialXTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeMaterialXTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeMaterialXTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialXTranslator(UInterchangeMaterialXTranslator&&) = delete; \
	UInterchangeMaterialXTranslator(const UInterchangeMaterialXTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeMaterialXTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialXTranslator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeMaterialXTranslator) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeMaterialXTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_16_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialXTranslator;

// ********** End Class UInterchangeMaterialXTranslator ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
