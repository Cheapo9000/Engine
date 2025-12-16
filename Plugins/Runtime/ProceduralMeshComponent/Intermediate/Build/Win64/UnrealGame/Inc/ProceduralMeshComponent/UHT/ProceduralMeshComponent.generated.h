// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralMeshComponent.h"

#ifdef PROCEDURALMESHCOMPONENT_ProceduralMeshComponent_generated_h
#error "ProceduralMeshComponent.generated.h already included, missing '#pragma once' in ProceduralMeshComponent.h"
#endif
#define PROCEDURALMESHCOMPONENT_ProceduralMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FLinearColor;
struct FProcMeshTangent;

// ********** Begin ScriptStruct FProcMeshTangent **************************************************
struct Z_Construct_UScriptStruct_FProcMeshTangent_Statics;
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProcMeshTangent_Statics; \
	PROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


struct FProcMeshTangent;
// ********** End ScriptStruct FProcMeshTangent ****************************************************

// ********** Begin ScriptStruct FProcMeshVertex ***************************************************
struct Z_Construct_UScriptStruct_FProcMeshVertex_Statics;
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProcMeshVertex_Statics; \
	PROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


struct FProcMeshVertex;
// ********** End ScriptStruct FProcMeshVertex *****************************************************

// ********** Begin ScriptStruct FProcMeshSection **************************************************
struct Z_Construct_UScriptStruct_FProcMeshSection_Statics;
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProcMeshSection_Statics; \
	PROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


struct FProcMeshSection;
// ********** End ScriptStruct FProcMeshSection ****************************************************

// ********** Begin Class UProceduralMeshComponent *************************************************
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


struct Z_Construct_UClass_UProceduralMeshComponent_Statics;
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralMeshComponent(); \
	friend struct ::Z_Construct_UClass_UProceduralMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALMESHCOMPONENT_API UClass* ::Z_Construct_UClass_UProceduralMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UProceduralMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), Z_Construct_UClass_UProceduralMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UProceduralMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UProceduralMeshComponent*>(this); }


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_151_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProceduralMeshComponent(UProceduralMeshComponent&&) = delete; \
	UProceduralMeshComponent(const UProceduralMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALMESHCOMPONENT_API, UProceduralMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralMeshComponent) \
	PROCEDURALMESHCOMPONENT_API virtual ~UProceduralMeshComponent();


#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_148_PROLOG
#define FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_151_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProceduralMeshComponent;

// ********** End Class UProceduralMeshComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
