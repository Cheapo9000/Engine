// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsField/PhysicsFieldComponent.h"

#ifdef ENGINE_PhysicsFieldComponent_generated_h
#error "PhysicsFieldComponent.generated.h already included, missing '#pragma once' in PhysicsFieldComponent.h"
#endif
#define ENGINE_PhysicsFieldComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UPhysicsFieldComponent ***************************************************
struct Z_Construct_UClass_UPhysicsFieldComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsFieldComponent(); \
	friend struct ::Z_Construct_UClass_UPhysicsFieldComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicsFieldComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsFieldComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicsFieldComponent_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsFieldComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_228_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsFieldComponent(UPhysicsFieldComponent&&) = delete; \
	UPhysicsFieldComponent(const UPhysicsFieldComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsFieldComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsFieldComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsFieldComponent) \
	ENGINE_API virtual ~UPhysicsFieldComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_225_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_228_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_228_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsFieldComponent;

// ********** End Class UPhysicsFieldComponent *****************************************************

// ********** Begin Class UPhysicsFieldStatics *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_314_RPC_WRAPPERS \
	DECLARE_FUNCTION(execEvalPhysicsIntegerField); \
	DECLARE_FUNCTION(execEvalPhysicsScalarField); \
	DECLARE_FUNCTION(execEvalPhysicsVectorField);


struct Z_Construct_UClass_UPhysicsFieldStatics_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldStatics_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_314_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsFieldStatics(); \
	friend struct ::Z_Construct_UClass_UPhysicsFieldStatics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicsFieldStatics_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsFieldStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicsFieldStatics_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsFieldStatics)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_314_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsFieldStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsFieldStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsFieldStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsFieldStatics); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsFieldStatics(UPhysicsFieldStatics&&) = delete; \
	UPhysicsFieldStatics(const UPhysicsFieldStatics&) = delete; \
	ENGINE_API virtual ~UPhysicsFieldStatics();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_311_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_314_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_314_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_314_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_314_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsFieldStatics;

// ********** End Class UPhysicsFieldStatics *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
