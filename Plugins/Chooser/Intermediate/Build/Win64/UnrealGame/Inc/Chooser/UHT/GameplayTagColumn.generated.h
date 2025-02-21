// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagColumn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_GameplayTagColumn_generated_h
#error "GameplayTagColumn.generated.h already included, missing '#pragma once' in GameplayTagColumn.h"
#endif
#define CHOOSER_GameplayTagColumn_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagContextProperty_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterGameplayTagBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FGameplayTagContextProperty>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagColumn_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FChooserColumnBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FGameplayTagColumn>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_ChooserParameterGameplayTag_ContextProperty(); \
	friend struct Z_Construct_UClass_UDEPRECATED_ChooserParameterGameplayTag_ContextProperty_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty) \
	virtual UObject* _getUObject() const override { return const_cast<UDEPRECATED_ChooserParameterGameplayTag_ContextProperty*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_ChooserParameterGameplayTag_ContextProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_ChooserParameterGameplayTag_ContextProperty(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty&&); \
	UDEPRECATED_ChooserParameterGameplayTag_ContextProperty(const UDEPRECATED_ChooserParameterGameplayTag_ContextProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_ChooserParameterGameplayTag_ContextProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_ChooserParameterGameplayTag_ContextProperty) \
	NO_API virtual ~UDEPRECATED_ChooserParameterGameplayTag_ContextProperty();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_121_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UDEPRECATED_ChooserParameterGameplayTag_ContextProperty>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_ChooserColumnGameplayTag(); \
	friend struct Z_Construct_UClass_UDEPRECATED_ChooserColumnGameplayTag_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_ChooserColumnGameplayTag, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_ChooserColumnGameplayTag) \
	virtual UObject* _getUObject() const override { return const_cast<UDEPRECATED_ChooserColumnGameplayTag*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_140_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_ChooserColumnGameplayTag(UDEPRECATED_ChooserColumnGameplayTag&&); \
	UDEPRECATED_ChooserColumnGameplayTag(const UDEPRECATED_ChooserColumnGameplayTag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_ChooserColumnGameplayTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_ChooserColumnGameplayTag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_ChooserColumnGameplayTag) \
	NO_API virtual ~UDEPRECATED_ChooserColumnGameplayTag();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_137_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_140_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UDEPRECATED_ChooserColumnGameplayTag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Internal_GameplayTagColumn_h


#define FOREACH_ENUM_EGAMEPLAYTAGMATCHDIRECTION(op) \
	op(EGameplayTagMatchDirection::RowValueInInput) \
	op(EGameplayTagMatchDirection::InputInRowValue) 

enum class EGameplayTagMatchDirection : uint8;
template<> struct TIsUEnumClass<EGameplayTagMatchDirection> { enum { Value = true }; };
template<> CHOOSER_API UEnum* StaticEnum<EGameplayTagMatchDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
