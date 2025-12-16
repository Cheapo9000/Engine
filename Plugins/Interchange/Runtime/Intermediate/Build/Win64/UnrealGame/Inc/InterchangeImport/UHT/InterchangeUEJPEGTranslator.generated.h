// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Texture/InterchangeUEJPEGTranslator.h"

#ifdef INTERCHANGEIMPORT_InterchangeUEJPEGTranslator_generated_h
#error "InterchangeUEJPEGTranslator.generated.h already included, missing '#pragma once' in InterchangeUEJPEGTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeUEJPEGTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeUEJPEGTranslator *********************************************
struct Z_Construct_UClass_UInterchangeUEJPEGTranslator_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeUEJPEGTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeUEJPEGTranslator_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeUEJPEGTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangeUEJPEGTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeUEJPEGTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeUEJPEGTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeUEJPEGTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeUEJPEGTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeUEJPEGTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeUEJPEGTranslator_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeUEJPEGTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeUEJPEGTranslator(UInterchangeUEJPEGTranslator&&) = delete; \
	UInterchangeUEJPEGTranslator(const UInterchangeUEJPEGTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeUEJPEGTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeUEJPEGTranslator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeUEJPEGTranslator) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeUEJPEGTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeUEJPEGTranslator_h_17_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeUEJPEGTranslator_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeUEJPEGTranslator_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeUEJPEGTranslator_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeUEJPEGTranslator;

// ********** End Class UInterchangeUEJPEGTranslator ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeUEJPEGTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
