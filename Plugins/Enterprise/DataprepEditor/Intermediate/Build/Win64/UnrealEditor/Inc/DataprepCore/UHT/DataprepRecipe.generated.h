// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepRecipe.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef DATAPREPCORE_DataprepRecipe_generated_h
#error "DataprepRecipe.generated.h already included, missing '#pragma once' in DataprepRecipe.h"
#endif
#define DATAPREPCORE_DataprepRecipe_generated_h

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssets); \
	DECLARE_FUNCTION(execGetActors);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_16_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_DataprepRecipe(); \
	friend struct Z_Construct_UClass_UDEPRECATED_DataprepRecipe_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_DataprepRecipe, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_DataprepRecipe)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_DataprepRecipe(UDEPRECATED_DataprepRecipe&&); \
	UDEPRECATED_DataprepRecipe(const UDEPRECATED_DataprepRecipe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_DataprepRecipe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_DataprepRecipe); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDEPRECATED_DataprepRecipe) \
	NO_API virtual ~UDEPRECATED_DataprepRecipe();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_13_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDEPRECATED_DataprepRecipe>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepRecipe_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
