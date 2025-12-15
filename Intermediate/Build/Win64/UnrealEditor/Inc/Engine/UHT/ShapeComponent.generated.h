// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ShapeComponent.h"

#ifdef ENGINE_ShapeComponent_generated_h
#error "ShapeComponent.generated.h already included, missing '#pragma once' in ShapeComponent.h"
#endif
#define ENGINE_ShapeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UShapeComponent **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetLineThickness);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UShapeComponent, ENGINE_API)


struct Z_Construct_UClass_UShapeComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUShapeComponent(); \
	friend struct ::Z_Construct_UClass_UShapeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UShapeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UShapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UShapeComponent_NoRegister) \
	DECLARE_SERIALIZER(UShapeComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UShapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShapeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UShapeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShapeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShapeComponent(UShapeComponent&&) = delete; \
	UShapeComponent(const UShapeComponent&) = delete; \
	ENGINE_API virtual ~UShapeComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShapeComponent;

// ********** End Class UShapeComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
