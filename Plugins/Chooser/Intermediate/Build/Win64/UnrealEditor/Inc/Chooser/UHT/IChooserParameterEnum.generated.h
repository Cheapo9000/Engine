// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IChooserParameterEnum.h"

#ifdef CHOOSER_IChooserParameterEnum_generated_h
#error "IChooserParameterEnum.generated.h already included, missing '#pragma once' in IChooserParameterEnum.h"
#endif
#define CHOOSER_IChooserParameterEnum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UChooserParameterEnum ************************************************
struct Z_Construct_UClass_UChooserParameterEnum_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterEnum_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UChooserParameterEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserParameterEnum(UChooserParameterEnum&&) = delete; \
	UChooserParameterEnum(const UChooserParameterEnum&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UChooserParameterEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserParameterEnum); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserParameterEnum) \
	virtual ~UChooserParameterEnum() = default;


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChooserParameterEnum(); \
	friend struct ::Z_Construct_UClass_UChooserParameterEnum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UChooserParameterEnum_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserParameterEnum, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UChooserParameterEnum_NoRegister) \
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


class UChooserParameterEnum;

// ********** End Interface UChooserParameterEnum **************************************************

// ********** Begin ScriptStruct FChooserParameterEnumBase *****************************************
struct Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics;
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterBase Super;


struct FChooserParameterEnumBase;
// ********** End ScriptStruct FChooserParameterEnumBase *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_IChooserParameterEnum_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
