// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FuncTestRenderingComponent.h"

#ifdef FUNCTIONALTESTING_FuncTestRenderingComponent_generated_h
#error "FuncTestRenderingComponent.generated.h already included, missing '#pragma once' in FuncTestRenderingComponent.h"
#endif
#define FUNCTIONALTESTING_FuncTestRenderingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFuncTestRenderingComponent **********************************************
struct Z_Construct_UClass_UFuncTestRenderingComponent_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFuncTestRenderingComponent(); \
	friend struct ::Z_Construct_UClass_UFuncTestRenderingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuncTestRenderingComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister) \
	DECLARE_SERIALIZER(UFuncTestRenderingComponent)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuncTestRenderingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuncTestRenderingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuncTestRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuncTestRenderingComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuncTestRenderingComponent(UFuncTestRenderingComponent&&) = delete; \
	UFuncTestRenderingComponent(const UFuncTestRenderingComponent&) = delete; \
	NO_API virtual ~UFuncTestRenderingComponent();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_12_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_15_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuncTestRenderingComponent;

// ********** End Class UFuncTestRenderingComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
