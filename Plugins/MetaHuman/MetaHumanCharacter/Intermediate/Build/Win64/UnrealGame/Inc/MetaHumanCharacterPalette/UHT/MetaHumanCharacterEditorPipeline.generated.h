// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterEditorPipeline.h"

#ifdef METAHUMANCHARACTERPALETTE_MetaHumanCharacterEditorPipeline_generated_h
#error "MetaHumanCharacterEditorPipeline.generated.h already included, missing '#pragma once' in MetaHumanCharacterEditorPipeline.h"
#endif
#define METAHUMANCHARACTERPALETTE_MetaHumanCharacterEditorPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaHumanCharacterEditorPipeline ****************************************
struct Z_Construct_UClass_UMetaHumanCharacterEditorPipeline_Statics;
METAHUMANCHARACTERPALETTE_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorPipeline_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterEditorPipeline_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorPipeline(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTE_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorPipeline, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPalette"), Z_Construct_UClass_UMetaHumanCharacterEditorPipeline_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorPipeline)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterEditorPipeline_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANCHARACTERPALETTE_API UMetaHumanCharacterEditorPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorPipeline(UMetaHumanCharacterEditorPipeline&&) = delete; \
	UMetaHumanCharacterEditorPipeline(const UMetaHumanCharacterEditorPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANCHARACTERPALETTE_API, UMetaHumanCharacterEditorPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorPipeline); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorPipeline) \
	METAHUMANCHARACTERPALETTE_API virtual ~UMetaHumanCharacterEditorPipeline();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterEditorPipeline_h_42_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterEditorPipeline_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterEditorPipeline_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterEditorPipeline_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorPipeline;

// ********** End Class UMetaHumanCharacterEditorPipeline ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterEditorPipeline_h

// ********** Begin Enum EMetaHumanBuildStatus *****************************************************
#define FOREACH_ENUM_EMETAHUMANBUILDSTATUS(op) \
	op(EMetaHumanBuildStatus::Succeeded) \
	op(EMetaHumanBuildStatus::Failed) 

enum class EMetaHumanBuildStatus : uint8;
template<> struct TIsUEnumClass<EMetaHumanBuildStatus> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanBuildStatus>();
// ********** End Enum EMetaHumanBuildStatus *******************************************************

// ********** Begin Enum EMetaHumanPipelineDisplayCategory *****************************************
#define FOREACH_ENUM_EMETAHUMANPIPELINEDISPLAYCATEGORY(op) \
	op(EMetaHumanPipelineDisplayCategory::Advanced) \
	op(EMetaHumanPipelineDisplayCategory::Targets) \
	op(EMetaHumanPipelineDisplayCategory::Textures) 

enum class EMetaHumanPipelineDisplayCategory : uint8;
template<> struct TIsUEnumClass<EMetaHumanPipelineDisplayCategory> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanPipelineDisplayCategory>();
// ********** End Enum EMetaHumanPipelineDisplayCategory *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
