// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithCustomAction.h"

#ifdef DATASMITHCONTENT_DatasmithCustomAction_generated_h
#error "DatasmithCustomAction.generated.h already included, missing '#pragma once' in DatasmithCustomAction.h"
#endif
#define DATASMITHCONTENT_DatasmithCustomAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithCustomActionBase ***********************************************
struct Z_Construct_UClass_UDatasmithCustomActionBase_Statics;
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithCustomActionBase(); \
	friend struct ::Z_Construct_UClass_UDatasmithCustomActionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHCONTENT_API UClass* ::Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithCustomActionBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DatasmithContent"), Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithCustomActionBase)


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHCONTENT_API UDatasmithCustomActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithCustomActionBase(UDatasmithCustomActionBase&&) = delete; \
	UDatasmithCustomActionBase(const UDatasmithCustomActionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, UDatasmithCustomActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCustomActionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCustomActionBase) \
	DATASMITHCONTENT_API virtual ~UDatasmithCustomActionBase();


#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_63_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithCustomActionBase;

// ********** End Class UDatasmithCustomActionBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
