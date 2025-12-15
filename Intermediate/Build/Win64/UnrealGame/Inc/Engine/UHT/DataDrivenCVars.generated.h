// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataDrivenCVars/DataDrivenCVars.h"

#ifdef ENGINE_DataDrivenCVars_generated_h
#error "DataDrivenCVars.generated.h already included, missing '#pragma once' in DataDrivenCVars.h"
#endif
#define ENGINE_DataDrivenCVars_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnDataDrivenCVarChanged **********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_26_DELEGATE \
static ENGINE_API void FOnDataDrivenCVarChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDataDrivenCVarChanged, const FString& CVarName);


// ********** End Delegate FOnDataDrivenCVarChanged ************************************************

// ********** Begin Class UDataDrivenCVarEngineSubsystem *******************************************
struct Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataDrivenCVarEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataDrivenCVarEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDataDrivenCVarEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataDrivenCVarEngineSubsystem(UDataDrivenCVarEngineSubsystem&&) = delete; \
	UDataDrivenCVarEngineSubsystem(const UDataDrivenCVarEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataDrivenCVarEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataDrivenCVarEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataDrivenCVarEngineSubsystem) \
	ENGINE_API virtual ~UDataDrivenCVarEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataDrivenCVarEngineSubsystem;

// ********** End Class UDataDrivenCVarEngineSubsystem *********************************************

// ********** Begin ScriptStruct FDataDrivenConsoleVariable ****************************************
struct Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDataDrivenConsoleVariable;
// ********** End ScriptStruct FDataDrivenConsoleVariable ******************************************

// ********** Begin Class UDataDrivenConsoleVariableSettings ***************************************
struct Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataDrivenConsoleVariableSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataDrivenConsoleVariableSettings(); \
	friend struct ::Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataDrivenConsoleVariableSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataDrivenConsoleVariableSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataDrivenConsoleVariableSettings_NoRegister) \
	DECLARE_SERIALIZER(UDataDrivenConsoleVariableSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataDrivenConsoleVariableSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataDrivenConsoleVariableSettings(UDataDrivenConsoleVariableSettings&&) = delete; \
	UDataDrivenConsoleVariableSettings(const UDataDrivenConsoleVariableSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataDrivenConsoleVariableSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataDrivenConsoleVariableSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataDrivenConsoleVariableSettings) \
	ENGINE_API virtual ~UDataDrivenConsoleVariableSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_84_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataDrivenConsoleVariableSettings;

// ********** End Class UDataDrivenConsoleVariableSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_DataDrivenCVars_DataDrivenCVars_h

// ********** Begin Enum FDataDrivenCVarType *******************************************************
#define FOREACH_ENUM_FDATADRIVENCVARTYPE(op) \
	op(FDataDrivenCVarType::CVarFloat) \
	op(FDataDrivenCVarType::CVarInt) \
	op(FDataDrivenCVarType::CVarBool) 

enum class FDataDrivenCVarType : uint8;
template<> struct TIsUEnumClass<FDataDrivenCVarType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<FDataDrivenCVarType>();
// ********** End Enum FDataDrivenCVarType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
