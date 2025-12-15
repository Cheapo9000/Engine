// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimMetaData.h"

#ifdef ENGINE_AnimMetaData_generated_h
#error "AnimMetaData.generated.h already included, missing '#pragma once' in AnimMetaData.h"
#endif
#define ENGINE_AnimMetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimMetaData ************************************************************
struct Z_Construct_UClass_UAnimMetaData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimMetaData(); \
	friend struct ::Z_Construct_UClass_UAnimMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimMetaData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimMetaData_NoRegister) \
	DECLARE_SERIALIZER(UAnimMetaData)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMetaData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMetaData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimMetaData(UAnimMetaData&&) = delete; \
	UAnimMetaData(const UAnimMetaData&) = delete; \
	ENGINE_API virtual ~UAnimMetaData();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimMetaData;

// ********** End Class UAnimMetaData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
