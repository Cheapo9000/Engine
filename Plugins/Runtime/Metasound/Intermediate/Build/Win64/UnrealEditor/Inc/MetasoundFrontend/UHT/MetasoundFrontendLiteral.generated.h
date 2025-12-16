// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundFrontendLiteral.h"

#ifdef METASOUNDFRONTEND_MetasoundFrontendLiteral_generated_h
#error "MetasoundFrontendLiteral.generated.h already included, missing '#pragma once' in MetasoundFrontendLiteral.h"
#endif
#define METASOUNDFRONTEND_MetasoundFrontendLiteral_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetasoundFrontendLiteral *****************************************
struct Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics; \
	METASOUNDFRONTEND_API static class UScriptStruct* StaticStruct();


struct FMetasoundFrontendLiteral;
// ********** End ScriptStruct FMetasoundFrontendLiteral *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h

// ********** Begin Enum EMetasoundFrontendLiteralType *********************************************
#define FOREACH_ENUM_EMETASOUNDFRONTENDLITERALTYPE(op) \
	op(EMetasoundFrontendLiteralType::None) \
	op(EMetasoundFrontendLiteralType::Boolean) \
	op(EMetasoundFrontendLiteralType::Integer) \
	op(EMetasoundFrontendLiteralType::Float) \
	op(EMetasoundFrontendLiteralType::String) \
	op(EMetasoundFrontendLiteralType::UObject) \
	op(EMetasoundFrontendLiteralType::NoneArray) \
	op(EMetasoundFrontendLiteralType::BooleanArray) \
	op(EMetasoundFrontendLiteralType::IntegerArray) \
	op(EMetasoundFrontendLiteralType::FloatArray) \
	op(EMetasoundFrontendLiteralType::StringArray) \
	op(EMetasoundFrontendLiteralType::UObjectArray) \
	op(EMetasoundFrontendLiteralType::Invalid) 

enum class EMetasoundFrontendLiteralType : uint8;
template<> struct TIsUEnumClass<EMetasoundFrontendLiteralType> { enum { Value = true }; };
template<> METASOUNDFRONTEND_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetasoundFrontendLiteralType>();
// ********** End Enum EMetasoundFrontendLiteralType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
