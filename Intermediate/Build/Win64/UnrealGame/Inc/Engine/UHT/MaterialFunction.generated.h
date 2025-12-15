// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialFunction.h"

#ifdef ENGINE_MaterialFunction_generated_h
#error "MaterialFunction.generated.h already included, missing '#pragma once' in MaterialFunction.h"
#endif
#define ENGINE_MaterialFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialFunctionEditorOnlyData ******************************************
struct Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionEditorOnlyData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialFunctionEditorOnlyData(); \
	friend struct ::Z_Construct_UClass_UMaterialFunctionEditorOnlyData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialFunctionEditorOnlyData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialFunctionEditorOnlyData, UMaterialFunctionInterfaceEditorOnlyData, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialFunctionEditorOnlyData_NoRegister) \
	DECLARE_SERIALIZER(UMaterialFunctionEditorOnlyData)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunctionEditorOnlyData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialFunctionEditorOnlyData(UMaterialFunctionEditorOnlyData&&) = delete; \
	UMaterialFunctionEditorOnlyData(const UMaterialFunctionEditorOnlyData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunctionEditorOnlyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionEditorOnlyData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionEditorOnlyData) \
	ENGINE_API virtual ~UMaterialFunctionEditorOnlyData();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialFunctionEditorOnlyData;

// ********** End Class UMaterialFunctionEditorOnlyData ********************************************

// ********** Begin Class UMaterialFunction ********************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunction, ENGINE_API)


struct Z_Construct_UClass_UMaterialFunction_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialFunction(); \
	friend struct ::Z_Construct_UClass_UMaterialFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialFunction, UMaterialFunctionInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialFunction_NoRegister) \
	DECLARE_SERIALIZER(UMaterialFunction) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_41_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunction); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialFunction(UMaterialFunction&&) = delete; \
	UMaterialFunction(const UMaterialFunction&) = delete; \
	ENGINE_API virtual ~UMaterialFunction();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_38_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_41_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialFunction;

// ********** End Class UMaterialFunction **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
