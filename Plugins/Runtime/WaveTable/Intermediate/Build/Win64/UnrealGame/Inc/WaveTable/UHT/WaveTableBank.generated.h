// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveTableBank.h"

#ifdef WAVETABLE_WaveTableBank_generated_h
#error "WaveTableBank.generated.h already included, missing '#pragma once' in WaveTableBank.h"
#endif
#define WAVETABLE_WaveTableBank_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWaveTableBankEntry ***********************************************
struct Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics;
#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics; \
	WAVETABLE_API static class UScriptStruct* StaticStruct();


struct FWaveTableBankEntry;
// ********** End ScriptStruct FWaveTableBankEntry *************************************************

// ********** Begin Class UWaveTableBank ***********************************************************
#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWaveTableBank, WAVETABLE_API)


struct Z_Construct_UClass_UWaveTableBank_Statics;
WAVETABLE_API UClass* Z_Construct_UClass_UWaveTableBank_NoRegister();

#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveTableBank(); \
	friend struct ::Z_Construct_UClass_UWaveTableBank_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVETABLE_API UClass* ::Z_Construct_UClass_UWaveTableBank_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveTableBank, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveTable"), Z_Construct_UClass_UWaveTableBank_NoRegister) \
	DECLARE_SERIALIZER(UWaveTableBank) \
	FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_32_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WAVETABLE_API UWaveTableBank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveTableBank(UWaveTableBank&&) = delete; \
	UWaveTableBank(const UWaveTableBank&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WAVETABLE_API, UWaveTableBank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveTableBank); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveTableBank) \
	WAVETABLE_API virtual ~UWaveTableBank();


#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveTableBank;

// ********** End Class UWaveTableBank *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
