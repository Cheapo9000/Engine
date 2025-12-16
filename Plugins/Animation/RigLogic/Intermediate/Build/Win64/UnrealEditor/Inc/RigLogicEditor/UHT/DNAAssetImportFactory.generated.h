// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DNAAssetImportFactory.h"

#ifdef RIGLOGICEDITOR_DNAAssetImportFactory_generated_h
#error "DNAAssetImportFactory.generated.h already included, missing '#pragma once' in DNAAssetImportFactory.h"
#endif
#define RIGLOGICEDITOR_DNAAssetImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDNAAssetImportFactory ***************************************************
struct Z_Construct_UClass_UDNAAssetImportFactory_Statics;
RIGLOGICEDITOR_API UClass* Z_Construct_UClass_UDNAAssetImportFactory_NoRegister();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDNAAssetImportFactory(); \
	friend struct ::Z_Construct_UClass_UDNAAssetImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGLOGICEDITOR_API UClass* ::Z_Construct_UClass_UDNAAssetImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDNAAssetImportFactory, UFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RigLogicEditor"), Z_Construct_UClass_UDNAAssetImportFactory_NoRegister) \
	DECLARE_SERIALIZER(UDNAAssetImportFactory)


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDNAAssetImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDNAAssetImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDNAAssetImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDNAAssetImportFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDNAAssetImportFactory(UDNAAssetImportFactory&&) = delete; \
	UDNAAssetImportFactory(const UDNAAssetImportFactory&) = delete; \
	NO_API virtual ~UDNAAssetImportFactory();


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_17_PROLOG
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_20_INCLASS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDNAAssetImportFactory;

// ********** End Class UDNAAssetImportFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
