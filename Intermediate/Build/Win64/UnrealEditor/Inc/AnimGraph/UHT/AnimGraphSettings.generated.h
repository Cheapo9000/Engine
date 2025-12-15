// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphSettings.h"

#ifdef ANIMGRAPH_AnimGraphSettings_generated_h
#error "AnimGraphSettings.generated.h already included, missing '#pragma once' in AnimGraphSettings.h"
#endif
#define ANIMGRAPH_AnimGraphSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphSettings *******************************************************
struct Z_Construct_UClass_UAnimGraphSettings_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphSettings_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphSettings(); \
	friend struct ::Z_Construct_UClass_UAnimGraphSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphSettings(UAnimGraphSettings&&) = delete; \
	UAnimGraphSettings(const UAnimGraphSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphSettings) \
	NO_API virtual ~UAnimGraphSettings();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphSettings_h_8_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphSettings;

// ********** End Class UAnimGraphSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
