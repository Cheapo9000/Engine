// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionTrailTool.h"

#ifdef SEQUENCERANIMTOOLS_MotionTrailTool_generated_h
#error "MotionTrailTool.generated.h already included, missing '#pragma once' in MotionTrailTool.h"
#endif
#define SEQUENCERANIMTOOLS_MotionTrailTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMotionTrailToolBuilder **************************************************
struct Z_Construct_UClass_UMotionTrailToolBuilder_Statics;
SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_UMotionTrailToolBuilder_NoRegister();

#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionTrailToolBuilder(); \
	friend struct ::Z_Construct_UClass_UMotionTrailToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERANIMTOOLS_API UClass* ::Z_Construct_UClass_UMotionTrailToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionTrailToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SequencerAnimTools"), Z_Construct_UClass_UMotionTrailToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UMotionTrailToolBuilder)


#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionTrailToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionTrailToolBuilder(UMotionTrailToolBuilder&&) = delete; \
	UMotionTrailToolBuilder(const UMotionTrailToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrailToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrailToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrailToolBuilder) \
	NO_API virtual ~UMotionTrailToolBuilder();


#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_73_PROLOG
#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionTrailToolBuilder;

// ********** End Class UMotionTrailToolBuilder ****************************************************

// ********** Begin Class UMotionTrailTool *********************************************************
struct Z_Construct_UClass_UMotionTrailTool_Statics;
SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_UMotionTrailTool_NoRegister();

#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionTrailTool(); \
	friend struct ::Z_Construct_UClass_UMotionTrailTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCERANIMTOOLS_API UClass* ::Z_Construct_UClass_UMotionTrailTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionTrailTool, UMultiSelectionTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SequencerAnimTools"), Z_Construct_UClass_UMotionTrailTool_NoRegister) \
	DECLARE_SERIALIZER(UMotionTrailTool) \
	virtual UObject* _getUObject() const override { return const_cast<UMotionTrailTool*>(this); }


#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionTrailTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionTrailTool(UMotionTrailTool&&) = delete; \
	UMotionTrailTool(const UMotionTrailTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrailTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrailTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMotionTrailTool) \
	NO_API virtual ~UMotionTrailTool();


#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_120_PROLOG
#define FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionTrailTool;

// ********** End Class UMotionTrailTool ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
