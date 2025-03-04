// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IChooserColumn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_IChooserColumn_generated_h
#error "IChooserColumn.generated.h already included, missing '#pragma once' in IChooserColumn.h"
#endif
#define CHOOSER_IChooserColumn_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChooserColumn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChooserColumn(UChooserColumn&&); \
	UChooserColumn(const UChooserColumn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChooserColumn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserColumn); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserColumn) \
	NO_API virtual ~UChooserColumn();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChooserColumn(); \
	friend struct Z_Construct_UClass_UChooserColumn_Statics; \
public: \
	DECLARE_CLASS(UChooserColumn, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UChooserColumn)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChooserColumn() {} \
public: \
	typedef UChooserColumn UClassType; \
	typedef IChooserColumn ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_13_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UChooserColumn>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserColumnBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserColumnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserColumn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
