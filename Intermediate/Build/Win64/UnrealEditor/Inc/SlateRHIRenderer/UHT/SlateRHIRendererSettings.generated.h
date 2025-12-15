// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlateRHIRendererSettings.h"

#ifdef SLATERHIRENDERER_SlateRHIRendererSettings_generated_h
#error "SlateRHIRendererSettings.generated.h already included, missing '#pragma once' in SlateRHIRendererSettings.h"
#endif
#define SLATERHIRENDERER_SlateRHIRendererSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlatePostRT : uint8;
struct FSlatePostSettings;

// ********** Begin ScriptStruct FSlatePostSettings ************************************************
struct Z_Construct_UScriptStruct_FSlatePostSettings_Statics;
#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSlatePostSettings_Statics; \
	SLATERHIRENDERER_API static class UScriptStruct* StaticStruct();


struct FSlatePostSettings;
// ********** End ScriptStruct FSlatePostSettings **************************************************

// ********** Begin Class USlateRHIRendererSettings ************************************************
#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSlatePostSetting); \
	DECLARE_FUNCTION(execGetMutableSlatePostSetting);


struct Z_Construct_UClass_USlateRHIRendererSettings_Statics;
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateRHIRendererSettings_NoRegister();

#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateRHIRendererSettings(); \
	friend struct ::Z_Construct_UClass_USlateRHIRendererSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATERHIRENDERER_API UClass* ::Z_Construct_UClass_USlateRHIRendererSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateRHIRendererSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlateRHIRenderer"), Z_Construct_UClass_USlateRHIRendererSettings_NoRegister) \
	DECLARE_SERIALIZER(USlateRHIRendererSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_90_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateRHIRendererSettings(USlateRHIRendererSettings&&) = delete; \
	USlateRHIRendererSettings(const USlateRHIRendererSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATERHIRENDERER_API, USlateRHIRendererSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateRHIRendererSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlateRHIRendererSettings)


#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_87_PROLOG
#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateRHIRendererSettings;

// ********** End Class USlateRHIRendererSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h

// ********** Begin Enum ESlatePostResolution ******************************************************
#define FOREACH_ENUM_ESLATEPOSTRESOLUTION(op) \
	op(ESlatePostResolution::Full) \
	op(ESlatePostResolution::Half) 

enum class ESlatePostResolution : uint8;
template<> struct TIsUEnumClass<ESlatePostResolution> { enum { Value = true }; };
template<> SLATERHIRENDERER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlatePostResolution>();
// ********** End Enum ESlatePostResolution ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
