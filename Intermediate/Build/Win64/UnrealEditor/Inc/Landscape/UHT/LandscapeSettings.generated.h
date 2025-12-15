// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSettings.h"

#ifdef LANDSCAPE_LandscapeSettings_generated_h
#error "LandscapeSettings.generated.h already included, missing '#pragma once' in LandscapeSettings.h"
#endif
#define LANDSCAPE_LandscapeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeSettings *******************************************************
struct Z_Construct_UClass_ULandscapeSettings_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSettings_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeSettings(); \
	friend struct ::Z_Construct_UClass_ULandscapeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeSettings_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeSettings(ULandscapeSettings&&) = delete; \
	ULandscapeSettings(const ULandscapeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSettings) \
	LANDSCAPE_API virtual ~ULandscapeSettings();


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_33_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeSettings;

// ********** End Class ULandscapeSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h

// ********** Begin Enum ELandscapeDirtyingMode ****************************************************
#define FOREACH_ENUM_ELANDSCAPEDIRTYINGMODE(op) \
	op(ELandscapeDirtyingMode::Auto) \
	op(ELandscapeDirtyingMode::InLandscapeModeOnly) \
	op(ELandscapeDirtyingMode::InLandscapeModeAndUserTriggeredChanges) 

enum class ELandscapeDirtyingMode : uint8;
template<> struct TIsUEnumClass<ELandscapeDirtyingMode> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeDirtyingMode>();
// ********** End Enum ELandscapeDirtyingMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
