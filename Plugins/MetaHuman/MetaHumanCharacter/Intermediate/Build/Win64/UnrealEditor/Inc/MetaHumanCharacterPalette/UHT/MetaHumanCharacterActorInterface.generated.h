// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterActorInterface.h"

#ifdef METAHUMANCHARACTERPALETTE_MetaHumanCharacterActorInterface_generated_h
#error "MetaHumanCharacterActorInterface.generated.h already included, missing '#pragma once' in MetaHumanCharacterActorInterface.h"
#endif
#define METAHUMANCHARACTERPALETTE_MetaHumanCharacterActorInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetaHumanCharacterInstance;

// ********** Begin Interface UMetaHumanCharacterActorInterface ************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetCharacterInstance_Implementation(UMetaHumanCharacterInstance* CharacterInstance) {}; \
	DECLARE_FUNCTION(execSetCharacterInstance);


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMetaHumanCharacterActorInterface_Statics;
METAHUMANCHARACTERPALETTE_API UClass* Z_Construct_UClass_UMetaHumanCharacterActorInterface_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterActorInterface(UMetaHumanCharacterActorInterface&&) = delete; \
	UMetaHumanCharacterActorInterface(const UMetaHumanCharacterActorInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterActorInterface) \
	virtual ~UMetaHumanCharacterActorInterface() = default;


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterActorInterface(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterActorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTE_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterActorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPalette"), Z_Construct_UClass_UMetaHumanCharacterActorInterface_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterActorInterface)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMetaHumanCharacterActorInterface() {} \
public: \
	typedef UMetaHumanCharacterActorInterface UClassType; \
	typedef IMetaHumanCharacterActorInterface ThisClass; \
	static void Execute_SetCharacterInstance(UObject* O, UMetaHumanCharacterInstance* CharacterInstance); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_16_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterActorInterface;

// ********** End Interface UMetaHumanCharacterActorInterface **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterActorInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
