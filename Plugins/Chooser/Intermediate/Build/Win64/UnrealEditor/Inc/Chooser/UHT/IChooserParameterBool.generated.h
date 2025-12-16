// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IChooserParameterBool.h"

#ifdef CHOOSER_IChooserParameterBool_generated_h
#error "IChooserParameterBool.generated.h already included, missing '#pragma once' in IChooserParameterBool.h"
#endif
#define CHOOSER_IChooserParameterBool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UChooserParameterBool ************************************************
struct Z_Construct_UClass_UChooserParameterBool_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterBool_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UChooserParameterBool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserParameterBool(UChooserParameterBool&&) = delete; \
	UChooserParameterBool(const UChooserParameterBool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UChooserParameterBool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserParameterBool); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserParameterBool) \
	virtual ~UChooserParameterBool() = default;


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChooserParameterBool(); \
	friend struct ::Z_Construct_UClass_UChooserParameterBool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UChooserParameterBool_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserParameterBool, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UChooserParameterBool_NoRegister) \
	DECLARE_SERIALIZER(UChooserParameterBool)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChooserParameterBool() {} \
public: \
	typedef UChooserParameterBool UClassType; \
	typedef IChooserParameterBool ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_12_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChooserParameterBool;

// ********** End Interface UChooserParameterBool **************************************************

// ********** Begin ScriptStruct FChooserParameterBoolBase *****************************************
struct Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterBase Super;


struct FChooserParameterBoolBase;
// ********** End ScriptStruct FChooserParameterBoolBase *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterBool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
