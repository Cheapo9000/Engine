// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/VectorFieldComponent.h"

#ifdef ENGINE_VectorFieldComponent_generated_h
#error "VectorFieldComponent.generated.h already included, missing '#pragma once' in VectorFieldComponent.h"
#endif
#define ENGINE_VectorFieldComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVectorFieldComponent ****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetIntensity);


struct Z_Construct_UClass_UVectorFieldComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUVectorFieldComponent(); \
	friend struct ::Z_Construct_UClass_UVectorFieldComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVectorFieldComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVectorFieldComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVectorFieldComponent_NoRegister) \
	DECLARE_SERIALIZER(UVectorFieldComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVectorFieldComponent(UVectorFieldComponent&&) = delete; \
	UVectorFieldComponent(const UVectorFieldComponent&) = delete; \
	ENGINE_API virtual ~UVectorFieldComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVectorFieldComponent;

// ********** End Class UVectorFieldComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
