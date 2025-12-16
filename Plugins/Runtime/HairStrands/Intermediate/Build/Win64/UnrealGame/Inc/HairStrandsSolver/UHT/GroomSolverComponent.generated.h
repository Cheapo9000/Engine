// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomSolverComponent.h"

#ifdef HAIRSTRANDSSOLVER_GroomSolverComponent_generated_h
#error "GroomSolverComponent.generated.h already included, missing '#pragma once' in GroomSolverComponent.h"
#endif
#define HAIRSTRANDSSOLVER_GroomSolverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGroomComponent;
class UMeshComponent;
class UMeshDeformer;

// ********** Begin ScriptStruct FGroomSolverSettings **********************************************
struct Z_Construct_UScriptStruct_FGroomSolverSettings_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGroomSolverSettings_Statics; \
	HAIRSTRANDSSOLVER_API static class UScriptStruct* StaticStruct();


struct FGroomSolverSettings;
// ********** End ScriptStruct FGroomSolverSettings ************************************************

// ********** Begin ScriptStruct FDataflowGroomSolverProxy *****************************************
struct Z_Construct_UScriptStruct_FDataflowGroomSolverProxy_Statics;
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowGroomSolverProxy_Statics; \
	HAIRSTRANDSSOLVER_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowPhysicsSolverProxy Super;


struct FDataflowGroomSolverProxy;
// ********** End ScriptStruct FDataflowGroomSolverProxy *******************************************

// ********** Begin Class UGroomSolverComponent ****************************************************
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDeformerSolver); \
	DECLARE_FUNCTION(execResetCollisionComponents); \
	DECLARE_FUNCTION(execRemoveCollisionComponent); \
	DECLARE_FUNCTION(execAddCollisionComponent); \
	DECLARE_FUNCTION(execResetGroomComponents); \
	DECLARE_FUNCTION(execRemoveGroomComponent); \
	DECLARE_FUNCTION(execAddGroomComponent);


struct Z_Construct_UClass_UGroomSolverComponent_Statics;
HAIRSTRANDSSOLVER_API UClass* Z_Construct_UClass_UGroomSolverComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomSolverComponent(); \
	friend struct ::Z_Construct_UClass_UGroomSolverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSSOLVER_API UClass* ::Z_Construct_UClass_UGroomSolverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomSolverComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HairStrandsSolver"), Z_Construct_UClass_UGroomSolverComponent_NoRegister) \
	DECLARE_SERIALIZER(UGroomSolverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGroomSolverComponent*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_101_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomSolverComponent(UGroomSolverComponent&&) = delete; \
	UGroomSolverComponent(const UGroomSolverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSSOLVER_API, UGroomSolverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomSolverComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomSolverComponent) \
	HAIRSTRANDSSOLVER_API virtual ~UGroomSolverComponent();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_98_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomSolverComponent;

// ********** End Class UGroomSolverComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsSolver_Public_GroomSolverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
