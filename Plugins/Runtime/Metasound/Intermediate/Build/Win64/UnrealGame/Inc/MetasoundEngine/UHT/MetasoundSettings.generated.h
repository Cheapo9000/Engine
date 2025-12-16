// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundSettings.h"

#ifdef METASOUNDENGINE_MetasoundSettings_generated_h
#error "MetasoundSettings.generated.h already included, missing '#pragma once' in MetasoundSettings.h"
#endif
#define METASOUNDENGINE_MetasoundSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDefaultMetaSoundAssetAutoUpdateSettings **************************
struct Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct();


struct FDefaultMetaSoundAssetAutoUpdateSettings;
// ********** End ScriptStruct FDefaultMetaSoundAssetAutoUpdateSettings ****************************

// ********** Begin Class UMetaSoundQualityHelper **************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetQualityNames);


struct Z_Construct_UClass_UMetaSoundQualityHelper_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundQualityHelper_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundQualityHelper(); \
	friend struct ::Z_Construct_UClass_UMetaSoundQualityHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundQualityHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundQualityHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundQualityHelper_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundQualityHelper)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetaSoundQualityHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundQualityHelper(UMetaSoundQualityHelper&&) = delete; \
	UMetaSoundQualityHelper(const UMetaSoundQualityHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundQualityHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundQualityHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundQualityHelper) \
	METASOUNDENGINE_API virtual ~UMetaSoundQualityHelper();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_67_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundQualityHelper;

// ********** End Class UMetaSoundQualityHelper ****************************************************

// ********** Begin ScriptStruct FMetaSoundPageSettings ********************************************
struct Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundPageSettings_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct();


struct FMetaSoundPageSettings;
// ********** End ScriptStruct FMetaSoundPageSettings **********************************************

// ********** Begin ScriptStruct FMetaSoundQualitySettings *****************************************
struct Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct();


struct FMetaSoundQualitySettings;
// ********** End ScriptStruct FMetaSoundQualitySettings *******************************************

// ********** Begin Class UMetaSoundSettings *******************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_157_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetQualityNames); \
	DECLARE_FUNCTION(execGetPageNames);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_157_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMetaSoundSettings_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundSettings(); \
	friend struct ::Z_Construct_UClass_UMetaSoundSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundSettings_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("MetaSound");} \



#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetaSoundSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundSettings(UMetaSoundSettings&&) = delete; \
	UMetaSoundSettings(const UMetaSoundSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSettings) \
	METASOUNDENGINE_API virtual ~UMetaSoundSettings();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_154_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_157_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundSettings;

// ********** End Class UMetaSoundSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h

// ********** Begin Enum EMetaSoundMessageLevel ****************************************************
#define FOREACH_ENUM_EMETASOUNDMESSAGELEVEL(op) \
	op(EMetaSoundMessageLevel::Error) \
	op(EMetaSoundMessageLevel::Warning) \
	op(EMetaSoundMessageLevel::Info) 

enum class EMetaSoundMessageLevel : uint8;
template<> struct TIsUEnumClass<EMetaSoundMessageLevel> { enum { Value = true }; };
template<> METASOUNDENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaSoundMessageLevel>();
// ********** End Enum EMetaSoundMessageLevel ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
