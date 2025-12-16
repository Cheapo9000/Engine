// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimToTextureDataAsset.h"

#ifdef ANIMTOTEXTURE_AnimToTextureDataAsset_generated_h
#error "AnimToTextureDataAsset.generated.h already included, missing '#pragma once' in AnimToTextureDataAsset.h"
#endif
#define ANIMTOTEXTURE_AnimToTextureDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class USkeletalMesh;
class UStaticMesh;
class UTexture2D;

// ********** Begin ScriptStruct FAnimToTextureAnimSequenceInfo ************************************
struct Z_Construct_UScriptStruct_FAnimToTextureAnimSequenceInfo_Statics;
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimToTextureAnimSequenceInfo_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


struct FAnimToTextureAnimSequenceInfo;
// ********** End ScriptStruct FAnimToTextureAnimSequenceInfo **************************************

// ********** Begin ScriptStruct FAnimToTextureAnimInfo ********************************************
struct Z_Construct_UScriptStruct_FAnimToTextureAnimInfo_Statics;
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimToTextureAnimInfo_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


struct FAnimToTextureAnimInfo;
// ********** End ScriptStruct FAnimToTextureAnimInfo **********************************************

// ********** Begin Class UAnimToTextureDataAsset **************************************************
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetBoneWeightTexture); \
	DECLARE_FUNCTION(execBP_GetBoneRotationTexture); \
	DECLARE_FUNCTION(execBP_GetBonePositionTexture); \
	DECLARE_FUNCTION(execBP_GetSkeletalMesh); \
	DECLARE_FUNCTION(execBP_GetStaticMesh); \
	DECLARE_FUNCTION(execResetInfo); \
	DECLARE_FUNCTION(execGetIndexFromAnimSequence);


struct Z_Construct_UClass_UAnimToTextureDataAsset_Statics;
ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimToTextureDataAsset(); \
	friend struct ::Z_Construct_UClass_UAnimToTextureDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMTOTEXTURE_API UClass* ::Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimToTextureDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTexture"), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UAnimToTextureDataAsset)


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMTOTEXTURE_API UAnimToTextureDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimToTextureDataAsset(UAnimToTextureDataAsset&&) = delete; \
	UAnimToTextureDataAsset(const UAnimToTextureDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMTOTEXTURE_API, UAnimToTextureDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureDataAsset) \
	ANIMTOTEXTURE_API virtual ~UAnimToTextureDataAsset();


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_111_PROLOG
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_115_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimToTextureDataAsset;

// ********** End Class UAnimToTextureDataAsset ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h

// ********** Begin Enum EAnimToTextureMode ********************************************************
#define FOREACH_ENUM_EANIMTOTEXTUREMODE(op) \
	op(EAnimToTextureMode::Vertex) \
	op(EAnimToTextureMode::Bone) 

enum class EAnimToTextureMode : uint8;
template<> struct TIsUEnumClass<EAnimToTextureMode> { enum { Value = true }; };
template<> ANIMTOTEXTURE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimToTextureMode>();
// ********** End Enum EAnimToTextureMode **********************************************************

// ********** Begin Enum EAnimToTexturePrecision ***************************************************
#define FOREACH_ENUM_EANIMTOTEXTUREPRECISION(op) \
	op(EAnimToTexturePrecision::EightBits) \
	op(EAnimToTexturePrecision::SixteenBits) 

enum class EAnimToTexturePrecision : uint8;
template<> struct TIsUEnumClass<EAnimToTexturePrecision> { enum { Value = true }; };
template<> ANIMTOTEXTURE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimToTexturePrecision>();
// ********** End Enum EAnimToTexturePrecision *****************************************************

// ********** Begin Enum EAnimToTextureNumBoneInfluences *******************************************
#define FOREACH_ENUM_EANIMTOTEXTURENUMBONEINFLUENCES(op) \
	op(EAnimToTextureNumBoneInfluences::One) \
	op(EAnimToTextureNumBoneInfluences::Two) \
	op(EAnimToTextureNumBoneInfluences::Four) 

enum class EAnimToTextureNumBoneInfluences : uint8;
template<> struct TIsUEnumClass<EAnimToTextureNumBoneInfluences> { enum { Value = true }; };
template<> ANIMTOTEXTURE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAnimToTextureNumBoneInfluences>();
// ********** End Enum EAnimToTextureNumBoneInfluences *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
