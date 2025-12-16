// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Filter/TG_Expression_ErodeDilate.h"

#ifdef TEXTUREGRAPH_TG_Expression_ErodeDilate_generated_h
#error "TG_Expression_ErodeDilate.generated.h already included, missing '#pragma once' in TG_Expression_ErodeDilate.h"
#endif
#define TEXTUREGRAPH_TG_Expression_ErodeDilate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_ErodeDilate ***********************************************
struct Z_Construct_UClass_UTG_Expression_ErodeDilate_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_ErodeDilate_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_ErodeDilate_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_ErodeDilate(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_ErodeDilate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_ErodeDilate_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_ErodeDilate, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_ErodeDilate_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_ErodeDilate)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_ErodeDilate_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_ErodeDilate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_ErodeDilate(UTG_Expression_ErodeDilate&&) = delete; \
	UTG_Expression_ErodeDilate(const UTG_Expression_ErodeDilate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_ErodeDilate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_ErodeDilate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_ErodeDilate) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_ErodeDilate();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_ErodeDilate_h_39_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_ErodeDilate_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_ErodeDilate_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_ErodeDilate_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_ErodeDilate;

// ********** End Class UTG_Expression_ErodeDilate *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Filter_TG_Expression_ErodeDilate_h

// ********** Begin Enum EErodeOrDilate ************************************************************
#define FOREACH_ENUM_EERODEORDILATE(op) \
	op(EErodeOrDilate::Erode) \
	op(EErodeOrDilate::Dilate) 

enum class EErodeOrDilate : uint8;
template<> struct TIsUEnumClass<EErodeOrDilate> { enum { Value = true }; };
template<> TEXTUREGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EErodeOrDilate>();
// ********** End Enum EErodeOrDilate **************************************************************

// ********** Begin Enum EErodeDilateKernelType ****************************************************
#define FOREACH_ENUM_EERODEDILATEKERNELTYPE(op) \
	op(EErodeDilateKernelType::Box) \
	op(EErodeDilateKernelType::Circular) \
	op(EErodeDilateKernelType::Diamond) 

enum class EErodeDilateKernelType : uint8;
template<> struct TIsUEnumClass<EErodeDilateKernelType> { enum { Value = true }; };
template<> TEXTUREGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EErodeDilateKernelType>();
// ********** End Enum EErodeDilateKernelType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
