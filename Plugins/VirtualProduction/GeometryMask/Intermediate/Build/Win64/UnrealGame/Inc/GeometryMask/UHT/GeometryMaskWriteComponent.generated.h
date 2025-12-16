// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskWriteComponent.h"

#ifdef GEOMETRYMASK_GeometryMaskWriteComponent_generated_h
#error "GeometryMaskWriteComponent.generated.h already included, missing '#pragma once' in GeometryMaskWriteComponent.h"
#endif
#define GEOMETRYMASK_GeometryMaskWriteComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGeometryMaskBatchElementData *************************************
struct Z_Construct_UScriptStruct_FGeometryMaskBatchElementData_Statics;
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWriteComponent_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryMaskBatchElementData_Statics; \
	GEOMETRYMASK_API static class UScriptStruct* StaticStruct();


struct FGeometryMaskBatchElementData;
// ********** End ScriptStruct FGeometryMaskBatchElementData ***************************************

// ********** Begin Class UGeometryMaskWriteMeshComponent ******************************************
struct Z_Construct_UClass_UGeometryMaskWriteMeshComponent_Statics;
GEOMETRYMASK_API UClass* Z_Construct_UClass_UGeometryMaskWriteMeshComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWriteComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskWriteMeshComponent(); \
	friend struct ::Z_Construct_UClass_UGeometryMaskWriteMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMASK_API UClass* ::Z_Construct_UClass_UGeometryMaskWriteMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryMaskWriteMeshComponent, UGeometryMaskCanvasReferenceComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryMask"), Z_Construct_UClass_UGeometryMaskWriteMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UGeometryMaskWriteMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryMaskWriteMeshComponent*>(this); }


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWriteComponent_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryMaskWriteMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryMaskWriteMeshComponent(UGeometryMaskWriteMeshComponent&&) = delete; \
	UGeometryMaskWriteMeshComponent(const UGeometryMaskWriteMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryMaskWriteMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskWriteMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryMaskWriteMeshComponent) \
	NO_API virtual ~UGeometryMaskWriteMeshComponent();


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWriteComponent_h_46_PROLOG
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWriteComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWriteComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWriteComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryMaskWriteMeshComponent;

// ********** End Class UGeometryMaskWriteMeshComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskWriteComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
