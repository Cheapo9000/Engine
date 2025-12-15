// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceProjectSettings.h"

#ifdef LEVELSEQUENCE_LevelSequenceProjectSettings_generated_h
#error "LevelSequenceProjectSettings.generated.h already included, missing '#pragma once' in LevelSequenceProjectSettings.h"
#endif
#define LEVELSEQUENCE_LevelSequenceProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelSequenceProjectSettings ********************************************
struct Z_Construct_UClass_ULevelSequenceProjectSettings_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceProjectSettings(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceProjectSettings(ULevelSequenceProjectSettings&&) = delete; \
	ULevelSequenceProjectSettings(const ULevelSequenceProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequenceProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelSequenceProjectSettings) \
	LEVELSEQUENCE_API virtual ~ULevelSequenceProjectSettings();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h_15_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceProjectSettings;

// ********** End Class ULevelSequenceProjectSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
