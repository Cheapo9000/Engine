// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/Material.h"

#ifdef ENGINE_Material_generated_h
#error "Material.generated.h already included, missing '#pragma once' in Material.h"
#endif
#define ENGINE_Material_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FParameterGroupData ***********************************************
struct Z_Construct_UScriptStruct_FParameterGroupData_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_281_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParameterGroupData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParameterGroupData;
// ********** End ScriptStruct FParameterGroupData *************************************************

// ********** Begin Class UMaterialEditorOnlyData **************************************************
struct Z_Construct_UClass_UMaterialEditorOnlyData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialEditorOnlyData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_310_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditorOnlyData(); \
	friend struct ::Z_Construct_UClass_UMaterialEditorOnlyData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialEditorOnlyData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialEditorOnlyData, UMaterialInterfaceEditorOnlyData, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialEditorOnlyData_NoRegister) \
	DECLARE_SERIALIZER(UMaterialEditorOnlyData)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_310_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialEditorOnlyData(UMaterialEditorOnlyData&&) = delete; \
	UMaterialEditorOnlyData(const UMaterialEditorOnlyData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialEditorOnlyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorOnlyData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialEditorOnlyData) \
	ENGINE_API virtual ~UMaterialEditorOnlyData();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_307_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_310_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_310_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_310_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialEditorOnlyData;

// ********** End Class UMaterialEditorOnlyData ****************************************************

// ********** Begin Class UMaterial ****************************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_433_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterial, ENGINE_API)


struct Z_Construct_UClass_UMaterial_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_433_INCLASS \
private: \
	static void StaticRegisterNativesUMaterial(); \
	friend struct ::Z_Construct_UClass_UMaterial_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterial_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterial, UMaterialInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterial_NoRegister) \
	DECLARE_SERIALIZER(UMaterial) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_433_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_433_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterial(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterial) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterial); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterial(UMaterial&&) = delete; \
	UMaterial(const UMaterial&) = delete; \
	ENGINE_API virtual ~UMaterial();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_430_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_433_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_433_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h_433_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterial;

// ********** End Class UMaterial ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_Material_h

// ********** Begin Enum EDecalBlendMode ***********************************************************
#define FOREACH_ENUM_EDECALBLENDMODE(op) \
	op(DBM_Translucent) \
	op(DBM_Stain) \
	op(DBM_Normal) \
	op(DBM_Emissive) \
	op(DBM_DBuffer_ColorNormalRoughness) \
	op(DBM_DBuffer_Color) \
	op(DBM_DBuffer_ColorNormal) \
	op(DBM_DBuffer_ColorRoughness) \
	op(DBM_DBuffer_Normal) \
	op(DBM_DBuffer_NormalRoughness) \
	op(DBM_DBuffer_Roughness) \
	op(DBM_DBuffer_Emissive) \
	op(DBM_DBuffer_AlphaComposite) \
	op(DBM_DBuffer_EmissiveAlphaComposite) \
	op(DBM_Volumetric_DistanceFunction) \
	op(DBM_AlphaComposite) \
	op(DBM_AmbientOcclusion) 

enum EDecalBlendMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDecalBlendMode>();
// ********** End Enum EDecalBlendMode *************************************************************

// ********** Begin Enum EMaterialDecalResponse ****************************************************
#define FOREACH_ENUM_EMATERIALDECALRESPONSE(op) \
	op(MDR_None) \
	op(MDR_ColorNormalRoughness) \
	op(MDR_Color) \
	op(MDR_ColorNormal) \
	op(MDR_ColorRoughness) \
	op(MDR_Normal) \
	op(MDR_NormalRoughness) \
	op(MDR_Roughness) 

enum EMaterialDecalResponse : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialDecalResponse>();
// ********** End Enum EMaterialDecalResponse ******************************************************

// ********** Begin Enum EMaterialTranslucencyPass *************************************************
#define FOREACH_ENUM_EMATERIALTRANSLUCENCYPASS(op) \
	op(MTP_BeforeDOF) \
	op(MTP_AfterDOF) \
	op(MTP_AfterMotionBlur) 

enum EMaterialTranslucencyPass : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialTranslucencyPass>();
// ********** End Enum EMaterialTranslucencyPass ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
