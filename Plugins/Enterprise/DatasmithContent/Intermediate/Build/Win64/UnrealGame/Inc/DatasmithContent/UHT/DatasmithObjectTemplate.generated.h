// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectTemplates/DatasmithObjectTemplate.h"

#ifdef DATASMITHCONTENT_DatasmithObjectTemplate_generated_h
#error "DatasmithObjectTemplate.generated.h already included, missing '#pragma once' in DatasmithObjectTemplate.h"
#endif
#define DATASMITHCONTENT_DatasmithObjectTemplate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithObjectTemplate *************************************************
struct Z_Construct_UClass_UDatasmithObjectTemplate_Statics;
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithObjectTemplate(); \
	friend struct ::Z_Construct_UClass_UDatasmithObjectTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHCONTENT_API UClass* ::Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithObjectTemplate, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DatasmithContent"), Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithObjectTemplate)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithObjectTemplate(UDatasmithObjectTemplate&&) = delete; \
	UDatasmithObjectTemplate(const UDatasmithObjectTemplate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, UDatasmithObjectTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithObjectTemplate); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDatasmithObjectTemplate) \
	DATASMITHCONTENT_API virtual ~UDatasmithObjectTemplate();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_11_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithObjectTemplate;

// ********** End Class UDatasmithObjectTemplate ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
