// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Texture/InterchangePSDTranslator.h"

#ifdef INTERCHANGEIMPORT_InterchangePSDTranslator_generated_h
#error "InterchangePSDTranslator.generated.h already included, missing '#pragma once' in InterchangePSDTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangePSDTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangePSDTranslator ************************************************
struct Z_Construct_UClass_UInterchangePSDTranslator_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangePSDTranslator_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePSDTranslator(); \
	friend struct ::Z_Construct_UClass_UInterchangePSDTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangePSDTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePSDTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangePSDTranslator_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePSDTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangePSDTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangePSDTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePSDTranslator(UInterchangePSDTranslator&&) = delete; \
	UInterchangePSDTranslator(const UInterchangePSDTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangePSDTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePSDTranslator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePSDTranslator) \
	INTERCHANGEIMPORT_API virtual ~UInterchangePSDTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_17_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePSDTranslator;

// ********** End Class UInterchangePSDTranslator **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangePSDTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
