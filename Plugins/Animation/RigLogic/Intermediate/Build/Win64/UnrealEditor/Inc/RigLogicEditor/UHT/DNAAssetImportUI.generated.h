// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DNAAssetImportUI.h"

#ifdef RIGLOGICEDITOR_DNAAssetImportUI_generated_h
#error "DNAAssetImportUI.generated.h already included, missing '#pragma once' in DNAAssetImportUI.h"
#endif
#define RIGLOGICEDITOR_DNAAssetImportUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDNAAssetImportUI ********************************************************
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetToDefault);


struct Z_Construct_UClass_UDNAAssetImportUI_Statics;
RIGLOGICEDITOR_API UClass* Z_Construct_UClass_UDNAAssetImportUI_NoRegister();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDNAAssetImportUI(); \
	friend struct ::Z_Construct_UClass_UDNAAssetImportUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGLOGICEDITOR_API UClass* ::Z_Construct_UClass_UDNAAssetImportUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UDNAAssetImportUI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigLogicEditor"), Z_Construct_UClass_UDNAAssetImportUI_NoRegister) \
	DECLARE_SERIALIZER(UDNAAssetImportUI) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGLOGICEDITOR_API UDNAAssetImportUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDNAAssetImportUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGLOGICEDITOR_API, UDNAAssetImportUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDNAAssetImportUI); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDNAAssetImportUI(UDNAAssetImportUI&&) = delete; \
	UDNAAssetImportUI(const UDNAAssetImportUI&) = delete; \
	RIGLOGICEDITOR_API virtual ~UDNAAssetImportUI();


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_16_PROLOG
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_19_INCLASS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDNAAssetImportUI;

// ********** End Class UDNAAssetImportUI **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
