// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartitionBuilder/PCGWorldPartitionBuilder.h"

#ifdef PCGEDITOR_PCGWorldPartitionBuilder_generated_h
#error "PCGWorldPartitionBuilder.generated.h already included, missing '#pragma once' in PCGWorldPartitionBuilder.h"
#endif
#define PCGEDITOR_PCGWorldPartitionBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UPCGWorldPartitionBuilderHelper ******************************************
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddAssetToSubmitAllowList);


struct Z_Construct_UClass_UPCGWorldPartitionBuilderHelper_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGWorldPartitionBuilderHelper_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGWorldPartitionBuilderHelper(); \
	friend struct ::Z_Construct_UClass_UPCGWorldPartitionBuilderHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGWorldPartitionBuilderHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGWorldPartitionBuilderHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGWorldPartitionBuilderHelper_NoRegister) \
	DECLARE_SERIALIZER(UPCGWorldPartitionBuilderHelper)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGWorldPartitionBuilderHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGWorldPartitionBuilderHelper(UPCGWorldPartitionBuilderHelper&&) = delete; \
	UPCGWorldPartitionBuilderHelper(const UPCGWorldPartitionBuilderHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGWorldPartitionBuilderHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGWorldPartitionBuilderHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGWorldPartitionBuilderHelper) \
	NO_API virtual ~UPCGWorldPartitionBuilderHelper();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_106_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGWorldPartitionBuilderHelper;

// ********** End Class UPCGWorldPartitionBuilderHelper ********************************************

// ********** Begin Class UPCGWorldPartitionBuilder ************************************************
struct Z_Construct_UClass_UPCGWorldPartitionBuilder_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGWorldPartitionBuilder_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_138_INCLASS \
private: \
	static void StaticRegisterNativesUPCGWorldPartitionBuilder(); \
	friend struct ::Z_Construct_UClass_UPCGWorldPartitionBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGWorldPartitionBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGWorldPartitionBuilder, UWorldPartitionBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGWorldPartitionBuilder_NoRegister) \
	DECLARE_SERIALIZER(UPCGWorldPartitionBuilder)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGWorldPartitionBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGWorldPartitionBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGWorldPartitionBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGWorldPartitionBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGWorldPartitionBuilder(UPCGWorldPartitionBuilder&&) = delete; \
	UPCGWorldPartitionBuilder(const UPCGWorldPartitionBuilder&) = delete; \
	NO_API virtual ~UPCGWorldPartitionBuilder();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_135_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_138_INCLASS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGWorldPartitionBuilder;

// ********** End Class UPCGWorldPartitionBuilder **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGWorldPartitionBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
