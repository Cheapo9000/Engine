// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanDNAImportColorMap.h"

#ifdef INTERCHANGEDNA_MetaHumanDNAImportColorMap_generated_h
#error "MetaHumanDNAImportColorMap.generated.h already included, missing '#pragma once' in MetaHumanDNAImportColorMap.h"
#endif
#define INTERCHANGEDNA_MetaHumanDNAImportColorMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin ScriptStruct FMeshVertexColorData **********************************************
struct Z_Construct_UScriptStruct_FMeshVertexColorData_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshVertexColorData_Statics; \
	INTERCHANGEDNA_API static class UScriptStruct* StaticStruct();


struct FMeshVertexColorData;
// ********** End ScriptStruct FMeshVertexColorData ************************************************

// ********** Begin Class UDNAMeshVertexColorDataAsset *********************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetColorByMeshAndIndex);


struct Z_Construct_UClass_UDNAMeshVertexColorDataAsset_Statics;
INTERCHANGEDNA_API UClass* Z_Construct_UClass_UDNAMeshVertexColorDataAsset_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDNAMeshVertexColorDataAsset(); \
	friend struct ::Z_Construct_UClass_UDNAMeshVertexColorDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEDNA_API UClass* ::Z_Construct_UClass_UDNAMeshVertexColorDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDNAMeshVertexColorDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeDNA"), Z_Construct_UClass_UDNAMeshVertexColorDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UDNAMeshVertexColorDataAsset)


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEDNA_API UDNAMeshVertexColorDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDNAMeshVertexColorDataAsset(UDNAMeshVertexColorDataAsset&&) = delete; \
	UDNAMeshVertexColorDataAsset(const UDNAMeshVertexColorDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEDNA_API, UDNAMeshVertexColorDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDNAMeshVertexColorDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDNAMeshVertexColorDataAsset) \
	INTERCHANGEDNA_API virtual ~UDNAMeshVertexColorDataAsset();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h_22_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDNAMeshVertexColorDataAsset;

// ********** End Class UDNAMeshVertexColorDataAsset ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_InterchangeDNA_Private_MetaHumanDNAImportColorMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
