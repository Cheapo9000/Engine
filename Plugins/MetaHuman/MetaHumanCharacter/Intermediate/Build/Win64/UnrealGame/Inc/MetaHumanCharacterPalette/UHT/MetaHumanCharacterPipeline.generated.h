// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterPipeline.h"

#ifdef METAHUMANCHARACTERPALETTE_MetaHumanCharacterPipeline_generated_h
#error "MetaHumanCharacterPipeline.generated.h already included, missing '#pragma once' in MetaHumanCharacterPipeline.h"
#endif
#define METAHUMANCHARACTERPALETTE_MetaHumanCharacterPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanGeneratedAssetMetadata **********************************
struct Z_Construct_UScriptStruct_FMetaHumanGeneratedAssetMetadata_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanGeneratedAssetMetadata_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanGeneratedAssetMetadata;
// ********** End ScriptStruct FMetaHumanGeneratedAssetMetadata ************************************

// ********** Begin ScriptStruct FMetaHumanInstanceParameterOutput *********************************
struct Z_Construct_UScriptStruct_FMetaHumanInstanceParameterOutput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanInstanceParameterOutput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanInstanceParameterOutput;
// ********** End ScriptStruct FMetaHumanInstanceParameterOutput ***********************************

// ********** Begin ScriptStruct FMetaHumanAssemblyOutput ******************************************
struct Z_Construct_UScriptStruct_FMetaHumanAssemblyOutput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanAssemblyOutput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanAssemblyOutput;
// ********** End ScriptStruct FMetaHumanAssemblyOutput ********************************************

// ********** Begin Class UMetaHumanCharacterPipeline **********************************************
struct Z_Construct_UClass_UMetaHumanCharacterPipeline_Statics;
METAHUMANCHARACTERPALETTE_API UClass* Z_Construct_UClass_UMetaHumanCharacterPipeline_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterPipeline(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTE_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterPipeline, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPalette"), Z_Construct_UClass_UMetaHumanCharacterPipeline_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterPipeline)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANCHARACTERPALETTE_API UMetaHumanCharacterPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterPipeline(UMetaHumanCharacterPipeline&&) = delete; \
	UMetaHumanCharacterPipeline(const UMetaHumanCharacterPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANCHARACTERPALETTE_API, UMetaHumanCharacterPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterPipeline); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterPipeline) \
	METAHUMANCHARACTERPALETTE_API virtual ~UMetaHumanCharacterPipeline();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h_154_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterPipeline;

// ********** End Class UMetaHumanCharacterPipeline ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterPipeline_h

// ********** Begin Enum EMetaHumanCharacterPaletteBuildQuality ************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERPALETTEBUILDQUALITY(op) \
	op(EMetaHumanCharacterPaletteBuildQuality::Production) \
	op(EMetaHumanCharacterPaletteBuildQuality::Preview) 

enum class EMetaHumanCharacterPaletteBuildQuality : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterPaletteBuildQuality> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterPaletteBuildQuality>();
// ********** End Enum EMetaHumanCharacterPaletteBuildQuality **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
