// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintRuntimeSettings.h"

#ifdef BLUEPRINTRUNTIME_BlueprintRuntimeSettings_generated_h
#error "BlueprintRuntimeSettings.generated.h already included, missing '#pragma once' in BlueprintRuntimeSettings.h"
#endif
#define BLUEPRINTRUNTIME_BlueprintRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintWarningSettings *****************************************
struct Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics;
#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics; \
	BLUEPRINTRUNTIME_API static class UScriptStruct* StaticStruct();


struct FBlueprintWarningSettings;
// ********** End ScriptStruct FBlueprintWarningSettings *******************************************

// ********** Begin Class UBlueprintRuntimeSettings ************************************************
struct Z_Construct_UClass_UBlueprintRuntimeSettings_Statics;
BLUEPRINTRUNTIME_API UClass* Z_Construct_UClass_UBlueprintRuntimeSettings_NoRegister();

#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintRuntimeSettings(); \
	friend struct ::Z_Construct_UClass_UBlueprintRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTRUNTIME_API UClass* ::Z_Construct_UClass_UBlueprintRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintRuntime"), Z_Construct_UClass_UBlueprintRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintRuntimeSettings)


#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTRUNTIME_API UBlueprintRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTRUNTIME_API, UBlueprintRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintRuntimeSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintRuntimeSettings(UBlueprintRuntimeSettings&&) = delete; \
	UBlueprintRuntimeSettings(const UBlueprintRuntimeSettings&) = delete; \
	BLUEPRINTRUNTIME_API virtual ~UBlueprintRuntimeSettings();


#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_44_PROLOG
#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_INCLASS \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintRuntimeSettings;

// ********** End Class UBlueprintRuntimeSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h

// ********** Begin Enum EBlueprintWarningBehavior *************************************************
#define FOREACH_ENUM_EBLUEPRINTWARNINGBEHAVIOR(op) \
	op(EBlueprintWarningBehavior::Warn) \
	op(EBlueprintWarningBehavior::Error) \
	op(EBlueprintWarningBehavior::Suppress) 

enum class EBlueprintWarningBehavior : uint8;
template<> struct TIsUEnumClass<EBlueprintWarningBehavior> { enum { Value = true }; };
template<> BLUEPRINTRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlueprintWarningBehavior>();
// ********** End Enum EBlueprintWarningBehavior ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
