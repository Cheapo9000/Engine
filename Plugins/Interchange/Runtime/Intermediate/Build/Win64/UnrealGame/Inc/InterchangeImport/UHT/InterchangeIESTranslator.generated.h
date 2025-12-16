// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Texture/InterchangeIESTranslator.h"

#ifdef INTERCHANGEIMPORT_InterchangeIESTranslator_generated_h
#error "InterchangeIESTranslator.generated.h already included, missing '#pragma once' in InterchangeIESTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeIESTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeIESTranslator ************************************************
struct Z_Construct_UClass_UInterchangeIESTranslator_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeIESTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeIESTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangeIESTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeIESTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeIESTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeIESTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeIESTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeIESTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeIESTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeIESTranslator(UInterchangeIESTranslator&&) = delete; \
	UInterchangeIESTranslator(const UInterchangeIESTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeIESTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeIESTranslator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeIESTranslator) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeIESTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_17_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeIESTranslator;

// ********** End Class UInterchangeIESTranslator **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
