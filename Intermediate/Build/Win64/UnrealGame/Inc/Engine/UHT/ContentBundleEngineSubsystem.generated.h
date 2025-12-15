// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h"

#ifdef ENGINE_ContentBundleEngineSubsystem_generated_h
#error "ContentBundleEngineSubsystem.generated.h already included, missing '#pragma once' in ContentBundleEngineSubsystem.h"
#endif
#define ENGINE_ContentBundleEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UContentBundleEngineSubsystem ********************************************
struct Z_Construct_UClass_UContentBundleEngineSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UContentBundleEngineSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBundleEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UContentBundleEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UContentBundleEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBundleEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UContentBundleEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UContentBundleEngineSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UContentBundleEngineSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBundleEngineSubsystem(UContentBundleEngineSubsystem&&) = delete; \
	UContentBundleEngineSubsystem(const UContentBundleEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UContentBundleEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBundleEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UContentBundleEngineSubsystem) \
	ENGINE_API virtual ~UContentBundleEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBundleEngineSubsystem;

// ********** End Class UContentBundleEngineSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
