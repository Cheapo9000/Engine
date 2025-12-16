// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNERuntimeIREESettings.h"

#ifdef NNERUNTIMEIREE_NNERuntimeIREESettings_generated_h
#error "NNERuntimeIREESettings.generated.h already included, missing '#pragma once' in NNERuntimeIREESettings.h"
#endif
#define NNERUNTIMEIREE_NNERuntimeIREESettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNNERuntimeIREEThreadingAffinity **********************************
struct Z_Construct_UScriptStruct_FNNERuntimeIREEThreadingAffinity_Statics;
#define FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNERuntimeIREEThreadingAffinity_Statics; \
	NNERUNTIMEIREE_API static class UScriptStruct* StaticStruct();


struct FNNERuntimeIREEThreadingAffinity;
// ********** End ScriptStruct FNNERuntimeIREEThreadingAffinity ************************************

// ********** Begin ScriptStruct FNNERuntimeIREETaskTopology ***************************************
struct Z_Construct_UScriptStruct_FNNERuntimeIREETaskTopology_Statics;
#define FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNERuntimeIREETaskTopology_Statics; \
	NNERUNTIMEIREE_API static class UScriptStruct* StaticStruct();


struct FNNERuntimeIREETaskTopology;
// ********** End ScriptStruct FNNERuntimeIREETaskTopology *****************************************

// ********** Begin ScriptStruct FNNERuntimeIREEThreadingOptions ***********************************
struct Z_Construct_UScriptStruct_FNNERuntimeIREEThreadingOptions_Statics;
#define FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNNERuntimeIREEThreadingOptions_Statics; \
	NNERUNTIMEIREE_API static class UScriptStruct* StaticStruct();


struct FNNERuntimeIREEThreadingOptions;
// ********** End ScriptStruct FNNERuntimeIREEThreadingOptions *************************************

// ********** Begin Class UNNERuntimeIREESettings **************************************************
struct Z_Construct_UClass_UNNERuntimeIREESettings_Statics;
NNERUNTIMEIREE_API UClass* Z_Construct_UClass_UNNERuntimeIREESettings_NoRegister();

#define FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNERuntimeIREESettings(); \
	friend struct ::Z_Construct_UClass_UNNERuntimeIREESettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NNERUNTIMEIREE_API UClass* ::Z_Construct_UClass_UNNERuntimeIREESettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNNERuntimeIREESettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NNERuntimeIREE"), Z_Construct_UClass_UNNERuntimeIREESettings_NoRegister) \
	DECLARE_SERIALIZER(UNNERuntimeIREESettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h_80_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNNERuntimeIREESettings(UNNERuntimeIREESettings&&) = delete; \
	UNNERuntimeIREESettings(const UNNERuntimeIREESettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNERuntimeIREESettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntimeIREESettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntimeIREESettings) \
	NO_API virtual ~UNNERuntimeIREESettings();


#define FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h_77_PROLOG
#define FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNNERuntimeIREESettings;

// ********** End Class UNNERuntimeIREESettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_NNERuntimeIREE_Private_NNERuntimeIREESettings_h

// ********** Begin Enum ENNERuntimeIREEThreadingAffinityGroupSpecifierType ************************
#define FOREACH_ENUM_ENNERUNTIMEIREETHREADINGAFFINITYGROUPSPECIFIERTYPE(op) \
	op(ENNERuntimeIREEThreadingAffinityGroupSpecifierType::Index) \
	op(ENNERuntimeIREEThreadingAffinityGroupSpecifierType::Current) \
	op(ENNERuntimeIREEThreadingAffinityGroupSpecifierType::All) \
	op(ENNERuntimeIREEThreadingAffinityGroupSpecifierType::Any) 

enum class ENNERuntimeIREEThreadingAffinityGroupSpecifierType : uint8;
template<> struct TIsUEnumClass<ENNERuntimeIREEThreadingAffinityGroupSpecifierType> { enum { Value = true }; };
template<> NNERUNTIMEIREE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENNERuntimeIREEThreadingAffinityGroupSpecifierType>();
// ********** End Enum ENNERuntimeIREEThreadingAffinityGroupSpecifierType **************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
