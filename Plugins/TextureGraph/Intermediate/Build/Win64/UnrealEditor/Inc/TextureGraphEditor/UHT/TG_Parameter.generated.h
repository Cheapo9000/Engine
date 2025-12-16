// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_Parameter.h"

#ifdef TEXTUREGRAPHEDITOR_TG_Parameter_generated_h
#error "TG_Parameter.generated.h already included, missing '#pragma once' in TG_Parameter.h"
#endif
#define TEXTUREGRAPHEDITOR_TG_Parameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTG_ParameterInfo *************************************************
struct Z_Construct_UScriptStruct_FTG_ParameterInfo_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_TG_Parameter_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTG_ParameterInfo_Statics; \
	TEXTUREGRAPHEDITOR_API static class UScriptStruct* StaticStruct();


struct FTG_ParameterInfo;
// ********** End ScriptStruct FTG_ParameterInfo ***************************************************

// ********** Begin Class UTG_Parameters ***********************************************************
struct Z_Construct_UClass_UTG_Parameters_Statics;
TEXTUREGRAPHEDITOR_API UClass* Z_Construct_UClass_UTG_Parameters_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_TG_Parameter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Parameters(); \
	friend struct ::Z_Construct_UClass_UTG_Parameters_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHEDITOR_API UClass* ::Z_Construct_UClass_UTG_Parameters_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Parameters, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEditor"), Z_Construct_UClass_UTG_Parameters_NoRegister) \
	DECLARE_SERIALIZER(UTG_Parameters)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_TG_Parameter_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTG_Parameters(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Parameters(UTG_Parameters&&) = delete; \
	UTG_Parameters(const UTG_Parameters&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTG_Parameters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Parameters); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Parameters) \
	NO_API virtual ~UTG_Parameters();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_TG_Parameter_h_23_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_TG_Parameter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_TG_Parameter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_TG_Parameter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Parameters;

// ********** End Class UTG_Parameters *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_TG_Parameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
