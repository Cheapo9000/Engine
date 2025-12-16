// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomMeshComponent.h"

#ifdef CUSTOMMESHCOMPONENT_CustomMeshComponent_generated_h
#error "CustomMeshComponent.generated.h already included, missing '#pragma once' in CustomMeshComponent.h"
#endif
#define CUSTOMMESHCOMPONENT_CustomMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCustomMeshTriangle;

// ********** Begin ScriptStruct FCustomMeshTriangle ***********************************************
struct Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics;
#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics; \
	CUSTOMMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


struct FCustomMeshTriangle;
// ********** End ScriptStruct FCustomMeshTriangle *************************************************

// ********** Begin Class UCustomMeshComponent *****************************************************
#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_33_RPC_WRAPPERS \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


struct Z_Construct_UClass_UCustomMeshComponent_Statics;
CUSTOMMESHCOMPONENT_API UClass* Z_Construct_UClass_UCustomMeshComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUCustomMeshComponent(); \
	friend struct ::Z_Construct_UClass_UCustomMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMMESHCOMPONENT_API UClass* ::Z_Construct_UClass_UCustomMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomMeshComponent"), Z_Construct_UClass_UCustomMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UCustomMeshComponent)


#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMMESHCOMPONENT_API UCustomMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMMESHCOMPONENT_API, UCustomMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomMeshComponent(UCustomMeshComponent&&) = delete; \
	UCustomMeshComponent(const UCustomMeshComponent&) = delete; \
	CUSTOMMESHCOMPONENT_API virtual ~UCustomMeshComponent();


#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_33_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_33_INCLASS \
	FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomMeshComponent;

// ********** End Class UCustomMeshComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
