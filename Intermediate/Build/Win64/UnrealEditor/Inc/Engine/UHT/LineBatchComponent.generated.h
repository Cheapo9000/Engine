// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LineBatchComponent.h"

#ifdef ENGINE_LineBatchComponent_generated_h
#error "LineBatchComponent.generated.h already included, missing '#pragma once' in LineBatchComponent.h"
#endif
#define ENGINE_LineBatchComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBatchedLine ******************************************************
struct Z_Construct_UScriptStruct_FBatchedLine_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBatchedLine_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBatchedLine;
// ********** End ScriptStruct FBatchedLine ********************************************************

// ********** Begin ScriptStruct FBatchedPoint *****************************************************
struct Z_Construct_UScriptStruct_FBatchedPoint_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBatchedPoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBatchedPoint;
// ********** End ScriptStruct FBatchedPoint *******************************************************

// ********** Begin Class ULineBatchComponent ******************************************************
struct Z_Construct_UClass_ULineBatchComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_129_INCLASS \
private: \
	static void StaticRegisterNativesULineBatchComponent(); \
	friend struct ::Z_Construct_UClass_ULineBatchComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULineBatchComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULineBatchComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULineBatchComponent_NoRegister) \
	DECLARE_SERIALIZER(ULineBatchComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULineBatchComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULineBatchComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULineBatchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULineBatchComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULineBatchComponent(ULineBatchComponent&&) = delete; \
	ULineBatchComponent(const ULineBatchComponent&) = delete; \
	ENGINE_API virtual ~ULineBatchComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_126_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_129_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULineBatchComponent;

// ********** End Class ULineBatchComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LineBatchComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
