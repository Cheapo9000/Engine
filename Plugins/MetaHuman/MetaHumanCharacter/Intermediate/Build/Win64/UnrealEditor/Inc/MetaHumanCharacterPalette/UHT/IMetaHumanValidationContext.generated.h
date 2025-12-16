// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMetaHumanValidationContext.h"

#ifdef METAHUMANCHARACTERPALETTE_IMetaHumanValidationContext_generated_h
#error "IMetaHumanValidationContext.generated.h already included, missing '#pragma once' in IMetaHumanValidationContext.h"
#endif
#define METAHUMANCHARACTERPALETTE_IMetaHumanValidationContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMetaHumanValidationContext ******************************************
struct Z_Construct_UClass_UMetaHumanValidationContext_Statics;
METAHUMANCHARACTERPALETTE_API UClass* Z_Construct_UClass_UMetaHumanValidationContext_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanValidationContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanValidationContext(UMetaHumanValidationContext&&) = delete; \
	UMetaHumanValidationContext(const UMetaHumanValidationContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanValidationContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanValidationContext); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanValidationContext) \
	virtual ~UMetaHumanValidationContext() = default;


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMetaHumanValidationContext(); \
	friend struct ::Z_Construct_UClass_UMetaHumanValidationContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTE_API UClass* ::Z_Construct_UClass_UMetaHumanValidationContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanValidationContext, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPalette"), Z_Construct_UClass_UMetaHumanValidationContext_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanValidationContext)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMetaHumanValidationContext() {} \
public: \
	typedef UMetaHumanValidationContext UClassType; \
	typedef IMetaHumanValidationContext ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h_9_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanValidationContext;

// ********** End Interface UMetaHumanValidationContext ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_IMetaHumanValidationContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
