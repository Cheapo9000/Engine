// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphAttributes.h"

#ifdef ANIMGRAPH_AnimGraphAttributes_generated_h
#error "AnimGraphAttributes.generated.h already included, missing '#pragma once' in AnimGraphAttributes.h"
#endif
#define ANIMGRAPH_AnimGraphAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimGraphAttributeDesc *******************************************
struct Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics;
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimGraphAttributeDesc_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct();


struct FAnimGraphAttributeDesc;
// ********** End ScriptStruct FAnimGraphAttributeDesc *********************************************

// ********** Begin Class UAnimGraphAttributes *****************************************************
struct Z_Construct_UClass_UAnimGraphAttributes_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphAttributes_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphAttributes(); \
	friend struct ::Z_Construct_UClass_UAnimGraphAttributes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphAttributes_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphAttributes, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphAttributes_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphAttributes) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphAttributes(UAnimGraphAttributes&&) = delete; \
	UAnimGraphAttributes(const UAnimGraphAttributes&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphAttributes) \
	ANIMGRAPH_API virtual ~UAnimGraphAttributes();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_94_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphAttributes;

// ********** End Class UAnimGraphAttributes *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphAttributes_h

// ********** Begin Enum EAnimGraphAttributesDisplayMode *******************************************
#define FOREACH_ENUM_EANIMGRAPHATTRIBUTESDISPLAYMODE(op) \
	op(EAnimGraphAttributesDisplayMode::HideOnPins) \
	op(EAnimGraphAttributesDisplayMode::ShowOnPins) \
	op(EAnimGraphAttributesDisplayMode::Automatic) 

enum class EAnimGraphAttributesDisplayMode;
template<> struct TIsUEnumClass<EAnimGraphAttributesDisplayMode> { enum { Value = true }; };
template<> ANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimGraphAttributesDisplayMode>();
// ********** End Enum EAnimGraphAttributesDisplayMode *********************************************

// ********** Begin Enum EAnimGraphAttributeBlend **************************************************
#define FOREACH_ENUM_EANIMGRAPHATTRIBUTEBLEND(op) \
	op(EAnimGraphAttributeBlend::Blendable) \
	op(EAnimGraphAttributeBlend::NonBlendable) 

enum class EAnimGraphAttributeBlend;
template<> struct TIsUEnumClass<EAnimGraphAttributeBlend> { enum { Value = true }; };
template<> ANIMGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimGraphAttributeBlend>();
// ********** End Enum EAnimGraphAttributeBlend ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
