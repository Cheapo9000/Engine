// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Procedural/TG_Expression_Noise.h"

#ifdef TEXTUREGRAPH_TG_Expression_Noise_generated_h
#error "TG_Expression_Noise.generated.h already included, missing '#pragma once' in TG_Expression_Noise.h"
#endif
#define TEXTUREGRAPH_TG_Expression_Noise_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_Noise *****************************************************
struct Z_Construct_UClass_UTG_Expression_Noise_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Noise_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Noise_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Noise(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Noise_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Noise_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Noise, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Noise_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Noise)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Noise_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_Noise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Noise(UTG_Expression_Noise&&) = delete; \
	UTG_Expression_Noise(const UTG_Expression_Noise&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Noise); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Noise); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_Noise) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_Noise();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Noise_h_25_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Noise_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Noise_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Noise_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Noise;

// ********** End Class UTG_Expression_Noise *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Procedural_TG_Expression_Noise_h

// ********** Begin Enum ENoiseType ****************************************************************
#define FOREACH_ENUM_ENOISETYPE(op) \
	op(NOISETYPE_Simplex) \
	op(NOISETYPE_Perlin) \
	op(NOISETYPE_Worley1) \
	op(NOISETYPE_Worley2) \
	op(NOISETYPE_Worley3) 

enum ENoiseType : int;
template<> TEXTUREGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<ENoiseType>();
// ********** End Enum ENoiseType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
