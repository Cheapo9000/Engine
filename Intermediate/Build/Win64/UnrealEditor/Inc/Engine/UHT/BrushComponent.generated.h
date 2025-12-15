// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BrushComponent.h"

#ifdef ENGINE_BrushComponent_generated_h
#error "BrushComponent.generated.h already included, missing '#pragma once' in BrushComponent.h"
#endif
#define ENGINE_BrushComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBrushComponent **********************************************************
struct Z_Construct_UClass_UBrushComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBrushComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBrushComponent(); \
	friend struct ::Z_Construct_UClass_UBrushComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBrushComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBrushComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBrushComponent_NoRegister) \
	DECLARE_SERIALIZER(UBrushComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBrushComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrushComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBrushComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBrushComponent(UBrushComponent&&) = delete; \
	UBrushComponent(const UBrushComponent&) = delete; \
	ENGINE_API virtual ~UBrushComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBrushComponent;

// ********** End Class UBrushComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
