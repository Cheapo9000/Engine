// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeORTSettings.h"

#ifdef NNERUNTIMEORT_NNERuntimeORTSettings_generated_h
#error "NNERuntimeORTSettings.generated.h already included, missing '#pragma once' in NNERuntimeORTSettings.h"
#endif
#define NNERUNTIMEORT_NNERuntimeORTSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FThreadingOptions *************************************************
struct Z_Construct_UScriptStruct_FThreadingOptions_Statics;
#define FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FThreadingOptions_Statics; \
	NNERUNTIMEORT_API static class UScriptStruct* StaticStruct();


struct FThreadingOptions;
// ********** End ScriptStruct FThreadingOptions ***************************************************

// ********** Begin Class UNNERuntimeORTSettings ***************************************************
struct Z_Construct_UClass_UNNERuntimeORTSettings_Statics;
NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTSettings_NoRegister();

#define FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNERuntimeORTSettings(); \
	friend struct ::Z_Construct_UClass_UNNERuntimeORTSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NNERUNTIMEORT_API UClass* ::Z_Construct_UClass_UNNERuntimeORTSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNNERuntimeORTSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NNERuntimeORT"), Z_Construct_UClass_UNNERuntimeORTSettings_NoRegister) \
	DECLARE_SERIALIZER(UNNERuntimeORTSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNNERuntimeORTSettings(UNNERuntimeORTSettings&&) = delete; \
	UNNERuntimeORTSettings(const UNNERuntimeORTSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNERuntimeORTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntimeORTSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntimeORTSettings) \
	NO_API virtual ~UNNERuntimeORTSettings();


#define FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_49_PROLOG
#define FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNNERuntimeORTSettings;

// ********** End Class UNNERuntimeORTSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h

// ********** Begin Enum EExecutionMode ************************************************************
#define FOREACH_ENUM_EEXECUTIONMODE(op) \
	op(SEQUENTIAL) \
	op(PARALLEL) 

enum EExecutionMode : uint8;
template<> NNERUNTIMEORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EExecutionMode>();
// ********** End Enum EExecutionMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
