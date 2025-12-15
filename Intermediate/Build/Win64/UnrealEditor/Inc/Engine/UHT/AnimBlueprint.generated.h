// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimBlueprint.h"

#ifdef ENGINE_AnimBlueprint_generated_h
#error "AnimBlueprint.generated.h already included, missing '#pragma once' in AnimBlueprint.h"
#endif
#define ENGINE_AnimBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimGroupInfo ****************************************************
struct Z_Construct_UScriptStruct_FAnimGroupInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimGroupInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimGroupInfo;
// ********** End ScriptStruct FAnimGroupInfo ******************************************************

// ********** Begin ScriptStruct FAnimParentNodeAssetOverride **************************************
struct Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAnimParentNodeAssetOverride;
// ********** End ScriptStruct FAnimParentNodeAssetOverride ****************************************

// ********** Begin Class UAnimBlueprint ***********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprint, ENGINE_API)


struct Z_Construct_UClass_UAnimBlueprint_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBlueprint(); \
	friend struct ::Z_Construct_UClass_UAnimBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UAnimBlueprint) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimBlueprint*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimBlueprint(UAnimBlueprint&&) = delete; \
	UAnimBlueprint(const UAnimBlueprint&) = delete; \
	ENGINE_API virtual ~UAnimBlueprint();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_80_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimBlueprint;

// ********** End Class UAnimBlueprint *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h

// ********** Begin Enum EPreviewAnimationBlueprintApplicationMethod *******************************
#define FOREACH_ENUM_EPREVIEWANIMATIONBLUEPRINTAPPLICATIONMETHOD(op) \
	op(EPreviewAnimationBlueprintApplicationMethod::LinkedLayers) \
	op(EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph) 

enum class EPreviewAnimationBlueprintApplicationMethod : uint8;
template<> struct TIsUEnumClass<EPreviewAnimationBlueprintApplicationMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPreviewAnimationBlueprintApplicationMethod>();
// ********** End Enum EPreviewAnimationBlueprintApplicationMethod *********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
