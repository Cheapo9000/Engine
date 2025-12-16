// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundFrontendDocumentBuilder.h"

#ifdef METASOUNDFRONTEND_MetasoundFrontendDocumentBuilder_generated_h
#error "MetasoundFrontendDocumentBuilder.generated.h already included, missing '#pragma once' in MetasoundFrontendDocumentBuilder.h"
#endif
#define METASOUNDFRONTEND_MetasoundFrontendDocumentBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaSoundBuilderDocument ************************************************
struct Z_Construct_UClass_UMetaSoundBuilderDocument_Statics;
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundBuilderDocument(); \
	friend struct ::Z_Construct_UClass_UMetaSoundBuilderDocument_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDFRONTEND_API UClass* ::Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundBuilderDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundFrontend"), Z_Construct_UClass_UMetaSoundBuilderDocument_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundBuilderDocument) \
	virtual UObject* _getUObject() const override { return const_cast<UMetaSoundBuilderDocument*>(this); }


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_121_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundBuilderDocument(UMetaSoundBuilderDocument&&) = delete; \
	UMetaSoundBuilderDocument(const UMetaSoundBuilderDocument&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDFRONTEND_API, UMetaSoundBuilderDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundBuilderDocument); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundBuilderDocument) \
	METASOUNDFRONTEND_API virtual ~UMetaSoundBuilderDocument();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_118_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_121_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundBuilderDocument;

// ********** End Class UMetaSoundBuilderDocument **************************************************

// ********** Begin ScriptStruct FMetaSoundFrontendDocumentBuilder *********************************
struct Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h_175_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundFrontendDocumentBuilder_Statics; \
	METASOUNDFRONTEND_API static class UScriptStruct* StaticStruct();


struct FMetaSoundFrontendDocumentBuilder;
// ********** End ScriptStruct FMetaSoundFrontendDocumentBuilder ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendDocumentBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
