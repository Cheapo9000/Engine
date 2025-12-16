// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterEditorActorInterface.h"

#ifdef METAHUMANCHARACTERPALETTEEDITOR_MetaHumanCharacterEditorActorInterface_generated_h
#error "MetaHumanCharacterEditorActorInterface.generated.h already included, missing '#pragma once' in MetaHumanCharacterEditorActorInterface.h"
#endif
#define METAHUMANCHARACTERPALETTEEDITOR_MetaHumanCharacterEditorActorInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMetaHumanCharacterEditorActorInterface ******************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorActorInterface_Statics;
METAHUMANCHARACTERPALETTEEDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorActorInterface_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorActorInterface(UMetaHumanCharacterEditorActorInterface&&) = delete; \
	UMetaHumanCharacterEditorActorInterface(const UMetaHumanCharacterEditorActorInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorActorInterface) \
	virtual ~UMetaHumanCharacterEditorActorInterface() = default;


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h_51_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorActorInterface(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorActorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTEEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorActorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPaletteEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorActorInterface_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorActorInterface)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h_51_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h_51_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h_51_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h_51_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMetaHumanCharacterEditorActorInterface() {} \
public: \
	typedef UMetaHumanCharacterEditorActorInterface UClassType; \
	typedef IMetaHumanCharacterEditorActorInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h_48_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h_51_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorActorInterface;

// ********** End Interface UMetaHumanCharacterEditorActorInterface ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPaletteEditor_Public_MetaHumanCharacterEditorActorInterface_h

// ********** Begin Enum EMetaHumanHairVisibilityState *********************************************
#define FOREACH_ENUM_EMETAHUMANHAIRVISIBILITYSTATE(op) \
	op(EMetaHumanHairVisibilityState::Shown) \
	op(EMetaHumanHairVisibilityState::Hidden) 

enum class EMetaHumanHairVisibilityState : uint8;
template<> struct TIsUEnumClass<EMetaHumanHairVisibilityState> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanHairVisibilityState>();
// ********** End Enum EMetaHumanHairVisibilityState ***********************************************

// ********** Begin Enum EMetaHumanClothingVisibilityState *****************************************
#define FOREACH_ENUM_EMETAHUMANCLOTHINGVISIBILITYSTATE(op) \
	op(EMetaHumanClothingVisibilityState::Shown) \
	op(EMetaHumanClothingVisibilityState::UseOverrideMaterial) \
	op(EMetaHumanClothingVisibilityState::Hidden) 

enum class EMetaHumanClothingVisibilityState : uint8;
template<> struct TIsUEnumClass<EMetaHumanClothingVisibilityState> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanClothingVisibilityState>();
// ********** End Enum EMetaHumanClothingVisibilityState *******************************************

// ********** Begin Enum EMetaHumanActorDrivingAnimationMode ***************************************
#define FOREACH_ENUM_EMETAHUMANACTORDRIVINGANIMATIONMODE(op) \
	op(EMetaHumanActorDrivingAnimationMode::FromRetargetSource) \
	op(EMetaHumanActorDrivingAnimationMode::Manual) 

enum class EMetaHumanActorDrivingAnimationMode : uint8;
template<> struct TIsUEnumClass<EMetaHumanActorDrivingAnimationMode> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanActorDrivingAnimationMode>();
// ********** End Enum EMetaHumanActorDrivingAnimationMode *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
