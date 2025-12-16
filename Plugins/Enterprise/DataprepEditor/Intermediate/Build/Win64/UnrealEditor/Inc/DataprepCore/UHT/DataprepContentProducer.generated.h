// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepContentProducer.h"

#ifdef DATAPREPCORE_DataprepContentProducer_generated_h
#error "DataprepContentProducer.generated.h already included, missing '#pragma once' in DataprepContentProducer.h"
#endif
#define DATAPREPCORE_DataprepContentProducer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepContentProducer *************************************************
struct Z_Construct_UClass_UDataprepContentProducer_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentProducer_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepContentProducer(); \
	friend struct ::Z_Construct_UClass_UDataprepContentProducer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepContentProducer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepContentProducer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepContentProducer_NoRegister) \
	DECLARE_SERIALIZER(UDataprepContentProducer)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepContentProducer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepContentProducer(UDataprepContentProducer&&) = delete; \
	UDataprepContentProducer(const UDataprepContentProducer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepContentProducer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepContentProducer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepContentProducer) \
	NO_API virtual ~UDataprepContentProducer();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_66_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepContentProducer;

// ********** End Class UDataprepContentProducer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
