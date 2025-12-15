// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Font.h"

#ifdef ENGINE_Font_generated_h
#error "Font.generated.h already included, missing '#pragma once' in Font.h"
#endif
#define ENGINE_Font_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFontCharacter ****************************************************
struct Z_Construct_UScriptStruct_FFontCharacter_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFontCharacter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FFontCharacter;
// ********** End ScriptStruct FFontCharacter ******************************************************

// ********** Begin Class UFont ********************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_112_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFont, ENGINE_API)


struct Z_Construct_UClass_UFont_Statics;
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUFont(); \
	friend struct ::Z_Construct_UClass_UFont_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UFont_NoRegister(); \
public: \
	DECLARE_CLASS2(UFont, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UFont_NoRegister) \
	DECLARE_SERIALIZER(UFont) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_112_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFont*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFont(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFont) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFont); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFont); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFont(UFont&&) = delete; \
	UFont(const UFont&) = delete; \
	ENGINE_API virtual ~UFont();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_109_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_112_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFont;

// ********** End Class UFont **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h

// ********** Begin Enum EFontCacheType ************************************************************
#define FOREACH_ENUM_EFONTCACHETYPE(op) \
	op(EFontCacheType::Offline) \
	op(EFontCacheType::Runtime) 

enum class EFontCacheType : uint8;
template<> struct TIsUEnumClass<EFontCacheType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFontCacheType>();
// ********** End Enum EFontCacheType **************************************************************

// ********** Begin Enum ERuntimeFontSource ********************************************************
#define FOREACH_ENUM_ERUNTIMEFONTSOURCE(op) \
	op(ERuntimeFontSource::Asset) \
	op(ERuntimeFontSource::CoreStyleDefault) 

enum class ERuntimeFontSource : uint8;
template<> struct TIsUEnumClass<ERuntimeFontSource> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERuntimeFontSource>();
// ********** End Enum ERuntimeFontSource **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
