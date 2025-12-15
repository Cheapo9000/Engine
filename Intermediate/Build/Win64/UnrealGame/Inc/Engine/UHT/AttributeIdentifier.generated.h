// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/AttributeIdentifier.h"

#ifdef ENGINE_AttributeIdentifier_generated_h
#error "AttributeIdentifier.generated.h already included, missing '#pragma once' in AttributeIdentifier.h"
#endif
#define ENGINE_AttributeIdentifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UScriptStruct;
struct FAnimationAttributeIdentifier;

// ********** Begin ScriptStruct FAnimationAttributeIdentifier *************************************
struct Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimationAttributeIdentifier;
// ********** End ScriptStruct FAnimationAttributeIdentifier ***************************************

// ********** Begin ScriptStruct FAnimationAttributeIdentifierArray ********************************
struct Z_Construct_UScriptStruct_FAnimationAttributeIdentifierArray_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_100_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimationAttributeIdentifierArray_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimationAttributeIdentifierArray;
// ********** End ScriptStruct FAnimationAttributeIdentifierArray **********************************

// ********** Begin Class UAnimationAttributeIdentifierExtensions **********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValid);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execCreateAttributeIdentifier);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAttributeIdentifierExtensions(); \
	friend struct ::Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationAttributeIdentifierExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_NoRegister) \
	DECLARE_SERIALIZER(UAnimationAttributeIdentifierExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationAttributeIdentifierExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationAttributeIdentifierExtensions(UAnimationAttributeIdentifierExtensions&&) = delete; \
	UAnimationAttributeIdentifierExtensions(const UAnimationAttributeIdentifierExtensions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationAttributeIdentifierExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAttributeIdentifierExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAttributeIdentifierExtensions) \
	ENGINE_API virtual ~UAnimationAttributeIdentifierExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_116_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationAttributeIdentifierExtensions;

// ********** End Class UAnimationAttributeIdentifierExtensions ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
