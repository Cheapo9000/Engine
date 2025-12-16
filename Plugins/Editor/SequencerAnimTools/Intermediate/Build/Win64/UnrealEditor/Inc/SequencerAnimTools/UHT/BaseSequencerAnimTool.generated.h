// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseSequencerAnimTool.h"

#ifdef SEQUENCERANIMTOOLS_BaseSequencerAnimTool_generated_h
#error "BaseSequencerAnimTool.generated.h already included, missing '#pragma once' in BaseSequencerAnimTool.h"
#endif
#define SEQUENCERANIMTOOLS_BaseSequencerAnimTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UBaseSequencerAnimTool ***********************************************
struct Z_Construct_UClass_UBaseSequencerAnimTool_Statics;
SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_UBaseSequencerAnimTool_NoRegister();

#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERANIMTOOLS_API UBaseSequencerAnimTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseSequencerAnimTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERANIMTOOLS_API, UBaseSequencerAnimTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseSequencerAnimTool); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseSequencerAnimTool(UBaseSequencerAnimTool&&) = delete; \
	UBaseSequencerAnimTool(const UBaseSequencerAnimTool&) = delete; \
	virtual ~UBaseSequencerAnimTool() = default;


#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBaseSequencerAnimTool(); \
	friend struct ::Z_Construct_UClass_UBaseSequencerAnimTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERANIMTOOLS_API UClass* ::Z_Construct_UClass_UBaseSequencerAnimTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseSequencerAnimTool, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SequencerAnimTools"), Z_Construct_UClass_UBaseSequencerAnimTool_NoRegister) \
	DECLARE_SERIALIZER(UBaseSequencerAnimTool)


#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IBaseSequencerAnimTool() {} \
public: \
	typedef UBaseSequencerAnimTool UClassType; \
	typedef IBaseSequencerAnimTool ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h_17_PROLOG
#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseSequencerAnimTool;

// ********** End Interface UBaseSequencerAnimTool *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_BaseSequencerAnimTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
