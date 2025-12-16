// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveTableBankFactory.h"

#ifdef WAVETABLEEDITOR_WaveTableBankFactory_generated_h
#error "WaveTableBankFactory.generated.h already included, missing '#pragma once' in WaveTableBankFactory.h"
#endif
#define WAVETABLEEDITOR_WaveTableBankFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaveTableBankFactory ****************************************************
struct Z_Construct_UClass_UWaveTableBankFactory_Statics;
WAVETABLEEDITOR_API UClass* Z_Construct_UClass_UWaveTableBankFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUWaveTableBankFactory(); \
	friend struct ::Z_Construct_UClass_UWaveTableBankFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVETABLEEDITOR_API UClass* ::Z_Construct_UClass_UWaveTableBankFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveTableBankFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveTableEditor"), Z_Construct_UClass_UWaveTableBankFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaveTableBankFactory)


#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WAVETABLEEDITOR_API UWaveTableBankFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveTableBankFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WAVETABLEEDITOR_API, UWaveTableBankFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveTableBankFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveTableBankFactory(UWaveTableBankFactory&&) = delete; \
	UWaveTableBankFactory(const UWaveTableBankFactory&) = delete; \
	WAVETABLEEDITOR_API virtual ~UWaveTableBankFactory();


#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_12_INCLASS \
	FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveTableBankFactory;

// ********** End Class UWaveTableBankFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
