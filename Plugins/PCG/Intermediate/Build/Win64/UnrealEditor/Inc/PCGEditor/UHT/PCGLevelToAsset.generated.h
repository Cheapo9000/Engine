// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGLevelToAsset.h"

#ifdef PCGEDITOR_PCGLevelToAsset_generated_h
#error "PCGLevelToAsset.generated.h already included, missing '#pragma once' in PCGLevelToAsset.h"
#endif
#define PCGEDITOR_PCGLevelToAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPCGDataAsset;
class UWorld;

// ********** Begin Class UPCGLevelToAsset *********************************************************
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PCGEDITOR_API virtual bool BP_ExportWorld_Implementation(UWorld* World, const FString& PackageName, UPCGDataAsset* Asset); \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execSetWorldObject); \
	DECLARE_FUNCTION(execSetWorld); \
	DECLARE_FUNCTION(execBP_ExportWorld);


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGLevelToAsset_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGLevelToAsset_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLevelToAsset(); \
	friend struct ::Z_Construct_UClass_UPCGLevelToAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGLevelToAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLevelToAsset, UPCGAssetExporter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGLevelToAsset_NoRegister) \
	DECLARE_SERIALIZER(UPCGLevelToAsset)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEDITOR_API UPCGLevelToAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLevelToAsset(UPCGLevelToAsset&&) = delete; \
	UPCGLevelToAsset(const UPCGLevelToAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEDITOR_API, UPCGLevelToAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLevelToAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLevelToAsset) \
	PCGEDITOR_API virtual ~UPCGLevelToAsset();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLevelToAsset;

// ********** End Class UPCGLevelToAsset ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Public_PCGLevelToAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
