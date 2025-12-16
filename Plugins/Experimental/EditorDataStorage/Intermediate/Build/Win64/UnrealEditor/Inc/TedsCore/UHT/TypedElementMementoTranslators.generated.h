// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Memento/TypedElementMementoTranslators.h"

#ifdef TEDSCORE_TypedElementMementoTranslators_generated_h
#error "TypedElementMementoTranslators.generated.h already included, missing '#pragma once' in TypedElementMementoTranslators.h"
#endif
#define TEDSCORE_TypedElementMementoTranslators_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTedsMementoTranslatorBase ***********************************************
struct Z_Construct_UClass_UTedsMementoTranslatorBase_Statics;
TEDSCORE_API UClass* Z_Construct_UClass_UTedsMementoTranslatorBase_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTedsMementoTranslatorBase(); \
	friend struct ::Z_Construct_UClass_UTedsMementoTranslatorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSCORE_API UClass* ::Z_Construct_UClass_UTedsMementoTranslatorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UTedsMementoTranslatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TedsCore"), Z_Construct_UClass_UTedsMementoTranslatorBase_NoRegister) \
	DECLARE_SERIALIZER(UTedsMementoTranslatorBase)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTedsMementoTranslatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTedsMementoTranslatorBase(UTedsMementoTranslatorBase&&) = delete; \
	UTedsMementoTranslatorBase(const UTedsMementoTranslatorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTedsMementoTranslatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTedsMementoTranslatorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTedsMementoTranslatorBase) \
	NO_API virtual ~UTedsMementoTranslatorBase();


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTedsMementoTranslatorBase;

// ********** End Class UTedsMementoTranslatorBase *************************************************

// ********** Begin Class UTedsDefaultMementoTranslator ********************************************
struct Z_Construct_UClass_UTedsDefaultMementoTranslator_Statics;
TEDSCORE_API UClass* Z_Construct_UClass_UTedsDefaultMementoTranslator_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTedsDefaultMementoTranslator(); \
	friend struct ::Z_Construct_UClass_UTedsDefaultMementoTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSCORE_API UClass* ::Z_Construct_UClass_UTedsDefaultMementoTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UTedsDefaultMementoTranslator, UTedsMementoTranslatorBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TedsCore"), Z_Construct_UClass_UTedsDefaultMementoTranslator_NoRegister) \
	DECLARE_SERIALIZER(UTedsDefaultMementoTranslator)


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTedsDefaultMementoTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTedsDefaultMementoTranslator(UTedsDefaultMementoTranslator&&) = delete; \
	UTedsDefaultMementoTranslator(const UTedsDefaultMementoTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTedsDefaultMementoTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTedsDefaultMementoTranslator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTedsDefaultMementoTranslator) \
	NO_API virtual ~UTedsDefaultMementoTranslator();


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_73_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTedsDefaultMementoTranslator;

// ********** End Class UTedsDefaultMementoTranslator **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Public_Memento_TypedElementMementoTranslators_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
