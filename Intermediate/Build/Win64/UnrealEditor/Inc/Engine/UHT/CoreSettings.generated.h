// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CoreSettings.h"

#ifdef ENGINE_CoreSettings_generated_h
#error "CoreSettings.generated.h already included, missing '#pragma once' in CoreSettings.h"
#endif
#define ENGINE_CoreSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStreamingSettings *******************************************************
struct Z_Construct_UClass_UStreamingSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStreamingSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamingSettings(); \
	friend struct ::Z_Construct_UClass_UStreamingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStreamingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStreamingSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStreamingSettings_NoRegister) \
	DECLARE_SERIALIZER(UStreamingSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStreamingSettings(UStreamingSettings&&) = delete; \
	UStreamingSettings(const UStreamingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStreamingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamingSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStreamingSettings) \
	ENGINE_API virtual ~UStreamingSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStreamingSettings;

// ********** End Class UStreamingSettings *********************************************************

// ********** Begin Class UGarbageCollectionSettings ***********************************************
struct Z_Construct_UClass_UGarbageCollectionSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UGarbageCollectionSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_171_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGarbageCollectionSettings(); \
	friend struct ::Z_Construct_UClass_UGarbageCollectionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UGarbageCollectionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGarbageCollectionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UGarbageCollectionSettings_NoRegister) \
	DECLARE_SERIALIZER(UGarbageCollectionSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_171_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGarbageCollectionSettings(UGarbageCollectionSettings&&) = delete; \
	UGarbageCollectionSettings(const UGarbageCollectionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGarbageCollectionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGarbageCollectionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGarbageCollectionSettings) \
	ENGINE_API virtual ~UGarbageCollectionSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_168_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_171_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_171_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGarbageCollectionSettings;

// ********** End Class UGarbageCollectionSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
