// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureLODSettings.h"

#ifdef ENGINE_TextureLODSettings_generated_h
#error "TextureLODSettings.generated.h already included, missing '#pragma once' in TextureLODSettings.h"
#endif
#define ENGINE_TextureLODSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTextureLODGroup **************************************************
struct Z_Construct_UScriptStruct_FTextureLODGroup_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextureLODGroup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTextureLODGroup;
// ********** End ScriptStruct FTextureLODGroup ****************************************************

// ********** Begin Class UTextureLODSettings ******************************************************
struct Z_Construct_UClass_UTextureLODSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_138_INCLASS \
private: \
	static void StaticRegisterNativesUTextureLODSettings(); \
	friend struct ::Z_Construct_UClass_UTextureLODSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextureLODSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureLODSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextureLODSettings_NoRegister) \
	DECLARE_SERIALIZER(UTextureLODSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureLODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureLODSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureLODSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureLODSettings(UTextureLODSettings&&) = delete; \
	UTextureLODSettings(const UTextureLODSettings&) = delete; \
	ENGINE_API virtual ~UTextureLODSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_135_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_138_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureLODSettings;

// ********** End Class UTextureLODSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
