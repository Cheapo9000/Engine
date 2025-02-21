// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDatasmithTranslator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATASMITHINTERCHANGE_InterchangeDatasmithTranslator_generated_h
#error "InterchangeDatasmithTranslator.generated.h already included, missing '#pragma once' in InterchangeDatasmithTranslator.h"
#endif
#define DATASMITHINTERCHANGE_InterchangeDatasmithTranslator_generated_h

#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDatasmithTranslatorSettings(); \
	friend struct Z_Construct_UClass_UInterchangeDatasmithTranslatorSettings_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDatasmithTranslatorSettings, UInterchangeTranslatorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithInterchange"), DATASMITHINTERCHANGE_API) \
	DECLARE_SERIALIZER(UInterchangeDatasmithTranslatorSettings)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHINTERCHANGE_API UInterchangeDatasmithTranslatorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeDatasmithTranslatorSettings(UInterchangeDatasmithTranslatorSettings&&); \
	UInterchangeDatasmithTranslatorSettings(const UInterchangeDatasmithTranslatorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHINTERCHANGE_API, UInterchangeDatasmithTranslatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDatasmithTranslatorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeDatasmithTranslatorSettings) \
	DATASMITHINTERCHANGE_API virtual ~UInterchangeDatasmithTranslatorSettings();


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_70_PROLOG
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHINTERCHANGE_API UClass* StaticClass<class UInterchangeDatasmithTranslatorSettings>();

#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDatasmithTranslator(); \
	friend struct Z_Construct_UClass_UInterchangeDatasmithTranslator_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDatasmithTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithInterchange"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDatasmithTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeDatasmithTranslator*>(this); }


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDatasmithTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeDatasmithTranslator(UInterchangeDatasmithTranslator&&); \
	UInterchangeDatasmithTranslator(const UInterchangeDatasmithTranslator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDatasmithTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDatasmithTranslator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeDatasmithTranslator) \
	NO_API virtual ~UInterchangeDatasmithTranslator();


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_80_PROLOG
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHINTERCHANGE_API UClass* StaticClass<class UInterchangeDatasmithTranslator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithTranslator_h


#define FOREACH_ENUM_EINTERCHANGEMESHERTYPE(op) \
	op(EInterchangeMesherType::UseCADKernel) \
	op(EInterchangeMesherType::UseTechSoft) \
	op(EInterchangeMesherType::UseNativeTessellator) 

enum class EInterchangeMesherType : uint8;
template<> struct TIsUEnumClass<EInterchangeMesherType> { enum { Value = true }; };
template<> DATASMITHINTERCHANGE_API UEnum* StaticEnum<EInterchangeMesherType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
