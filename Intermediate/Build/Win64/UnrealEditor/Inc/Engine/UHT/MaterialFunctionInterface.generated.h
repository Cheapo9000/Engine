// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialFunctionInterface.h"

#ifdef ENGINE_MaterialFunctionInterface_generated_h
#error "MaterialFunctionInterface.generated.h already included, missing '#pragma once' in MaterialFunctionInterface.h"
#endif
#define ENGINE_MaterialFunctionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialFunctionInterfaceEditorOnlyData *********************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunctionInterfaceEditorOnlyData, NO_API)


struct Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialFunctionInterfaceEditorOnlyData(); \
	friend struct ::Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialFunctionInterfaceEditorOnlyData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_NoRegister) \
	DECLARE_SERIALIZER(UMaterialFunctionInterfaceEditorOnlyData) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_46_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialFunctionInterfaceEditorOnlyData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialFunctionInterfaceEditorOnlyData(UMaterialFunctionInterfaceEditorOnlyData&&) = delete; \
	UMaterialFunctionInterfaceEditorOnlyData(const UMaterialFunctionInterfaceEditorOnlyData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialFunctionInterfaceEditorOnlyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionInterfaceEditorOnlyData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionInterfaceEditorOnlyData) \
	NO_API virtual ~UMaterialFunctionInterfaceEditorOnlyData();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_43_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialFunctionInterfaceEditorOnlyData;

// ********** End Class UMaterialFunctionInterfaceEditorOnlyData ***********************************

// ********** Begin Class UMaterialFunctionInterface ***********************************************
struct Z_Construct_UClass_UMaterialFunctionInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialFunctionInterface(); \
	friend struct ::Z_Construct_UClass_UMaterialFunctionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialFunctionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialFunctionInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister) \
	DECLARE_SERIALIZER(UMaterialFunctionInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunctionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialFunctionInterface(UMaterialFunctionInterface&&) = delete; \
	UMaterialFunctionInterface(const UMaterialFunctionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunctionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionInterface) \
	ENGINE_API virtual ~UMaterialFunctionInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_57_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialFunctionInterface;

// ********** End Class UMaterialFunctionInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialFunctionInterface_h

// ********** Begin Enum EMaterialFunctionUsage ****************************************************
#define FOREACH_ENUM_EMATERIALFUNCTIONUSAGE(op) \
	op(EMaterialFunctionUsage::Default) \
	op(EMaterialFunctionUsage::MaterialLayer) \
	op(EMaterialFunctionUsage::MaterialLayerBlend) 

enum class EMaterialFunctionUsage : uint8;
template<> struct TIsUEnumClass<EMaterialFunctionUsage> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialFunctionUsage>();
// ********** End Enum EMaterialFunctionUsage ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
