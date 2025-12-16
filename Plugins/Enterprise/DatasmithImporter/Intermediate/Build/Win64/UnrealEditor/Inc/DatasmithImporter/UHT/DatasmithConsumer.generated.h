// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithConsumer.h"

#ifdef DATASMITHIMPORTER_DatasmithConsumer_generated_h
#error "DatasmithConsumer.generated.h already included, missing '#pragma once' in DatasmithConsumer.h"
#endif
#define DATASMITHIMPORTER_DatasmithConsumer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDatasmithScene;

// ********** Begin Class UDatasmithConsumer *******************************************************
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDatasmithScene);


struct Z_Construct_UClass_UDatasmithConsumer_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithConsumer_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithConsumer(); \
	friend struct ::Z_Construct_UClass_UDatasmithConsumer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UDatasmithConsumer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithConsumer, UDataprepContentConsumer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UDatasmithConsumer_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithConsumer)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithConsumer(UDatasmithConsumer&&) = delete; \
	UDatasmithConsumer(const UDatasmithConsumer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithConsumer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithConsumer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDatasmithConsumer) \
	NO_API virtual ~UDatasmithConsumer();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_26_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithConsumer;

// ********** End Class UDatasmithConsumer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithConsumer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
