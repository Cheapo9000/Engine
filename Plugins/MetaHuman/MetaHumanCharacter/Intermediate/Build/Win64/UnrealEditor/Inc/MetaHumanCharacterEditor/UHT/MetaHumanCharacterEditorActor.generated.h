// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterEditorActor.h"

#ifdef METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorActor_generated_h
#error "MetaHumanCharacterEditorActor.generated.h already included, missing '#pragma once' in MetaHumanCharacterEditorActor.h"
#endif
#define METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
enum class EMetaHumanClothingVisibilityState : uint8;
enum class EMetaHumanHairVisibilityState : uint8;

// ********** Begin Class AMetaHumanCharacterEditorActor *******************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorActor_h_24_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AMetaHumanCharacterEditorActor_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_AMetaHumanCharacterEditorActor_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMetaHumanCharacterEditorActor(); \
	friend struct ::Z_Construct_UClass_AMetaHumanCharacterEditorActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_AMetaHumanCharacterEditorActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMetaHumanCharacterEditorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_AMetaHumanCharacterEditorActor_NoRegister) \
	DECLARE_SERIALIZER(AMetaHumanCharacterEditorActor) \
	virtual UObject* _getUObject() const override { return const_cast<AMetaHumanCharacterEditorActor*>(this); }


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorActor_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMetaHumanCharacterEditorActor(AMetaHumanCharacterEditorActor&&) = delete; \
	AMetaHumanCharacterEditorActor(const AMetaHumanCharacterEditorActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMetaHumanCharacterEditorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMetaHumanCharacterEditorActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMetaHumanCharacterEditorActor) \
	NO_API virtual ~AMetaHumanCharacterEditorActor();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorActor_h_21_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorActor_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorActor_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMetaHumanCharacterEditorActor;

// ********** End Class AMetaHumanCharacterEditorActor *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
