// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IObjectChooser.h"

#ifdef CHOOSER_IObjectChooser_generated_h
#error "IObjectChooser.generated.h already included, missing '#pragma once' in IObjectChooser.h"
#endif
#define CHOOSER_IObjectChooser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UObjectChooser *******************************************************
struct Z_Construct_UClass_UObjectChooser_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UObjectChooser_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UObjectChooser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectChooser(UObjectChooser&&) = delete; \
	UObjectChooser(const UObjectChooser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UObjectChooser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectChooser); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectChooser) \
	virtual ~UObjectChooser() = default;


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObjectChooser(); \
	friend struct ::Z_Construct_UClass_UObjectChooser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UObjectChooser_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectChooser, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UObjectChooser_NoRegister) \
	DECLARE_SERIALIZER(UObjectChooser)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObjectChooser() {} \
public: \
	typedef UObjectChooser UClassType; \
	typedef IObjectChooser ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_20_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectChooser;

// ********** End Interface UObjectChooser *********************************************************

// ********** Begin ScriptStruct FChooserEvaluationInputObject *************************************
struct Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


struct FChooserEvaluationInputObject;
// ********** End ScriptStruct FChooserEvaluationInputObject ***************************************

// ********** Begin ScriptStruct FChooserEvaluationContext *****************************************
struct Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


struct FChooserEvaluationContext;
// ********** End ScriptStruct FChooserEvaluationContext *******************************************

// ********** Begin ScriptStruct FObjectChooserBase ************************************************
struct Z_Construct_UScriptStruct_FObjectChooserBase_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectChooserBase_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


struct FObjectChooserBase;
// ********** End ScriptStruct FObjectChooserBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
