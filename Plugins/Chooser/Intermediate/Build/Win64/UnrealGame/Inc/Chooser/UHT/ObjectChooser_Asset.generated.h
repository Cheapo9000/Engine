// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectChooser_Asset.h"

#ifdef CHOOSER_ObjectChooser_Asset_generated_h
#error "ObjectChooser_Asset.generated.h already included, missing '#pragma once' in ObjectChooser_Asset.h"
#endif
#define CHOOSER_ObjectChooser_Asset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAssetChooser *****************************************************
struct Z_Construct_UScriptStruct_FAssetChooser_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetChooser_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectChooserBase Super;


struct FAssetChooser;
// ********** End ScriptStruct FAssetChooser *******************************************************

// ********** Begin ScriptStruct FSoftAssetChooser *************************************************
struct Z_Construct_UScriptStruct_FSoftAssetChooser_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoftAssetChooser_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectChooserBase Super;


struct FSoftAssetChooser;
// ********** End ScriptStruct FSoftAssetChooser ***************************************************

// ********** Begin Class UDEPRECATED_ObjectChooser_Asset ******************************************
struct Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_ObjectChooser_Asset(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_ObjectChooser_Asset, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UDEPRECATED_ObjectChooser_Asset_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_ObjectChooser_Asset) \
	virtual UObject* _getUObject() const override { return const_cast<UDEPRECATED_ObjectChooser_Asset*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UDEPRECATED_ObjectChooser_Asset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_ObjectChooser_Asset(UDEPRECATED_ObjectChooser_Asset&&) = delete; \
	UDEPRECATED_ObjectChooser_Asset(const UDEPRECATED_ObjectChooser_Asset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UDEPRECATED_ObjectChooser_Asset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_ObjectChooser_Asset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_ObjectChooser_Asset) \
	CHOOSER_API virtual ~UDEPRECATED_ObjectChooser_Asset();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_47_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_ObjectChooser_Asset;

// ********** End Class UDEPRECATED_ObjectChooser_Asset ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_ObjectChooser_Asset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
