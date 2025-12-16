// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterViewport.h"

#ifdef METAHUMANCHARACTER_MetaHumanCharacterViewport_generated_h
#error "MetaHumanCharacterViewport.generated.h already included, missing '#pragma once' in MetaHumanCharacterViewport.h"
#endif
#define METAHUMANCHARACTER_MetaHumanCharacterViewport_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCharacterViewportSettings *******************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterViewportSettings_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterViewport_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterViewportSettings_Statics; \
	METAHUMANCHARACTER_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterViewportSettings;
// ********** End ScriptStruct FMetaHumanCharacterViewportSettings *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacter_Public_MetaHumanCharacterViewport_h

// ********** Begin Enum EMetaHumanCharacterEnvironment ********************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERENVIRONMENT(op) \
	op(EMetaHumanCharacterEnvironment::Studio) \
	op(EMetaHumanCharacterEnvironment::Split) \
	op(EMetaHumanCharacterEnvironment::Fireside) \
	op(EMetaHumanCharacterEnvironment::Moonlight) \
	op(EMetaHumanCharacterEnvironment::Tungsten) \
	op(EMetaHumanCharacterEnvironment::Portrait) \
	op(EMetaHumanCharacterEnvironment::RedLantern) \
	op(EMetaHumanCharacterEnvironment::TextureBooth) \
	op(EMetaHumanCharacterEnvironment::Count) 

enum class EMetaHumanCharacterEnvironment : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterEnvironment> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterEnvironment>();
// ********** End Enum EMetaHumanCharacterEnvironment **********************************************

// ********** Begin Enum EMetaHumanCharacterLOD ****************************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERLOD(op) \
	op(EMetaHumanCharacterLOD::LOD0) \
	op(EMetaHumanCharacterLOD::LOD1) \
	op(EMetaHumanCharacterLOD::LOD2) \
	op(EMetaHumanCharacterLOD::LOD3) \
	op(EMetaHumanCharacterLOD::LOD4) \
	op(EMetaHumanCharacterLOD::LOD5) \
	op(EMetaHumanCharacterLOD::LOD6) \
	op(EMetaHumanCharacterLOD::LOD7) \
	op(EMetaHumanCharacterLOD::Auto) \
	op(EMetaHumanCharacterLOD::Count) 

enum class EMetaHumanCharacterLOD : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterLOD> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterLOD>();
// ********** End Enum EMetaHumanCharacterLOD ******************************************************

// ********** Begin Enum EMetaHumanCharacterCameraFrame ********************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERCAMERAFRAME(op) \
	op(EMetaHumanCharacterCameraFrame::Auto) \
	op(EMetaHumanCharacterCameraFrame::Face) \
	op(EMetaHumanCharacterCameraFrame::Body) \
	op(EMetaHumanCharacterCameraFrame::Far) \
	op(EMetaHumanCharacterCameraFrame::Count) 

enum class EMetaHumanCharacterCameraFrame : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterCameraFrame> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterCameraFrame>();
// ********** End Enum EMetaHumanCharacterCameraFrame **********************************************

// ********** Begin Enum EMetaHumanCharacterRenderingQuality ***************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERRENDERINGQUALITY(op) \
	op(EMetaHumanCharacterRenderingQuality::Medium) \
	op(EMetaHumanCharacterRenderingQuality::High) \
	op(EMetaHumanCharacterRenderingQuality::Epic) \
	op(EMetaHumanCharacterRenderingQuality::Count) 

enum class EMetaHumanCharacterRenderingQuality : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterRenderingQuality> { enum { Value = true }; };
template<> METAHUMANCHARACTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterRenderingQuality>();
// ********** End Enum EMetaHumanCharacterRenderingQuality *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
