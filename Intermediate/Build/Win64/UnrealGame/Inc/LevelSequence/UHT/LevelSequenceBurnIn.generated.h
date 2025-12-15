// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceBurnIn.h"

#ifdef LEVELSEQUENCE_LevelSequenceBurnIn_generated_h
#error "LevelSequenceBurnIn.generated.h already included, missing '#pragma once' in LevelSequenceBurnIn.h"
#endif
#define LEVELSEQUENCE_LevelSequenceBurnIn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULevelSequenceBurnInInitSettings;
class UObject;

// ********** Begin Class ULevelSequenceBurnIn *****************************************************
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSettingsClass);


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULevelSequenceBurnIn_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceBurnIn(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceBurnIn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceBurnIn, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceBurnIn)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceBurnIn(ULevelSequenceBurnIn&&) = delete; \
	ULevelSequenceBurnIn(const ULevelSequenceBurnIn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequenceBurnIn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceBurnIn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceBurnIn) \
	LEVELSEQUENCE_API virtual ~ULevelSequenceBurnIn();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_16_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceBurnIn;

// ********** End Class ULevelSequenceBurnIn *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
