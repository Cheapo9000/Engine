// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolUV.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureToolUV_generated_h
#error "FractureToolUV.generated.h already included, missing '#pragma once' in FractureToolUV.h"
#endif
#define FRACTUREEDITOR_FractureToolUV_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBoxProjectUVs); \
	DECLARE_FUNCTION(execDisableBoneColors); \
	DECLARE_FUNCTION(execBakeTexture); \
	DECLARE_FUNCTION(execLayoutUVs); \
	DECLARE_FUNCTION(execDeleteUVChannel); \
	DECLARE_FUNCTION(execAddUVChannel); \
	DECLARE_FUNCTION(execGetUVChannelNamesFunc);


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureAutoUVSettings(); \
	friend struct Z_Construct_UClass_UFractureAutoUVSettings_Statics; \
public: \
	DECLARE_CLASS(UFractureAutoUVSettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureAutoUVSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureAutoUVSettings(UFractureAutoUVSettings&&); \
	UFractureAutoUVSettings(const UFractureAutoUVSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureAutoUVSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureAutoUVSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureAutoUVSettings) \
	NO_API virtual ~UFractureAutoUVSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_61_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureAutoUVSettings>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_224_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolAutoUV(); \
	friend struct Z_Construct_UClass_UFractureToolAutoUV_Statics; \
public: \
	DECLARE_CLASS(UFractureToolAutoUV, UFractureModalTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolAutoUV)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_224_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFractureToolAutoUV(UFractureToolAutoUV&&); \
	UFractureToolAutoUV(const UFractureToolAutoUV&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolAutoUV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolAutoUV); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolAutoUV) \
	NO_API virtual ~UFractureToolAutoUV();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_220_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_224_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_224_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_224_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureToolAutoUV>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h


#define FOREACH_ENUM_EAUTOUVTEXTURERESOLUTION(op) \
	op(EAutoUVTextureResolution::Resolution16) \
	op(EAutoUVTextureResolution::Resolution32) \
	op(EAutoUVTextureResolution::Resolution64) \
	op(EAutoUVTextureResolution::Resolution128) \
	op(EAutoUVTextureResolution::Resolution256) \
	op(EAutoUVTextureResolution::Resolution512) \
	op(EAutoUVTextureResolution::Resolution1024) \
	op(EAutoUVTextureResolution::Resolution2048) \
	op(EAutoUVTextureResolution::Resolution4096) \
	op(EAutoUVTextureResolution::Resolution8192) 

enum class EAutoUVTextureResolution : int32;
template<> struct TIsUEnumClass<EAutoUVTextureResolution> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EAutoUVTextureResolution>();

#define FOREACH_ENUM_ETEXTURETYPE(op) \
	op(ETextureType::ThicknessAndSurfaceAttributes) \
	op(ETextureType::SpatialGradients) \
	op(ETextureType::Normals) 

enum class ETextureType;
template<> struct TIsUEnumClass<ETextureType> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<ETextureType>();

#define FOREACH_ENUM_ETARGETFACES(op) \
	op(ETargetFaces::InternalFaces) \
	op(ETargetFaces::InternalFacesAndSelectedMaterialIDs) \
	op(ETargetFaces::SelectedMaterialIDs) \
	op(ETargetFaces::ExternalFaces) \
	op(ETargetFaces::AllFaces) 

enum class ETargetFaces;
template<> struct TIsUEnumClass<ETargetFaces> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<ETargetFaces>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
