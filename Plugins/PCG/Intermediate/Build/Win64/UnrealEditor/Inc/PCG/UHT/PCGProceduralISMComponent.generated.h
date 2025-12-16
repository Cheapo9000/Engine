// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PCGProceduralISMComponent.h"

#ifdef PCG_PCGProceduralISMComponent_generated_h
#error "PCGProceduralISMComponent.generated.h already included, missing '#pragma once' in PCGProceduralISMComponent.h"
#endif
#define PCG_PCGProceduralISMComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGProceduralISMComponent ***********************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetLocalBounds); \
	DECLARE_FUNCTION(execGetMinDrawDistance); \
	DECLARE_FUNCTION(execSetMinDrawDistance); \
	DECLARE_FUNCTION(execGetCullDistances); \
	DECLARE_FUNCTION(execSetCullDistances); \
	DECLARE_FUNCTION(execClearInstances); \
	DECLARE_FUNCTION(execSetBounds); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execSetNumCustomDataFloats); \
	DECLARE_FUNCTION(execGetNumCustomDataFloats); \
	DECLARE_FUNCTION(execSetNumInstances); \
	DECLARE_FUNCTION(execGetNumInstances);


struct Z_Construct_UClass_UPCGProceduralISMComponent_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGProceduralISMComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUPCGProceduralISMComponent(); \
	friend struct ::Z_Construct_UClass_UPCGProceduralISMComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGProceduralISMComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGProceduralISMComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGProceduralISMComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGProceduralISMComponent)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGProceduralISMComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGProceduralISMComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGProceduralISMComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGProceduralISMComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGProceduralISMComponent(UPCGProceduralISMComponent&&) = delete; \
	UPCGProceduralISMComponent(const UPCGProceduralISMComponent&) = delete; \
	PCG_API virtual ~UPCGProceduralISMComponent();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_32_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_35_INCLASS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGProceduralISMComponent;

// ********** End Class UPCGProceduralISMComponent *************************************************

// ********** Begin Class UPCGManagedProceduralISMComponent ****************************************
struct Z_Construct_UClass_UPCGManagedProceduralISMComponent_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedProceduralISMComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedProceduralISMComponent(); \
	friend struct ::Z_Construct_UClass_UPCGManagedProceduralISMComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedProceduralISMComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedProceduralISMComponent, UPCGManagedComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedProceduralISMComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedProceduralISMComponent)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_200_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGManagedProceduralISMComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedProceduralISMComponent(UPCGManagedProceduralISMComponent&&) = delete; \
	UPCGManagedProceduralISMComponent(const UPCGManagedProceduralISMComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGManagedProceduralISMComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedProceduralISMComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedProceduralISMComponent) \
	PCG_API virtual ~UPCGManagedProceduralISMComponent();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_197_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_200_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedProceduralISMComponent;

// ********** End Class UPCGManagedProceduralISMComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Components_PCGProceduralISMComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
