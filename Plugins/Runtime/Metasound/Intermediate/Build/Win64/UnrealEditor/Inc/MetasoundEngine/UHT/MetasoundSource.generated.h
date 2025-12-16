// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundSource.h"

#ifdef METASOUNDENGINE_MetasoundSource_generated_h
#error "MetasoundSource.generated.h already included, missing '#pragma once' in MetasoundSource.h"
#endif
#define METASOUNDENGINE_MetasoundSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaSoundSource *********************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_90_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaSoundSource, METASOUNDENGINE_API)


struct Z_Construct_UClass_UMetaSoundSource_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSource_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundSource(); \
	friend struct ::Z_Construct_UClass_UMetaSoundSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundSource, USoundWaveProcedural, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundSource_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundSource) \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_90_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMetaSoundSource*>(this); }


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_90_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundSource(UMetaSoundSource&&) = delete; \
	UMetaSoundSource(const UMetaSoundSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSource) \
	METASOUNDENGINE_API virtual ~UMetaSoundSource();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_87_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundSource;

// ********** End Class UMetaSoundSource ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
