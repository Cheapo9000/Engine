// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/UserInterfaceSettings.h"

#ifdef ENGINE_UserInterfaceSettings_generated_h
#error "UserInterfaceSettings.generated.h already included, missing '#pragma once' in UserInterfaceSettings.h"
#endif
#define ENGINE_UserInterfaceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHardwareCursorReference ******************************************
struct Z_Construct_UScriptStruct_FHardwareCursorReference_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHardwareCursorReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FHardwareCursorReference;
// ********** End ScriptStruct FHardwareCursorReference ********************************************

// ********** Begin Class UUserInterfaceSettings ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_119_RPC_WRAPPERS \
	DECLARE_FUNCTION(execShouldDisplayDistanceFieldFontSettings);


struct Z_Construct_UClass_UUserInterfaceSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UUserInterfaceSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUUserInterfaceSettings(); \
	friend struct ::Z_Construct_UClass_UUserInterfaceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UUserInterfaceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserInterfaceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UUserInterfaceSettings_NoRegister) \
	DECLARE_SERIALIZER(UUserInterfaceSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UUserInterfaceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserInterfaceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UUserInterfaceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserInterfaceSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserInterfaceSettings(UUserInterfaceSettings&&) = delete; \
	UUserInterfaceSettings(const UUserInterfaceSettings&) = delete; \
	ENGINE_API virtual ~UUserInterfaceSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_116_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_119_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_119_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserInterfaceSettings;

// ********** End Class UUserInterfaceSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h

// ********** Begin Enum ERenderFocusRule **********************************************************
#define FOREACH_ENUM_ERENDERFOCUSRULE(op) \
	op(ERenderFocusRule::Always) \
	op(ERenderFocusRule::NonPointer) \
	op(ERenderFocusRule::NavigationOnly) \
	op(ERenderFocusRule::Never) 

enum class ERenderFocusRule : uint8;
template<> struct TIsUEnumClass<ERenderFocusRule> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERenderFocusRule>();
// ********** End Enum ERenderFocusRule ************************************************************

// ********** Begin Enum EUIScalingRule ************************************************************
#define FOREACH_ENUM_EUISCALINGRULE(op) \
	op(EUIScalingRule::ShortestSide) \
	op(EUIScalingRule::LongestSide) \
	op(EUIScalingRule::Horizontal) \
	op(EUIScalingRule::Vertical) \
	op(EUIScalingRule::ScaleToFit) \
	op(EUIScalingRule::Custom) 

enum class EUIScalingRule : uint8;
template<> struct TIsUEnumClass<EUIScalingRule> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EUIScalingRule>();
// ********** End Enum EUIScalingRule **************************************************************

// ********** Begin Enum EFontDPI ******************************************************************
#define FOREACH_ENUM_EFONTDPI(op) \
	op(EFontDPI::Standard) \
	op(EFontDPI::Unreal) \
	op(EFontDPI::Custom) 

enum class EFontDPI : uint8;
template<> struct TIsUEnumClass<EFontDPI> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFontDPI>();
// ********** End Enum EFontDPI ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
