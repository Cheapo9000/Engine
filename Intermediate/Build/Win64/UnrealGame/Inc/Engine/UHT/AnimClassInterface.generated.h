// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimClassInterface.h"

#ifdef ENGINE_AnimClassInterface_generated_h
#error "AnimClassInterface.generated.h already included, missing '#pragma once' in AnimClassInterface.h"
#endif
#define ENGINE_AnimClassInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimBlueprintFunction ********************************************
struct Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimBlueprintFunction;
// ********** End ScriptStruct FAnimBlueprintFunction **********************************************

// ********** Begin ScriptStruct FCachedPoseIndices ************************************************
struct Z_Construct_UScriptStruct_FCachedPoseIndices_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCachedPoseIndices_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCachedPoseIndices;
// ********** End ScriptStruct FCachedPoseIndices **************************************************

// ********** Begin ScriptStruct FGraphAssetPlayerInformation **************************************
struct Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FGraphAssetPlayerInformation;
// ********** End ScriptStruct FGraphAssetPlayerInformation ****************************************

// ********** Begin ScriptStruct FAnimGraphBlendOptions ********************************************
struct Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimGraphBlendOptions;
// ********** End ScriptStruct FAnimGraphBlendOptions **********************************************

// ********** Begin Interface UAnimClassInterface **************************************************
struct Z_Construct_UClass_UAnimClassInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimClassInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimClassInterface(UAnimClassInterface&&) = delete; \
	UAnimClassInterface(const UAnimClassInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimClassInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimClassInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimClassInterface) \
	virtual ~UAnimClassInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_187_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimClassInterface(); \
	friend struct ::Z_Construct_UClass_UAnimClassInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimClassInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimClassInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimClassInterface_NoRegister) \
	DECLARE_SERIALIZER(UAnimClassInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_187_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_187_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_187_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_187_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimClassInterface() {} \
public: \
	typedef UAnimClassInterface UClassType; \
	typedef IAnimClassInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_184_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_187_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimClassInterface;

// ********** End Interface UAnimClassInterface ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
