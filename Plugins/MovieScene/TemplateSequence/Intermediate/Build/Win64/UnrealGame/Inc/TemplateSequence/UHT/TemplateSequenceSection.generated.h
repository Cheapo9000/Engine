// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/TemplateSequenceSection.h"

#ifdef TEMPLATESEQUENCE_TemplateSequenceSection_generated_h
#error "TemplateSequenceSection.generated.h already included, missing '#pragma once' in TemplateSequenceSection.h"
#endif
#define TEMPLATESEQUENCE_TemplateSequenceSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTemplateSectionPropertyScale *************************************
struct Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics;
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics; \
	TEMPLATESEQUENCE_API static class UScriptStruct* StaticStruct();


struct FTemplateSectionPropertyScale;
// ********** End ScriptStruct FTemplateSectionPropertyScale ***************************************

// ********** Begin Class UTemplateSequenceSection *************************************************
struct Z_Construct_UClass_UTemplateSequenceSection_Statics;
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSection_NoRegister();

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateSequenceSection(); \
	friend struct ::Z_Construct_UClass_UTemplateSequenceSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMPLATESEQUENCE_API UClass* ::Z_Construct_UClass_UTemplateSequenceSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UTemplateSequenceSection, UMovieSceneSubSection, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TemplateSequence"), Z_Construct_UClass_UTemplateSequenceSection_NoRegister) \
	DECLARE_SERIALIZER(UTemplateSequenceSection)


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTemplateSequenceSection(UTemplateSequenceSection&&) = delete; \
	UTemplateSequenceSection(const UTemplateSequenceSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMPLATESEQUENCE_API, UTemplateSequenceSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateSequenceSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateSequenceSection) \
	TEMPLATESEQUENCE_API virtual ~UTemplateSequenceSection();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_52_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_58_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTemplateSequenceSection;

// ********** End Class UTemplateSequenceSection ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h

// ********** Begin Enum ETemplateSectionPropertyScaleType *****************************************
#define FOREACH_ENUM_ETEMPLATESECTIONPROPERTYSCALETYPE(op) \
	op(ETemplateSectionPropertyScaleType::FloatProperty) \
	op(ETemplateSectionPropertyScaleType::TransformPropertyLocationOnly) \
	op(ETemplateSectionPropertyScaleType::TransformPropertyRotationOnly) 

enum class ETemplateSectionPropertyScaleType;
template<> struct TIsUEnumClass<ETemplateSectionPropertyScaleType> { enum { Value = true }; };
template<> TEMPLATESEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETemplateSectionPropertyScaleType>();
// ********** End Enum ETemplateSectionPropertyScaleType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
