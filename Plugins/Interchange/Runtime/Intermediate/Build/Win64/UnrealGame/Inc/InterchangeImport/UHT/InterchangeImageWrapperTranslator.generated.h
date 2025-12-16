// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Texture/InterchangeImageWrapperTranslator.h"

#ifdef INTERCHANGEIMPORT_InterchangeImageWrapperTranslator_generated_h
#error "InterchangeImageWrapperTranslator.generated.h already included, missing '#pragma once' in InterchangeImageWrapperTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeImageWrapperTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeImageWrapperTranslator ***************************************
struct Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeImageWrapperTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeImageWrapperTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangeImageWrapperTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeImageWrapperTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeImageWrapperTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeImageWrapperTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeImageWrapperTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeImageWrapperTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeImageWrapperTranslator(UInterchangeImageWrapperTranslator&&) = delete; \
	UInterchangeImageWrapperTranslator(const UInterchangeImageWrapperTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeImageWrapperTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeImageWrapperTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeImageWrapperTranslator) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeImageWrapperTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_21_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeImageWrapperTranslator;

// ********** End Class UInterchangeImageWrapperTranslator *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeImageWrapperTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
