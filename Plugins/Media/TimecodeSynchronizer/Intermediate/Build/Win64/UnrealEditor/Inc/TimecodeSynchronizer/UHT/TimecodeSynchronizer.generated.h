// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimecodeSynchronizer.h"

#ifdef TIMECODESYNCHRONIZER_TimecodeSynchronizer_generated_h
#error "TimecodeSynchronizer.generated.h already included, missing '#pragma once' in TimecodeSynchronizer.h"
#endif
#define TIMECODESYNCHRONIZER_TimecodeSynchronizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTimecodeSynchronizerActiveTimecodedInputSource *******************
struct Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics;
#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics; \
	TIMECODESYNCHRONIZER_API static class UScriptStruct* StaticStruct();


struct FTimecodeSynchronizerActiveTimecodedInputSource;
// ********** End ScriptStruct FTimecodeSynchronizerActiveTimecodedInputSource *********************

// ********** Begin Class UTimecodeSynchronizer ****************************************************
struct Z_Construct_UClass_UTimecodeSynchronizer_Statics;
TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizer_NoRegister();

#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_261_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimecodeSynchronizer(); \
	friend struct ::Z_Construct_UClass_UTimecodeSynchronizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMECODESYNCHRONIZER_API UClass* ::Z_Construct_UClass_UTimecodeSynchronizer_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimecodeSynchronizer, UTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimecodeSynchronizer"), Z_Construct_UClass_UTimecodeSynchronizer_NoRegister) \
	DECLARE_SERIALIZER(UTimecodeSynchronizer)


#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_261_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimecodeSynchronizer(UTimecodeSynchronizer&&) = delete; \
	UTimecodeSynchronizer(const UTimecodeSynchronizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimecodeSynchronizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimecodeSynchronizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimecodeSynchronizer) \
	NO_API virtual ~UTimecodeSynchronizer();


#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_258_PROLOG
#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_261_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_261_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_261_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimecodeSynchronizer;

// ********** End Class UTimecodeSynchronizer ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h

// ********** Begin Enum ETimecodeSynchronizationSyncMode ******************************************
#define FOREACH_ENUM_ETIMECODESYNCHRONIZATIONSYNCMODE(op) \
	op(ETimecodeSynchronizationSyncMode::UserDefinedOffset) \
	op(ETimecodeSynchronizationSyncMode::Auto) \
	op(ETimecodeSynchronizationSyncMode::AutoOldest) 

enum class ETimecodeSynchronizationSyncMode;
template<> struct TIsUEnumClass<ETimecodeSynchronizationSyncMode> { enum { Value = true }; };
template<> TIMECODESYNCHRONIZER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimecodeSynchronizationSyncMode>();
// ********** End Enum ETimecodeSynchronizationSyncMode ********************************************

// ********** Begin Enum ETimecodeSynchronizationTimecodeType **************************************
#define FOREACH_ENUM_ETIMECODESYNCHRONIZATIONTIMECODETYPE(op) \
	op(ETimecodeSynchronizationTimecodeType::DefaultProvider) \
	op(ETimecodeSynchronizationTimecodeType::TimecodeProvider) \
	op(ETimecodeSynchronizationTimecodeType::InputSource) 

enum class ETimecodeSynchronizationTimecodeType;
template<> struct TIsUEnumClass<ETimecodeSynchronizationTimecodeType> { enum { Value = true }; };
template<> TIMECODESYNCHRONIZER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimecodeSynchronizationTimecodeType>();
// ********** End Enum ETimecodeSynchronizationTimecodeType ****************************************

// ********** Begin Enum ETimecodeSynchronizationFrameRateSources **********************************
#define FOREACH_ENUM_ETIMECODESYNCHRONIZATIONFRAMERATESOURCES(op) \
	op(ETimecodeSynchronizationFrameRateSources::EngineCustomTimeStepFrameRate) \
	op(ETimecodeSynchronizationFrameRateSources::CustomFrameRate) 

enum class ETimecodeSynchronizationFrameRateSources : uint8;
template<> struct TIsUEnumClass<ETimecodeSynchronizationFrameRateSources> { enum { Value = true }; };
template<> TIMECODESYNCHRONIZER_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimecodeSynchronizationFrameRateSources>();
// ********** End Enum ETimecodeSynchronizationFrameRateSources ************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
