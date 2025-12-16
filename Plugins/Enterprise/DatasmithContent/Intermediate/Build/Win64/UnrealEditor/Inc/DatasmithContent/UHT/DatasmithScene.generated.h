// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithScene.h"

#ifdef DATASMITHCONTENT_DatasmithScene_generated_h
#error "DatasmithScene.generated.h already included, missing '#pragma once' in DatasmithScene.h"
#endif
#define DATASMITHCONTENT_DatasmithScene_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithScene **********************************************************
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithScene, DATASMITHCONTENT_API)


struct Z_Construct_UClass_UDatasmithScene_Statics;
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithScene(); \
	friend struct ::Z_Construct_UClass_UDatasmithScene_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHCONTENT_API UClass* ::Z_Construct_UClass_UDatasmithScene_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithContent"), Z_Construct_UClass_UDatasmithScene_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithScene) \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_25_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDatasmithScene*>(this); }


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithScene(UDatasmithScene&&) = delete; \
	UDatasmithScene(const UDatasmithScene&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, UDatasmithScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithScene); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDatasmithScene)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_22_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithScene;

// ********** End Class UDatasmithScene ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithScene_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
