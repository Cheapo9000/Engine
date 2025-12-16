// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomAssetDataflow.h"

#ifdef HAIRSTRANDSCORE_GroomAssetDataflow_generated_h
#error "GroomAssetDataflow.generated.h already included, missing '#pragma once' in GroomAssetDataflow.h"
#endif
#define HAIRSTRANDSCORE_GroomAssetDataflow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowGroomContent ****************************************************
struct Z_Construct_UClass_UDataflowGroomContent_Statics;
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UDataflowGroomContent_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetDataflow_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowGroomContent(); \
	friend struct ::Z_Construct_UClass_UDataflowGroomContent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSCORE_API UClass* ::Z_Construct_UClass_UDataflowGroomContent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowGroomContent, UDataflowSkeletalContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), Z_Construct_UClass_UDataflowGroomContent_NoRegister) \
	DECLARE_SERIALIZER(UDataflowGroomContent)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetDataflow_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowGroomContent(UDataflowGroomContent&&) = delete; \
	UDataflowGroomContent(const UDataflowGroomContent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowGroomContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowGroomContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowGroomContent)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetDataflow_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetDataflow_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetDataflow_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetDataflow_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowGroomContent;

// ********** End Class UDataflowGroomContent ******************************************************

// ********** Begin ScriptStruct FGroomDataflowSettings ********************************************
struct Z_Construct_UScriptStruct_FGroomDataflowSettings_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetDataflow_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGroomDataflowSettings_Statics; \
	HAIRSTRANDSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowInstance Super;


struct FGroomDataflowSettings;
// ********** End ScriptStruct FGroomDataflowSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetDataflow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
