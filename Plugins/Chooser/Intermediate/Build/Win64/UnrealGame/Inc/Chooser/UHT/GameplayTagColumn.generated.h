// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagColumn.h"

#ifdef CHOOSER_GameplayTagColumn_generated_h
#error "GameplayTagColumn.generated.h already included, missing '#pragma once' in GameplayTagColumn.h"
#endif
#define CHOOSER_GameplayTagColumn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayTagContextProperty ***************************************
struct Z_Construct_UScriptStruct_FGameplayTagContextProperty_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagContextProperty_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterGameplayTagBase Super;


struct FGameplayTagContextProperty;
// ********** End ScriptStruct FGameplayTagContextProperty *****************************************

// ********** Begin ScriptStruct FGameplayTagColumn ************************************************
struct Z_Construct_UScriptStruct_FGameplayTagColumn_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagColumn_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserColumnBase Super;


struct FGameplayTagColumn;
// ********** End ScriptStruct FGameplayTagColumn **************************************************

// ********** Begin Class UDEPRECATED_ChooserParameterGameplayTag_ContextProperty ******************
struct Z_Construct_UClass_UDEPRECATED_ChooserParameterGameplayTag_ContextProperty_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterGameplayTag_ContextProperty_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_ChooserParameterGameplayTag_ContextProperty(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_ChooserParameterGameplayTag_ContextProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UDEPRECATED_ChooserParameterGameplayTag_ContextProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UDEPRECATED_ChooserParameterGameplayTag_ContextProperty_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty) \
	virtual UObject* _getUObject() const override { return const_cast<UDEPRECATED_ChooserParameterGameplayTag_ContextProperty*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UDEPRECATED_ChooserParameterGameplayTag_ContextProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_ChooserParameterGameplayTag_ContextProperty(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty&&) = delete; \
	UDEPRECATED_ChooserParameterGameplayTag_ContextProperty(const UDEPRECATED_ChooserParameterGameplayTag_ContextProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UDEPRECATED_ChooserParameterGameplayTag_ContextProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty) \
	CHOOSER_API virtual ~UDEPRECATED_ChooserParameterGameplayTag_ContextProperty();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_123_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_126_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_ChooserParameterGameplayTag_ContextProperty;

// ********** End Class UDEPRECATED_ChooserParameterGameplayTag_ContextProperty ********************

// ********** Begin Class UDEPRECATED_ChooserColumnGameplayTag *************************************
struct Z_Construct_UClass_UDEPRECATED_ChooserColumnGameplayTag_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnGameplayTag_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_ChooserColumnGameplayTag(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_ChooserColumnGameplayTag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UDEPRECATED_ChooserColumnGameplayTag_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_ChooserColumnGameplayTag, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UDEPRECATED_ChooserColumnGameplayTag_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_ChooserColumnGameplayTag) \
	virtual UObject* _getUObject() const override { return const_cast<UDEPRECATED_ChooserColumnGameplayTag*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_142_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_ChooserColumnGameplayTag(UDEPRECATED_ChooserColumnGameplayTag&&) = delete; \
	UDEPRECATED_ChooserColumnGameplayTag(const UDEPRECATED_ChooserColumnGameplayTag&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UDEPRECATED_ChooserColumnGameplayTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_ChooserColumnGameplayTag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_ChooserColumnGameplayTag) \
	CHOOSER_API virtual ~UDEPRECATED_ChooserColumnGameplayTag();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_139_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_142_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_ChooserColumnGameplayTag;

// ********** End Class UDEPRECATED_ChooserColumnGameplayTag ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h

// ********** Begin Enum EGameplayTagMatchDirection ************************************************
#define FOREACH_ENUM_EGAMEPLAYTAGMATCHDIRECTION(op) \
	op(EGameplayTagMatchDirection::RowValueInInput) \
	op(EGameplayTagMatchDirection::InputInRowValue) 

enum class EGameplayTagMatchDirection : uint8;
template<> struct TIsUEnumClass<EGameplayTagMatchDirection> { enum { Value = true }; };
template<> CHOOSER_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayTagMatchDirection>();
// ********** End Enum EGameplayTagMatchDirection **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
