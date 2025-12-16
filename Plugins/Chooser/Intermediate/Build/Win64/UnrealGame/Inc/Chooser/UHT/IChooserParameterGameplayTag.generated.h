// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IChooserParameterGameplayTag.h"

#ifdef CHOOSER_IChooserParameterGameplayTag_generated_h
#error "IChooserParameterGameplayTag.generated.h already included, missing '#pragma once' in IChooserParameterGameplayTag.h"
#endif
#define CHOOSER_IChooserParameterGameplayTag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UChooserParameterGameplayTag *****************************************
struct Z_Construct_UClass_UChooserParameterGameplayTag_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterGameplayTag_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UChooserParameterGameplayTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserParameterGameplayTag(UChooserParameterGameplayTag&&) = delete; \
	UChooserParameterGameplayTag(const UChooserParameterGameplayTag&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UChooserParameterGameplayTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserParameterGameplayTag); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserParameterGameplayTag) \
	virtual ~UChooserParameterGameplayTag() = default;


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChooserParameterGameplayTag(); \
	friend struct ::Z_Construct_UClass_UChooserParameterGameplayTag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UChooserParameterGameplayTag_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserParameterGameplayTag, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UChooserParameterGameplayTag_NoRegister) \
	DECLARE_SERIALIZER(UChooserParameterGameplayTag)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChooserParameterGameplayTag() {} \
public: \
	typedef UChooserParameterGameplayTag UClassType; \
	typedef IChooserParameterGameplayTag ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_15_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChooserParameterGameplayTag;

// ********** End Interface UChooserParameterGameplayTag *******************************************

// ********** Begin ScriptStruct FChooserParameterGameplayTagBase **********************************
struct Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterBase Super;


struct FChooserParameterGameplayTagBase;
// ********** End ScriptStruct FChooserParameterGameplayTagBase ************************************

// ********** Begin ScriptStruct FChooserParameterGameplayTagQueryBase *****************************
struct Z_Construct_UScriptStruct_FChooserParameterGameplayTagQueryBase_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserParameterGameplayTagQueryBase_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterBase Super;


struct FChooserParameterGameplayTagQueryBase;
// ********** End ScriptStruct FChooserParameterGameplayTagQueryBase *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
