// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/AnimDataModel.h"

#ifdef ENGINE_AnimDataModel_generated_h
#error "AnimDataModel.generated.h already included, missing '#pragma once' in AnimDataModel.h"
#endif
#define ENGINE_AnimDataModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimDataModel ***********************************************************
struct Z_Construct_UClass_UAnimDataModel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimDataModel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDataModel(); \
	friend struct ::Z_Construct_UClass_UAnimDataModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimDataModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimDataModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimDataModel_NoRegister) \
	DECLARE_SERIALIZER(UAnimDataModel) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimDataModel*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimDataModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimDataModel(UAnimDataModel&&) = delete; \
	UAnimDataModel(const UAnimDataModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimDataModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDataModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimDataModel) \
	ENGINE_API virtual ~UAnimDataModel();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimDataModel;

// ********** End Class UAnimDataModel *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
