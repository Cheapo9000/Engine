// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IObjectChooser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_IObjectChooser_generated_h
#error "IObjectChooser.generated.h already included, missing '#pragma once' in IObjectChooser.h"
#endif
#define CHOOSER_IObjectChooser_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectChooser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectChooser(UObjectChooser&&); \
	UObjectChooser(const UObjectChooser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectChooser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectChooser); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectChooser) \
	NO_API virtual ~UObjectChooser();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObjectChooser(); \
	friend struct Z_Construct_UClass_UObjectChooser_Statics; \
public: \
	DECLARE_CLASS(UObjectChooser, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
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


template<> CHOOSER_API UClass* StaticClass<class UObjectChooser>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserEvaluationInputObject>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserEvaluationContext>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectChooserBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FObjectChooserBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_IObjectChooser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
