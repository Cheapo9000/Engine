// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FabAuthentication.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFabAuthentication() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FAB_API UClass* Z_Construct_UClass_UEosConstants();
FAB_API UClass* Z_Construct_UClass_UEosConstants_NoRegister();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FEosConstantsGameDev();
FAB_API UScriptStruct* Z_Construct_UScriptStruct_FEosConstantsProd();
UPackage* Z_Construct_UPackage__Script_Fab();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FEosConstantsGameDev **********************************************
struct Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEosConstantsGameDev); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEosConstantsGameDev); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[] = {
		{ "Comment", "/** The product id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The product id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[] = {
		{ "Comment", "/** The sandbox id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The sandbox id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[] = {
		{ "Comment", "/** The deployment id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The deployment id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCredentialsId_MetaData[] = {
		{ "Comment", "/** Client id of the service permissions entry, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Client id of the service permissions entry, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCredentialsSecret_MetaData[] = {
		{ "Comment", "/** Client secret for accessing the set of permissions, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Client secret for accessing the set of permissions, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[] = {
		{ "Comment", "/** Game name */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Game name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncryptionKey_MetaData[] = {
		{ "Comment", "/** Encryption key. */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Encryption key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductVersion_MetaData[] = {
		{ "Comment", "/** Product Version. */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Product Version." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEosConstantsGameDev constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientCredentialsId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientCredentialsSecret;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EncryptionKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEosConstantsGameDev constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEosConstantsGameDev>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEosConstantsGameDev;
class UScriptStruct* FEosConstantsGameDev::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEosConstantsGameDev.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEosConstantsGameDev.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEosConstantsGameDev, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EosConstantsGameDev"));
	}
	return Z_Registration_Info_UScriptStruct_FEosConstantsGameDev.OuterSingleton;
	}

// ********** Begin ScriptStruct FEosConstantsGameDev Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, ProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductId_MetaData), NewProp_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, SandboxId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxId_MetaData), NewProp_SandboxId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, DeploymentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeploymentId_MetaData), NewProp_DeploymentId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ClientCredentialsId = { "ClientCredentialsId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, ClientCredentialsId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCredentialsId_MetaData), NewProp_ClientCredentialsId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ClientCredentialsSecret = { "ClientCredentialsSecret", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, ClientCredentialsSecret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCredentialsSecret_MetaData), NewProp_ClientCredentialsSecret_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, GameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameName_MetaData), NewProp_GameName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_EncryptionKey = { "EncryptionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, EncryptionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncryptionKey_MetaData), NewProp_EncryptionKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ProductVersion = { "ProductVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsGameDev, ProductVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductVersion_MetaData), NewProp_ProductVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_SandboxId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_DeploymentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ClientCredentialsId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ClientCredentialsSecret,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_GameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_EncryptionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewProp_ProductVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEosConstantsGameDev Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"EosConstantsGameDev",
	Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::PropPointers),
	sizeof(FEosConstantsGameDev),
	alignof(FEosConstantsGameDev),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEosConstantsGameDev()
{
	if (!Z_Registration_Info_UScriptStruct_FEosConstantsGameDev.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEosConstantsGameDev.InnerSingleton, Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEosConstantsGameDev.InnerSingleton);
}
// ********** End ScriptStruct FEosConstantsGameDev ************************************************

// ********** Begin ScriptStruct FEosConstantsProd *************************************************
struct Z_Construct_UScriptStruct_FEosConstantsProd_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEosConstantsProd); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEosConstantsProd); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[] = {
		{ "Comment", "/** The product id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The product id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[] = {
		{ "Comment", "/** The sandbox id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The sandbox id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[] = {
		{ "Comment", "/** The deployment id for the running application, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "The deployment id for the running application, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCredentialsId_MetaData[] = {
		{ "Comment", "/** Client id of the service permissions entry, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Client id of the service permissions entry, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCredentialsSecret_MetaData[] = {
		{ "Comment", "/** Client secret for accessing the set of permissions, found on the dev portal */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Client secret for accessing the set of permissions, found on the dev portal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[] = {
		{ "Comment", "/** Game name */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Game name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncryptionKey_MetaData[] = {
		{ "Comment", "/** Encryption key. */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Encryption key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductVersion_MetaData[] = {
		{ "Comment", "/** Product Version. */" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
		{ "ToolTip", "Product Version." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEosConstantsProd constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientCredentialsId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientCredentialsSecret;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EncryptionKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProductVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEosConstantsProd constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEosConstantsProd>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEosConstantsProd_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEosConstantsProd;
class UScriptStruct* FEosConstantsProd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEosConstantsProd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEosConstantsProd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEosConstantsProd, (UObject*)Z_Construct_UPackage__Script_Fab(), TEXT("EosConstantsProd"));
	}
	return Z_Registration_Info_UScriptStruct_FEosConstantsProd.OuterSingleton;
	}

// ********** Begin ScriptStruct FEosConstantsProd Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, ProductId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductId_MetaData), NewProp_ProductId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, SandboxId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandboxId_MetaData), NewProp_SandboxId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, DeploymentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeploymentId_MetaData), NewProp_DeploymentId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ClientCredentialsId = { "ClientCredentialsId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, ClientCredentialsId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCredentialsId_MetaData), NewProp_ClientCredentialsId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ClientCredentialsSecret = { "ClientCredentialsSecret", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, ClientCredentialsSecret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCredentialsSecret_MetaData), NewProp_ClientCredentialsSecret_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_GameName = { "GameName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, GameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameName_MetaData), NewProp_GameName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_EncryptionKey = { "EncryptionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, EncryptionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncryptionKey_MetaData), NewProp_EncryptionKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ProductVersion = { "ProductVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEosConstantsProd, ProductVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductVersion_MetaData), NewProp_ProductVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEosConstantsProd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ProductId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_SandboxId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_DeploymentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ClientCredentialsId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ClientCredentialsSecret,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_GameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_EncryptionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewProp_ProductVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsProd_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEosConstantsProd Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEosConstantsProd_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
	nullptr,
	&NewStructOps,
	"EosConstantsProd",
	Z_Construct_UScriptStruct_FEosConstantsProd_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsProd_Statics::PropPointers),
	sizeof(FEosConstantsProd),
	alignof(FEosConstantsProd),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEosConstantsProd_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEosConstantsProd_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEosConstantsProd()
{
	if (!Z_Registration_Info_UScriptStruct_FEosConstantsProd.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEosConstantsProd.InnerSingleton, Z_Construct_UScriptStruct_FEosConstantsProd_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEosConstantsProd.InnerSingleton);
}
// ********** End ScriptStruct FEosConstantsProd ***************************************************

// ********** Begin Class UEosConstants ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEosConstants;
UClass* UEosConstants::GetPrivateStaticClass()
{
	using TClass = UEosConstants;
	if (!Z_Registration_Info_UClass_UEosConstants.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EosConstants"),
			Z_Registration_Info_UClass_UEosConstants.InnerSingleton,
			StaticRegisterNativesUEosConstants,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEosConstants.InnerSingleton;
}
UClass* Z_Construct_UClass_UEosConstants_NoRegister()
{
	return UEosConstants::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEosConstants_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FabAuthentication.h" },
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDev_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prod_MetaData[] = {
		{ "ModuleRelativePath", "Private/FabAuthentication.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEosConstants constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameDev;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Prod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEosConstants constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEosConstants>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEosConstants_Statics

// ********** Begin Class UEosConstants Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEosConstants_Statics::NewProp_GameDev = { "GameDev", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEosConstants, GameDev), Z_Construct_UScriptStruct_FEosConstantsGameDev, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDev_MetaData), NewProp_GameDev_MetaData) }; // 2472030019
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEosConstants_Statics::NewProp_Prod = { "Prod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEosConstants, Prod), Z_Construct_UScriptStruct_FEosConstantsProd, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prod_MetaData), NewProp_Prod_MetaData) }; // 537750870
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEosConstants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEosConstants_Statics::NewProp_GameDev,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEosConstants_Statics::NewProp_Prod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEosConstants_Statics::PropPointers) < 2048);
// ********** End Class UEosConstants Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UEosConstants_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Fab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEosConstants_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEosConstants_Statics::ClassParams = {
	&UEosConstants::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEosConstants_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEosConstants_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEosConstants_Statics::Class_MetaDataParams), Z_Construct_UClass_UEosConstants_Statics::Class_MetaDataParams)
};
void UEosConstants::StaticRegisterNativesUEosConstants()
{
}
UClass* Z_Construct_UClass_UEosConstants()
{
	if (!Z_Registration_Info_UClass_UEosConstants.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEosConstants.OuterSingleton, Z_Construct_UClass_UEosConstants_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEosConstants.OuterSingleton;
}
UEosConstants::UEosConstants(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEosConstants);
UEosConstants::~UEosConstants() {}
// ********** End Class UEosConstants **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h__Script_Fab_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEosConstantsGameDev::StaticStruct, Z_Construct_UScriptStruct_FEosConstantsGameDev_Statics::NewStructOps, TEXT("EosConstantsGameDev"),&Z_Registration_Info_UScriptStruct_FEosConstantsGameDev, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEosConstantsGameDev), 2472030019U) },
		{ FEosConstantsProd::StaticStruct, Z_Construct_UScriptStruct_FEosConstantsProd_Statics::NewStructOps, TEXT("EosConstantsProd"),&Z_Registration_Info_UScriptStruct_FEosConstantsProd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEosConstantsProd), 537750870U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEosConstants, UEosConstants::StaticClass, TEXT("UEosConstants"), &Z_Registration_Info_UClass_UEosConstants, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEosConstants), 2780302686U) },
	};
}; // Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h__Script_Fab_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h__Script_Fab_346668979{
	TEXT("/Script/Fab"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h__Script_Fab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h__Script_Fab_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h__Script_Fab_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_FabAuthentication_h__Script_Fab_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
