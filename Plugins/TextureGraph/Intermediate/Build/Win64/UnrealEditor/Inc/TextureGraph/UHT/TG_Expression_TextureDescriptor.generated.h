// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Input/TG_Expression_TextureDescriptor.h"

#ifdef TEXTUREGRAPH_TG_Expression_TextureDescriptor_generated_h
#error "TG_Expression_TextureDescriptor.generated.h already included, missing '#pragma once' in TG_Expression_TextureDescriptor.h"
#endif
#define TEXTUREGRAPH_TG_Expression_TextureDescriptor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_TextureDescriptor *****************************************
struct Z_Construct_UClass_UTG_Expression_TextureDescriptor_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_TextureDescriptor_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TextureDescriptor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_TextureDescriptor(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_TextureDescriptor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_TextureDescriptor_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_TextureDescriptor, UTG_Expression_InputParam, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_TextureDescriptor_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_TextureDescriptor)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TextureDescriptor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_TextureDescriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_TextureDescriptor(UTG_Expression_TextureDescriptor&&) = delete; \
	UTG_Expression_TextureDescriptor(const UTG_Expression_TextureDescriptor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_TextureDescriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_TextureDescriptor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_TextureDescriptor) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_TextureDescriptor();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TextureDescriptor_h_11_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TextureDescriptor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TextureDescriptor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TextureDescriptor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_TextureDescriptor;

// ********** End Class UTG_Expression_TextureDescriptor *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_TextureDescriptor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
