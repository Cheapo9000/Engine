// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/VirtualTexturePoolConfig.h"

#ifdef ENGINE_VirtualTexturePoolConfig_generated_h
#error "VirtualTexturePoolConfig.generated.h already included, missing '#pragma once' in VirtualTexturePoolConfig.h"
#endif
#define ENGINE_VirtualTexturePoolConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVirtualTextureSpacePoolConfig ************************************
struct Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FVirtualTextureSpacePoolConfig;
// ********** End ScriptStruct FVirtualTextureSpacePoolConfig **************************************

// ********** Begin Class UVirtualTexturePoolConfig ************************************************
struct Z_Construct_UClass_UVirtualTexturePoolConfig_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexturePoolConfig_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualTexturePoolConfig(); \
	friend struct ::Z_Construct_UClass_UVirtualTexturePoolConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVirtualTexturePoolConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualTexturePoolConfig, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVirtualTexturePoolConfig_NoRegister) \
	DECLARE_SERIALIZER(UVirtualTexturePoolConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVirtualTexturePoolConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTexturePoolConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVirtualTexturePoolConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTexturePoolConfig); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualTexturePoolConfig(UVirtualTexturePoolConfig&&) = delete; \
	UVirtualTexturePoolConfig(const UVirtualTexturePoolConfig&) = delete; \
	ENGINE_API virtual ~UVirtualTexturePoolConfig();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_57_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_60_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualTexturePoolConfig;

// ********** End Class UVirtualTexturePoolConfig **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
