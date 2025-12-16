// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundParameterPack.h"

#ifdef METASOUNDFRONTEND_MetasoundParameterPack_generated_h
#error "MetasoundParameterPack.generated.h already included, missing '#pragma once' in MetasoundParameterPack.h"
#endif
#define METASOUNDFRONTEND_MetasoundParameterPack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetasoundParameterPack;
enum class ESetParamResult : uint8;

// ********** Begin Class UMetasoundParameterPack **************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_264_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasTrigger); \
	DECLARE_FUNCTION(execHasString); \
	DECLARE_FUNCTION(execHasFloat); \
	DECLARE_FUNCTION(execHasInt); \
	DECLARE_FUNCTION(execHasBool); \
	DECLARE_FUNCTION(execGetTrigger); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execSetTrigger); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetInt); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execMakeMetasoundParameterPack);


struct Z_Construct_UClass_UMetasoundParameterPack_Statics;
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetasoundParameterPack_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_264_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundParameterPack(); \
	friend struct ::Z_Construct_UClass_UMetasoundParameterPack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDFRONTEND_API UClass* ::Z_Construct_UClass_UMetasoundParameterPack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundParameterPack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundFrontend"), Z_Construct_UClass_UMetasoundParameterPack_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundParameterPack)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_264_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDFRONTEND_API UMetasoundParameterPack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundParameterPack(UMetasoundParameterPack&&) = delete; \
	UMetasoundParameterPack(const UMetasoundParameterPack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDFRONTEND_API, UMetasoundParameterPack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundParameterPack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundParameterPack) \
	METASOUNDFRONTEND_API virtual ~UMetasoundParameterPack();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_261_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_264_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_264_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_264_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_264_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundParameterPack;

// ********** End Class UMetasoundParameterPack ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h

// ********** Begin Enum ESetParamResult ***********************************************************
#define FOREACH_ENUM_ESETPARAMRESULT(op) \
	op(ESetParamResult::Succeeded) \
	op(ESetParamResult::Failed) 

enum class ESetParamResult : uint8;
template<> struct TIsUEnumClass<ESetParamResult> { enum { Value = true }; };
template<> METASOUNDFRONTEND_NON_ATTRIBUTED_API UEnum* StaticEnum<ESetParamResult>();
// ********** End Enum ESetParamResult *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
