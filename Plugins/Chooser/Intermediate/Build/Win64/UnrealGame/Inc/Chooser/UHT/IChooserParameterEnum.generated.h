// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IChooserParameterEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_IChooserParameterEnum_generated_h
#error "IChooserParameterEnum.generated.h already included, missing '#pragma once' in IChooserParameterEnum.h"
#endif
#define CHOOSER_IChooserParameterEnum_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChooserParameterEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChooserParameterEnum(UChooserParameterEnum&&); \
	UChooserParameterEnum(const UChooserParameterEnum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChooserParameterEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserParameterEnum); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserParameterEnum) \
	NO_API virtual ~UChooserParameterEnum();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChooserParameterEnum(); \
	friend struct Z_Construct_UClass_UChooserParameterEnum_Statics; \
public: \
	DECLARE_CLASS(UChooserParameterEnum, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Chooser"), NO_API) \
	DECLARE_SERIALIZER(UChooserParameterEnum)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChooserParameterEnum() {} \
public: \
	typedef UChooserParameterEnum UClassType; \
	typedef IChooserParameterEnum ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_11_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UChooserParameterEnum>();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserParameterEnumBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
